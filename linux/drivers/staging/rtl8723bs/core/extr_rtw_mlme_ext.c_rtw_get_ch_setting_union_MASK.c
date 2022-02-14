
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvobj_priv {struct adapter* padapters; } ;
struct adapter {int mlmepriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dvobj_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct adapter *VAR_4, u8 *VAR_5, u8 *VAR_6, u8 *VAR_7)
{
 struct dvobj_priv *VAR_8 = FUNC_0(VAR_4);
 struct adapter *VAR_9;

 if (VAR_5)
  *VAR_5 = 0;
 if (VAR_6)
  *VAR_6 = VAR_0;
 if (VAR_7)
  *VAR_7 = VAR_1;

 VAR_9 = VAR_8->padapters;

 if (!FUNC_1(&VAR_9->mlmepriv, VAR_2|VAR_3))
  return 0;

 return 1;
}
