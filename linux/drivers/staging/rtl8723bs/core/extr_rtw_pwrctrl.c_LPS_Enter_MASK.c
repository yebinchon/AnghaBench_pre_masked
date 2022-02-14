
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwrctrl_priv {int LpsIdleCount; scalar_t__ pwr_mode; int bpower_saving; int power_mgnt; scalar_t__ bLeisurePs; } ;
struct dvobj_priv {TYPE_2__* padapters; } ;
struct TYPE_3__ {int smart_ps; } ;
struct adapter {TYPE_1__ registrypriv; } ;
struct TYPE_4__ {int mlmepriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct pwrctrl_priv* FUNC_3 (struct dvobj_priv*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ,int ,int ,char*) ;
 int FUNC_7 (char*,char*,char const*) ;

void FUNC_8(struct adapter *VAR_3, const char *VAR_4)
{
 struct dvobj_priv *VAR_5 = FUNC_1(VAR_3);
 struct pwrctrl_priv *VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = 0;
 char VAR_8[32] = {0};

 if (FUNC_5(VAR_3))
  return;


 if (FUNC_2(&(VAR_5->padapters->mlmepriv), VAR_2))
  VAR_7++;
 if (VAR_7 != 1)
  return;


 if (FUNC_4(VAR_3) != VAR_0)
  return;

 if (!FUNC_0(VAR_5->padapters))
  return;

 if (VAR_6->bLeisurePs) {

  if (VAR_6->LpsIdleCount >= 2) {
   if (VAR_6->pwr_mode == VAR_1) {
    FUNC_7(VAR_8, "WIFI-%s", VAR_4);
    VAR_6->bpower_saving = 1;
    FUNC_6(VAR_3, VAR_6->power_mgnt, VAR_3->registrypriv.smart_ps, 0, VAR_8);
   }
  } else
   VAR_6->LpsIdleCount++;
 }


}
