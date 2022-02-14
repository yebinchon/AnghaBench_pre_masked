
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int num_tx_queues; int num_rx_queues; int flags; int stats_lock; int rx_buffer_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_4)
{
 VAR_4->rx_buffer_len = VAR_1;

 VAR_4->num_tx_queues = 1;
 VAR_4->num_rx_queues = 1;

 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_3, "Unable to allocate memory for queues\n");
  return -VAR_0;
 }


 FUNC_1(VAR_4);

 FUNC_4(&VAR_4->stats_lock);

 FUNC_3(VAR_2, &VAR_4->flags);

 return 0;
}
