
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int status; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_host_cmd*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct iwl_trans *VAR_6, struct iwl_host_cmd *VAR_7)
{

 if (FUNC_3(VAR_5, &VAR_6->status))
  return -VAR_2;

 if (!(VAR_7->flags & VAR_1) &&
     FUNC_3(VAR_4, &VAR_6->status)) {
  FUNC_0(VAR_6, "Dropping CMD 0x%x: RF KILL\n",
      VAR_7->id);
  return -VAR_3;
 }

 if (VAR_7->flags & VAR_0)
  return FUNC_1(VAR_6, VAR_7);


 return FUNC_2(VAR_6, VAR_7);
}
