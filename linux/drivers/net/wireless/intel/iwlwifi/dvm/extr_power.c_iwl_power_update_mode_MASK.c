
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_powertable_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,struct iwl_powertable_cmd*) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_powertable_cmd*,int) ;

int FUNC_2(struct iwl_priv *VAR_0, bool VAR_1)
{
 struct iwl_powertable_cmd VAR_2;

 FUNC_0(VAR_0, &VAR_2);
 return FUNC_1(VAR_0, &VAR_2, VAR_1);
}
