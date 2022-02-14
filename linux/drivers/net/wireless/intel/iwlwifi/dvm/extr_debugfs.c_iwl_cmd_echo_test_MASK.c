
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {int len; int id; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct iwl_priv*,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_1)
{
 int VAR_2;
 struct iwl_host_cmd VAR_3 = {
  .id = VAR_0,
  .len = 0 ,
 };

 VAR_2 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_2)
  FUNC_1(VAR_1, "echo testing fail: 0X%x\n", VAR_2);
 else
  FUNC_0(VAR_1, "echo testing pass\n");
 return VAR_2;
}
