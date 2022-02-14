
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int trans; int mutex; int d3_test_active; } ;
struct iwl_host_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iwl_host_cmd*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iwl_mvm *VAR_4, struct iwl_host_cmd *VAR_5)
{
 int VAR_6;
 if (!(VAR_5->flags & VAR_0))
  FUNC_2(&VAR_4->mutex);

 VAR_6 = FUNC_1(VAR_4->trans, VAR_5);






 if (VAR_5->flags & VAR_1)
  return VAR_6;


 if (!VAR_6 || VAR_6 == -VAR_3)
  return 0;
 return VAR_6;
}
