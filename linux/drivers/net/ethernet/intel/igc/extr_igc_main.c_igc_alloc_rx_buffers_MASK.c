
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_2__ upper; } ;
struct TYPE_4__ {int pkt_addr; } ;
union igc_adv_rx_desc {TYPE_3__ wb; TYPE_1__ read; } ;
typedef size_t u16 ;
struct igc_rx_buffer {scalar_t__ page_offset; scalar_t__ dma; } ;
struct igc_ring {size_t next_to_use; size_t next_to_alloc; int tail; scalar_t__ count; struct igc_rx_buffer* rx_buffer_info; int dev; } ;


 int VAR_0 ;
 union igc_adv_rx_desc* FUNC_0 (struct igc_ring*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,size_t,int ) ;
 int FUNC_3 (struct igc_ring*,struct igc_rx_buffer*) ;
 size_t FUNC_4 (struct igc_ring*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (size_t,int ) ;

__attribute__((used)) static void FUNC_8(struct igc_ring *VAR_1, u16 VAR_2)
{
 union igc_adv_rx_desc *VAR_3;
 u16 VAR_4 = VAR_1->next_to_use;
 struct igc_rx_buffer *VAR_5;
 u16 VAR_6;


 if (!VAR_2)
  return;

 VAR_3 = FUNC_0(VAR_1, VAR_4);
 VAR_5 = &VAR_1->rx_buffer_info[VAR_4];
 VAR_4 -= VAR_1->count;

 VAR_6 = FUNC_4(VAR_1);

 do {
  if (!FUNC_3(VAR_1, VAR_5))
   break;


  FUNC_2(VAR_1->dev, VAR_5->dma,
       VAR_5->page_offset, VAR_6,
       VAR_0);




  VAR_3->read.pkt_addr = FUNC_1(VAR_5->dma + VAR_5->page_offset);

  VAR_3++;
  VAR_5++;
  VAR_4++;
  if (FUNC_5(!VAR_4)) {
   VAR_3 = FUNC_0(VAR_1, 0);
   VAR_5 = VAR_1->rx_buffer_info;
   VAR_4 -= VAR_1->count;
  }


  VAR_3->wb.upper.length = 0;

  VAR_2--;
 } while (VAR_2);

 VAR_4 += VAR_1->count;

 if (VAR_1->next_to_use != VAR_4) {

  VAR_1->next_to_use = VAR_4;


  VAR_1->next_to_alloc = VAR_4;






  FUNC_6();
  FUNC_7(VAR_4, VAR_1->tail);
 }
}
