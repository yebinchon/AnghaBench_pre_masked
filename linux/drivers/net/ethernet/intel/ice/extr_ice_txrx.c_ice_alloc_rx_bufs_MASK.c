
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status_error0; } ;
struct TYPE_3__ {int pkt_addr; } ;
union ice_32b_rx_flex_desc {TYPE_2__ wb; TYPE_1__ read; } ;
typedef size_t u16 ;
struct ice_rx_buf {scalar_t__ page_offset; scalar_t__ dma; } ;
struct ice_ring {size_t next_to_use; size_t count; struct ice_rx_buf* rx_buf; int dev; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 union ice_32b_rx_flex_desc* FUNC_0 (struct ice_ring*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ice_ring*,struct ice_rx_buf*) ;
 int FUNC_4 (struct ice_ring*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(struct ice_ring *VAR_2, u16 VAR_3)
{
 union ice_32b_rx_flex_desc *VAR_4;
 u16 VAR_5 = VAR_2->next_to_use;
 struct ice_rx_buf *VAR_6;


 if (!VAR_2->netdev || !VAR_3)
  return 0;


 VAR_4 = FUNC_0(VAR_2, VAR_5);
 VAR_6 = &VAR_2->rx_buf[VAR_5];

 do {

  if (!FUNC_3(VAR_2, VAR_6))
   break;


  FUNC_2(VAR_2->dev, VAR_6->dma,
       VAR_6->page_offset,
       VAR_1,
       VAR_0);




  VAR_4->read.pkt_addr = FUNC_1(VAR_6->dma + VAR_6->page_offset);

  VAR_4++;
  VAR_6++;
  VAR_5++;
  if (FUNC_5(VAR_5 == VAR_2->count)) {
   VAR_4 = FUNC_0(VAR_2, 0);
   VAR_6 = VAR_2->rx_buf;
   VAR_5 = 0;
  }


  VAR_4->wb.status_error0 = 0;

  VAR_3--;
 } while (VAR_3);

 if (VAR_2->next_to_use != VAR_5)
  FUNC_4(VAR_2, VAR_5);

 return !!VAR_3;
}
