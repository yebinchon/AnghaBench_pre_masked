
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct pwrctrl_priv {int bips_processing; scalar_t__ ps_flag; } ;
struct net_device {int dev_addr; } ;
struct TYPE_2__ {int dynamic_chk_timer; } ;
struct adapter {int bup; int net_closed; int bDriverStopped; int bSurpriseRemoved; struct pwrctrl_priv pwrctrlpriv; TYPE_1__ mlmepriv; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct adapter*) ;
 scalar_t__ FUNC_12 (struct adapter*) ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct pwrctrl_priv*) ;
 int FUNC_16 (struct adapter*) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_6)
{
 uint VAR_7;
 int VAR_8;
 struct adapter *VAR_9 = (struct adapter *)FUNC_13(VAR_6);
 struct pwrctrl_priv *VAR_10 = &VAR_9->pwrctrlpriv;

 FUNC_1(VAR_4, VAR_3, ("+88eu_drv - dev_open\n"));
 FUNC_0("+88eu_drv - drv_open, bup =%d\n", VAR_9->bup);

 if (VAR_10->ps_flag) {
  VAR_9->net_closed = 0;
  goto netdev_open_normal_process;
 }

 if (!VAR_9->bup) {
  VAR_9->bDriverStopped = 0;
  VAR_9->bSurpriseRemoved = 0;

  VAR_7 = FUNC_12(VAR_9);
  if (VAR_7 == VAR_1) {
   FUNC_1(VAR_4, VAR_2, ("rtl88eu_hal_init(): Can't init h/w!\n"));
   goto netdev_open_error;
  }

  FUNC_10("MAC Address = %pM\n", VAR_6->dev_addr);

  VAR_8 = FUNC_16(VAR_9);
  if (VAR_8) {
   FUNC_10("Initialize driver software resource Failed!\n");
   goto netdev_open_error;
  }

  if (FUNC_2(VAR_9) == VAR_1) {
   FUNC_10("can't init mlme_ext_priv\n");
   goto netdev_open_error;
  }
  FUNC_11(VAR_9);

  FUNC_3(VAR_9, VAR_0);

  VAR_9->bup = 1;
 }
 VAR_9->net_closed = 0;

 FUNC_4(&VAR_9->mlmepriv.dynamic_chk_timer,
    VAR_5 + FUNC_5(2000));

 VAR_9->pwrctrlpriv.bips_processing = 0;
 FUNC_15(&VAR_9->pwrctrlpriv);

 if (!FUNC_14(VAR_6))
  FUNC_7(VAR_6);
 else
  FUNC_9(VAR_6);

netdev_open_normal_process:
 FUNC_1(VAR_4, VAR_3, ("-88eu_drv - dev_open\n"));
 FUNC_0("-88eu_drv - drv_open, bup =%d\n", VAR_9->bup);
 return 0;

netdev_open_error:
 VAR_9->bup = 0;
 FUNC_6(VAR_6);
 FUNC_8(VAR_6);
 FUNC_1(VAR_4, VAR_2, ("-88eu_drv - dev_open, fail!\n"));
 FUNC_0("-88eu_drv - drv_open fail, bup =%d\n", VAR_9->bup);
 return -1;
}
