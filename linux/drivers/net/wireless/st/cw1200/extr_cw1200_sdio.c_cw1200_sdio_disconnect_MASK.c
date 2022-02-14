
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct hwbus_priv {int * core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hwbus_priv*) ;
 int FUNC_2 (struct hwbus_priv*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 struct hwbus_priv* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*,int *) ;

__attribute__((used)) static void FUNC_8(struct sdio_func *VAR_0)
{
 struct hwbus_priv *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1) {
  FUNC_1(VAR_1);
  if (VAR_1->core) {
   FUNC_0(VAR_1->core);
   VAR_1->core = ((void*)0);
  }
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
  FUNC_6(VAR_0);
  FUNC_7(VAR_0, ((void*)0));
  FUNC_2(VAR_1);
 }
}
