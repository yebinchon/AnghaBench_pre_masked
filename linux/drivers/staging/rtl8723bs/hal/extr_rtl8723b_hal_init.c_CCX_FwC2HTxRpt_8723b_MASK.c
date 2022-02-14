
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int xmitpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct adapter *VAR_2, u8 *VAR_3, u8 VAR_4)
{
 u8 VAR_5;







 VAR_5 = *(VAR_3+6);

 if (FUNC_0((VAR_3 + 0), 7, 1) | FUNC_0((VAR_3 + 0), 6, 1)) {
  FUNC_2(&VAR_2->xmitpriv, VAR_0);
 }






 else
  FUNC_2(&VAR_2->xmitpriv, VAR_1);
}
