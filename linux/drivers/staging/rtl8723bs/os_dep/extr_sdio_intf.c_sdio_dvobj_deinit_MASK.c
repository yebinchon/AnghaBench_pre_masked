
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct dvobj_priv {int dummy; } ;


 int FUNC_0 (struct dvobj_priv*) ;
 int FUNC_1 (struct dvobj_priv*) ;
 struct dvobj_priv* FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int *) ;

__attribute__((used)) static void FUNC_4(struct sdio_func *VAR_0)
{
 struct dvobj_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }
 return;
}
