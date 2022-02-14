
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct il_host_cmd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_1 (struct il_priv*,struct il_host_cmd*) ;

int
FUNC_2(struct il_priv *VAR_1, struct il_host_cmd *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_1, VAR_2);
}
