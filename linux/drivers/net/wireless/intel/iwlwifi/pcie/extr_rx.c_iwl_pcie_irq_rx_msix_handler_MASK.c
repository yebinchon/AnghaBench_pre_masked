
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msix_entry {int entry; } ;
struct iwl_trans_pcie {struct iwl_trans* trans; } ;
struct iwl_trans {int sync_cmd_lockdep_map; int num_rx_queues; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_trans*,struct msix_entry*) ;
 struct iwl_trans_pcie* FUNC_2 (struct msix_entry*) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct msix_entry*,int,int ,int ) ;

irqreturn_t FUNC_9(int VAR_2, void *VAR_3)
{
 struct msix_entry *VAR_4 = VAR_3;
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_4);
 struct iwl_trans *VAR_6 = VAR_5->trans;

 FUNC_8(VAR_6->dev, VAR_4, 0, 0, 0);

 if (FUNC_0(VAR_4->entry >= VAR_6->num_rx_queues))
  return VAR_1;

 FUNC_6(&VAR_6->sync_cmd_lockdep_map);

 FUNC_4();
 FUNC_3(VAR_6, VAR_4->entry);
 FUNC_5();

 FUNC_1(VAR_6, VAR_4);

 FUNC_7(&VAR_6->sync_cmd_lockdep_map);

 return VAR_0;
}
