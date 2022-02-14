
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct iwl_trans_ops {int wait_tx_queues_empty; int wait_txq_empty; } ;
struct iwl_trans {int num_rx_queues; int dev_cmd_pool; int dev_cmd_pool_name; struct device* dev; struct iwl_trans_ops const* ops; int sync_cmd_lockdep_map; } ;
struct iwl_device_cmd {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (struct device*) ;
 struct iwl_trans* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int ,int,int,int ,int *) ;
 int FUNC_4 (int *,char*,struct lock_class_key*,int ) ;
 int FUNC_5 (int ,int,char*,char*) ;

struct iwl_trans *FUNC_6(unsigned int VAR_2,
      struct device *VAR_3,
      const struct iwl_trans_ops *VAR_4)
{
 struct iwl_trans *VAR_5;




 VAR_5 = FUNC_2(VAR_3, sizeof(*VAR_5) + VAR_2, VAR_0);
 if (!VAR_5)
  return ((void*)0);






 VAR_5->dev = VAR_3;
 VAR_5->ops = VAR_4;
 VAR_5->num_rx_queues = 1;

 FUNC_5(VAR_5->dev_cmd_pool_name, sizeof(VAR_5->dev_cmd_pool_name),
   "iwl_cmd_pool:%s", FUNC_1(VAR_5->dev));
 VAR_5->dev_cmd_pool =
  FUNC_3(VAR_5->dev_cmd_pool_name,
      sizeof(struct iwl_device_cmd),
      sizeof(void *),
      VAR_1,
      ((void*)0));
 if (!VAR_5->dev_cmd_pool)
  return ((void*)0);

 FUNC_0(!VAR_4->wait_txq_empty && !VAR_4->wait_tx_queues_empty);

 return VAR_5;
}
