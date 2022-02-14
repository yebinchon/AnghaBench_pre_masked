
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; int mlmepriv; } ;
typedef int sint ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

sint FUNC_2(struct adapter *VAR_3)
{

 sint VAR_4;

 if (VAR_3->bDriverStopped || VAR_3->bSurpriseRemoved ||
  (FUNC_1(&VAR_3->mlmepriv, VAR_0) == 0)) {
  FUNC_0(VAR_2, VAR_1, ("rtw_if_up:bDriverStopped(%d) OR bSurpriseRemoved(%d)", VAR_3->bDriverStopped, VAR_3->bSurpriseRemoved));
  VAR_4 = 0;
 } else
  VAR_4 = 1;
 return VAR_4;
}
