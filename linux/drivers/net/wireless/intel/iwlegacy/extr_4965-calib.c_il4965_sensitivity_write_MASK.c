
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct il_sensitivity_data {int dummy; } ;
struct il_sensitivity_cmd {int * table; int control; } ;
struct il_priv {int * sensitivity_tbl; struct il_sensitivity_data sensitivity_data; } ;
struct il_host_cmd {int len; struct il_sensitivity_cmd* data; int flags; int id; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*,struct il_sensitivity_data*,int *) ;
 int FUNC_2 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct il_sensitivity_cmd*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_4)
{
 struct il_sensitivity_cmd VAR_5;
 struct il_sensitivity_data *VAR_6 = ((void*)0);
 struct il_host_cmd VAR_7 = {
  .id = VAR_1,
  .len = sizeof(struct il_sensitivity_cmd),
  .flags = VAR_0,
  .data = &VAR_5,
 };

 VAR_6 = &(VAR_4->sensitivity_data);

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 FUNC_1(VAR_4, VAR_6, &VAR_5.table[0]);


 VAR_5.control = VAR_2;


 if (!FUNC_3
     (&VAR_5.table[0], &(VAR_4->sensitivity_tbl[0]),
      sizeof(u16) * VAR_3)) {
  FUNC_0("No change in C_SENSITIVITY\n");
  return 0;
 }


 FUNC_4(&(VAR_4->sensitivity_tbl[0]), &(VAR_5.table[0]),
        sizeof(u16) * VAR_3);

 return FUNC_2(VAR_4, &VAR_7);
}
