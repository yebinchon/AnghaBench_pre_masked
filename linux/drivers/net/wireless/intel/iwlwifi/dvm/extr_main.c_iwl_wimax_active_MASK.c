
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int status; } ;
struct iwl_op_mode {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_op_mode *VAR_1)
{
 struct iwl_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_0, &VAR_2->status);
 FUNC_0(VAR_2, "RF is used by WiMAX\n");
}
