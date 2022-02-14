
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct adapter {int mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,int ,int *) ;

void FUNC_3(struct adapter *VAR_3, u8 VAR_4)
{
 if ((VAR_4 == VAR_1)
  && (FUNC_0(&VAR_3->mlmepriv, VAR_2) == 1)) {
  FUNC_2(VAR_3, VAR_0, ((void*)0));
 }

 FUNC_1(VAR_3, VAR_4);
}
