
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
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 int FUNC_1 (struct iwl_trans*,char*,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_host_cmd*) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_host_cmd*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct iwl_trans *VAR_6,
      struct iwl_host_cmd *VAR_7)
{
 if (!(VAR_7->flags & VAR_1) &&
     FUNC_6(VAR_5, &VAR_6->status)) {
  FUNC_0(VAR_6, "Dropping CMD 0x%x: RF KILL\n",
      VAR_7->id);
  return -VAR_4;
 }

 if (VAR_7->flags & VAR_0) {
  int VAR_8;


  if (FUNC_2(VAR_7->flags & VAR_2))
   return -VAR_3;

  VAR_8 = FUNC_4(VAR_6, VAR_7);
  if (VAR_8 < 0) {
   FUNC_1(VAR_6,
    "Error sending %s: enqueue_hcmd failed: %d\n",
    FUNC_3(VAR_6, VAR_7->id), VAR_8);
   return VAR_8;
  }
  return 0;
 }

 return FUNC_5(VAR_6, VAR_7);
}
