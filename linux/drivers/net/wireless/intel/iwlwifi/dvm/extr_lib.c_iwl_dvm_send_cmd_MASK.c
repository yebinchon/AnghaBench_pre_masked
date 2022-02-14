
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int trans; int mutex; int ucode_loaded; int status; } ;
struct iwl_host_cmd {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 scalar_t__ FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int ,struct iwl_host_cmd*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct iwl_priv *VAR_3, struct iwl_host_cmd *VAR_4)
{
 if (FUNC_4(VAR_3) || FUNC_3(VAR_3)) {
  FUNC_1(VAR_3, "Not sending command - %s KILL\n",
    FUNC_4(VAR_3) ? "RF" : "CT");
  return -VAR_1;
 }

 if (FUNC_7(VAR_2, &VAR_3->status)) {
  FUNC_0(VAR_3, "Command %s failed: FW Error\n",
   FUNC_2(VAR_3->trans, VAR_4->id));
  return -VAR_1;
 }





 if (!VAR_3->ucode_loaded) {
  FUNC_0(VAR_3, "Fw not loaded - dropping CMD: %x\n", VAR_4->id);
  return -VAR_1;
 }






 if (!(VAR_4->flags & VAR_0))
  FUNC_6(&VAR_3->mutex);

 return FUNC_5(VAR_3->trans, VAR_4);
}
