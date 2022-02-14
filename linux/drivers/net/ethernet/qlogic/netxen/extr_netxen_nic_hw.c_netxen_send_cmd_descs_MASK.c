
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nx_host_tx_ring {int producer; int txq; int num_desc; int * desc_head; struct netxen_cmd_buffer* cmd_buf_arr; } ;
struct netxen_cmd_buffer {scalar_t__ frag_count; int * skb; } ;
struct netxen_adapter {scalar_t__ is_up; struct nx_host_tx_ring* tx_ring; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct cmd_desc_type0*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct netxen_adapter*,struct nx_host_tx_ring*) ;
 int FUNC_7 (struct nx_host_tx_ring*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct netxen_adapter *VAR_4,
  struct cmd_desc_type0 *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;
 struct netxen_cmd_buffer *VAR_9;
 struct nx_host_tx_ring *VAR_10;

 VAR_7 = 0;

 if (VAR_4->is_up != VAR_2)
  return -VAR_1;

 VAR_10 = VAR_4->tx_ring;
 FUNC_0(VAR_10->txq);

 VAR_8 = VAR_10->producer;

 if (VAR_6 >= FUNC_7(VAR_10)) {
  FUNC_4(VAR_10->txq);
  FUNC_8();
  if (FUNC_7(VAR_10) > VAR_6) {
   if (FUNC_7(VAR_10) > VAR_3)
    FUNC_5(VAR_10->txq);
  } else {
   FUNC_1(VAR_10->txq);
   return -VAR_0;
  }
 }

 do {
  VAR_9 = &VAR_10->cmd_buf_arr[VAR_8];
  VAR_9->skb = ((void*)0);
  VAR_9->frag_count = 0;

  FUNC_3(&VAR_10->desc_head[VAR_8],
   &VAR_5[VAR_7], sizeof(struct cmd_desc_type0));

  VAR_8 = FUNC_2(VAR_8, VAR_10->num_desc);
  VAR_7++;

 } while (VAR_7 != VAR_6);

 VAR_10->producer = VAR_8;

 FUNC_6(VAR_4, VAR_10);

 FUNC_1(VAR_10->txq);

 return 0;
}
