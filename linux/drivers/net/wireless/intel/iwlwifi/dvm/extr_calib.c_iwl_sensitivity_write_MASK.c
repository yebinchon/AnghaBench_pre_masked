
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_sensitivity_data {int dummy; } ;
struct iwl_sensitivity_cmd {int * table; int control; } ;
struct iwl_priv {int * sensitivity_tbl; struct iwl_sensitivity_data sensitivity_data; } ;
struct iwl_host_cmd {int data; int flags; int len; int id; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_sensitivity_data*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct iwl_sensitivity_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_4)
{
 struct iwl_sensitivity_cmd VAR_5;
 struct iwl_sensitivity_data *VAR_6 = ((void*)0);
 struct iwl_host_cmd VAR_7 = {
  .id = VAR_2,
  .len = sizeof(struct iwl_sensitivity_cmd), 
  .flags = VAR_0,
  .data = &VAR_5, 
 };

 VAR_6 = &(VAR_4->sensitivity_data);

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 FUNC_2(VAR_4, VAR_6, &VAR_5.table[0]);


 VAR_5.control = VAR_3;


 if (!FUNC_3(&VAR_5.table[0], &(VAR_4->sensitivity_tbl[0]),
      sizeof(u16)*VAR_1)) {
  FUNC_0(VAR_4, "No change in SENSITIVITY_CMD\n");
  return 0;
 }


 FUNC_4(&(VAR_4->sensitivity_tbl[0]), &(VAR_5.table[0]),
        sizeof(u16)*VAR_1);

 return FUNC_1(VAR_4, &VAR_7);
}
