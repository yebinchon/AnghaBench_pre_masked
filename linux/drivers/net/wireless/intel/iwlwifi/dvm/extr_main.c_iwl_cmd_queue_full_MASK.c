
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_op_mode {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct iwl_op_mode*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_op_mode *VAR_0)
{
 struct iwl_priv *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_2(VAR_1)) {
  FUNC_0(VAR_1, "Restarting adapter queue is full\n");
  FUNC_3(VAR_1, 0);
 }
}
