
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_host_tx_ring {int producer; int txq; int num_desc; int * desc_head; struct qlcnic_cmd_buffer* cmd_buf_arr; } ;
struct qlcnic_cmd_buffer {scalar_t__ frag_count; int * skb; } ;
struct TYPE_2__ {int xmit_off; } ;
struct qlcnic_adapter {TYPE_1__ stats; struct qlcnic_host_tx_ring* tx_ring; int state; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct cmd_desc_type0*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qlcnic_host_tx_ring*) ;
 int FUNC_7 (struct qlcnic_host_tx_ring*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(struct qlcnic_adapter *VAR_4,
  struct cmd_desc_type0 *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;
 struct qlcnic_cmd_buffer *VAR_9;
 struct cmd_desc_type0 *VAR_10;
 struct qlcnic_host_tx_ring *VAR_11;

 VAR_7 = 0;

 if (!FUNC_9(VAR_3, &VAR_4->state))
  return -VAR_1;

 VAR_11 = &VAR_4->tx_ring[0];
 FUNC_0(VAR_11->txq);

 VAR_8 = VAR_11->producer;

 if (VAR_6 >= FUNC_6(VAR_11)) {
  FUNC_4(VAR_11->txq);
  FUNC_8();
  if (FUNC_6(VAR_11) > VAR_6) {
   if (FUNC_6(VAR_11) > VAR_2)
    FUNC_5(VAR_11->txq);
  } else {
   VAR_4->stats.xmit_off++;
   FUNC_1(VAR_11->txq);
   return -VAR_0;
  }
 }

 do {
  VAR_10 = &VAR_5[VAR_7];

  VAR_9 = &VAR_11->cmd_buf_arr[VAR_8];
  VAR_9->skb = ((void*)0);
  VAR_9->frag_count = 0;

  FUNC_3(&VAR_11->desc_head[VAR_8],
         VAR_10, sizeof(struct cmd_desc_type0));

  VAR_8 = FUNC_2(VAR_8, VAR_11->num_desc);
  VAR_7++;

 } while (VAR_7 != VAR_6);

 VAR_11->producer = VAR_8;

 FUNC_7(VAR_11);

 FUNC_1(VAR_11->txq);

 return 0;
}
