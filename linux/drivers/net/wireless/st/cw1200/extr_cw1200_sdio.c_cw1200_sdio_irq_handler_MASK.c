
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct hwbus_priv {scalar_t__ core; } ;


 int FUNC_0 (scalar_t__) ;
 struct hwbus_priv* FUNC_1 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_2(struct sdio_func *VAR_0)
{
 struct hwbus_priv *VAR_1 = FUNC_1(VAR_0);


 if (VAR_1->core)
  FUNC_0(VAR_1->core);
}
