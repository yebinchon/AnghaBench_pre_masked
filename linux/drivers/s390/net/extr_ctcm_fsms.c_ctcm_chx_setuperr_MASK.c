
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;
struct channel {int flags; int cdev; int timer; struct net_device* netdev; } ;
typedef int fsm_instance ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct channel*) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_14 ;
 int FUNC_4 (struct channel*,int,char*) ;
 int FUNC_5 (int *,int ,int ,struct channel*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,struct net_device*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(fsm_instance *VAR_15, int VAR_16, void *VAR_17)
{
 struct channel *VAR_18 = VAR_17;
 struct net_device *VAR_19 = VAR_18->netdev;
 struct ctcm_priv *VAR_20 = VAR_19->ml_priv;






 if ((FUNC_8(VAR_15) == VAR_8) &&
     ((VAR_16 == VAR_5) ||
      (VAR_16 == VAR_6))) {
  FUNC_10(VAR_15, VAR_9);
  FUNC_6(&VAR_18->timer);
  FUNC_5(&VAR_18->timer, VAR_2, VAR_4, VAR_18);
  if (!FUNC_2(VAR_18) &&
      (FUNC_0(VAR_18->flags) == VAR_1)) {
   int VAR_21 = FUNC_3(VAR_18->cdev, 0);
   if (VAR_21 != 0)
    FUNC_4(VAR_18, VAR_21,
     "HaltIO in chx_setuperr");
  }
  return;
 }

 FUNC_1(VAR_13, VAR_3,
  "%s(%s) : %s error during %s channel setup state=%s\n",
  VAR_0, VAR_19->name, VAR_14[VAR_16],
  (FUNC_0(VAR_18->flags) == VAR_1) ? "RX" : "TX",
  FUNC_9(VAR_15));

 if (FUNC_0(VAR_18->flags) == VAR_1) {
  FUNC_10(VAR_15, VAR_7);
  FUNC_7(VAR_20->fsm, VAR_11, VAR_19);
 } else {
  FUNC_10(VAR_15, VAR_10);
  FUNC_7(VAR_20->fsm, VAR_12, VAR_19);
 }
}
