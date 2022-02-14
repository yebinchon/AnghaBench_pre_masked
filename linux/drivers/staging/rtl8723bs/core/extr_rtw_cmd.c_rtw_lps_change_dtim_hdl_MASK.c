
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {int dtim; int bFwCurrentInPSMode; scalar_t__ pwr_mode; int lock; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,int,int,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_2, u8 VAR_3)
{
 struct pwrctrl_priv *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 <= 0 || VAR_3 > 16)
  return;

 if (FUNC_2(VAR_2) == 1)
  return;

 FUNC_3(&VAR_4->lock);

 if (VAR_4->dtim != VAR_3) {
  FUNC_0("change DTIM from %d to %d, bFwCurrentInPSMode =%d, ps_mode =%d\n", VAR_4->dtim, VAR_3,
   VAR_4->bFwCurrentInPSMode, VAR_4->pwr_mode);

  VAR_4->dtim = VAR_3;
 }

 if ((VAR_4->bFwCurrentInPSMode == 1) && (VAR_4->pwr_mode > VAR_1)) {
  u8 VAR_5 = VAR_4->pwr_mode;



  FUNC_5(VAR_2, VAR_0, (u8 *)(&VAR_5));
 }

 FUNC_4(&VAR_4->lock);
}
