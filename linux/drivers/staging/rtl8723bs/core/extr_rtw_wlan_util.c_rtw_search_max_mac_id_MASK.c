
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvobj_priv {int* macid; int lock; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 struct dvobj_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u8 FUNC_3(struct adapter *VAR_1)
{
 u8 VAR_2 = 0;
 struct dvobj_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 FUNC_1(&VAR_3->lock);
 for (VAR_4 = (VAR_0-1); VAR_4 >= 0 ; VAR_4--) {
  if (VAR_3->macid[VAR_4] == 1)
   break;
 }
 VAR_2 = VAR_4;
 FUNC_2(&VAR_3->lock);

 return VAR_2;
}
