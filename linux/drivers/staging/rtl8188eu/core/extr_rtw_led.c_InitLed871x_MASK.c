
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
struct LED_871x {int BlinkWorkItem; int BlinkTimer; struct adapter* padapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct LED_871x*) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct adapter *VAR_2, struct LED_871x *VAR_3)
{
 VAR_3->padapter = VAR_2;

 FUNC_1(VAR_3);

 FUNC_2(&VAR_3->BlinkTimer, VAR_0, 0);

 FUNC_0(&VAR_3->BlinkWorkItem, VAR_1);
}
