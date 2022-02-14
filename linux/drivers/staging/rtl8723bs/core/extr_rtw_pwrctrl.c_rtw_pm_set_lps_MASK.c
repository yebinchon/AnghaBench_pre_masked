
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pwrctrl_priv {scalar_t__ power_mgnt; int LpsIdleCount; int bLeisurePs; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;

int FUNC_2(struct adapter *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 struct pwrctrl_priv *VAR_6 = FUNC_1(VAR_3);

 if (VAR_4 < VAR_2) {
  if (VAR_6->power_mgnt != VAR_4) {
   if (VAR_1 == VAR_4)
    FUNC_0(VAR_3);
   else
    VAR_6->LpsIdleCount = 2;

   VAR_6->power_mgnt = VAR_4;
   VAR_6->bLeisurePs =
    VAR_6->power_mgnt != VAR_1;
  }
 } else
  VAR_5 = -VAR_0;

 return VAR_5;
}
