
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int dummy; } ;
struct host_cmd {void* param; int len; int cmd; } ;


 int FUNC_0 (struct ipw_priv*,struct host_cmd*) ;

__attribute__((used)) static int FUNC_1(struct ipw_priv *VAR_0, u8 VAR_1, u8 VAR_2,
       void *VAR_3)
{
 struct host_cmd VAR_4 = {
  .cmd = VAR_1,
  .len = VAR_2,
  .param = VAR_3,
 };

 return FUNC_0(VAR_0, &VAR_4);
}
