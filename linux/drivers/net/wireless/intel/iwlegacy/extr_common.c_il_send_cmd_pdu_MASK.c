
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct il_host_cmd {void const* data; int len; int id; } ;


 int FUNC_0 (struct il_priv*,struct il_host_cmd*) ;

int
FUNC_1(struct il_priv *VAR_0, u8 VAR_1, u16 VAR_2, const void *VAR_3)
{
 struct il_host_cmd VAR_4 = {
  .id = VAR_1,
  .len = VAR_2,
  .data = VAR_3,
 };

 return FUNC_0(VAR_0, &VAR_4);
}
