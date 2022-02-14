
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status_error_len; } ;
struct TYPE_6__ {TYPE_2__ qword1; } ;
struct TYPE_4__ {int pkt_addr; } ;
union i40e_rx_desc {TYPE_3__ wb; TYPE_1__ read; } ;
typedef size_t u16 ;
struct i40e_rx_buffer {scalar_t__ page_offset; scalar_t__ dma; } ;
struct i40e_ring {size_t next_to_use; size_t count; struct i40e_rx_buffer* rx_bi; int rx_buf_len; int dev; int netdev; } ;


 int VAR_0 ;
 union i40e_rx_desc* FUNC_0 (struct i40e_ring*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (struct i40e_ring*,struct i40e_rx_buffer*) ;
 int FUNC_4 (struct i40e_ring*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(struct i40e_ring *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = VAR_1->next_to_use;
 union i40e_rx_desc *VAR_4;
 struct i40e_rx_buffer *VAR_5;


 if (!VAR_1->netdev || !VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 VAR_5 = &VAR_1->rx_bi[VAR_3];

 do {
  if (!FUNC_3(VAR_1, VAR_5))
   goto no_buffers;


  FUNC_2(VAR_1->dev, VAR_5->dma,
       VAR_5->page_offset,
       VAR_1->rx_buf_len,
       VAR_0);




  VAR_4->read.pkt_addr = FUNC_1(VAR_5->dma + VAR_5->page_offset);

  VAR_4++;
  VAR_5++;
  VAR_3++;
  if (FUNC_5(VAR_3 == VAR_1->count)) {
   VAR_4 = FUNC_0(VAR_1, 0);
   VAR_5 = VAR_1->rx_bi;
   VAR_3 = 0;
  }


  VAR_4->wb.qword1.status_error_len = 0;

  VAR_2--;
 } while (VAR_2);

 if (VAR_1->next_to_use != VAR_3)
  FUNC_4(VAR_1, VAR_3);

 return 0;

no_buffers:
 if (VAR_1->next_to_use != VAR_3)
  FUNC_4(VAR_1, VAR_3);




 return 1;
}
