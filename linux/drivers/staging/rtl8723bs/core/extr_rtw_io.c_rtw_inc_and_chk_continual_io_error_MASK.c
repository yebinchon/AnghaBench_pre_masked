
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvobj_priv {int continual_io_error; } ;


 int FUNC_0 (char*,struct dvobj_priv*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dvobj_priv *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = FUNC_1(&VAR_1->continual_io_error);
 if (VAR_3 > VAR_0) {
  FUNC_0("[dvobj:%p][ERROR] continual_io_error:%d > %d\n", VAR_1, VAR_3, VAR_0);
  VAR_2 = 1;
 } else {

 }
 return VAR_2;
}
