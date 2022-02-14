
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct ctcm_priv* ml_priv; } ;
struct TYPE_2__ {int tx_errors; int tx_dropped; } ;
struct ctcm_priv {int fsm; TYPE_1__ stats; } ;
struct channel {int id; int timer; int flags; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(fsm_instance *VAR_8, int VAR_9, void *VAR_10)
{
 struct channel *VAR_11 = VAR_10;
 struct net_device *VAR_12 = VAR_11->netdev;
 struct ctcm_priv *VAR_13 = VAR_12->ml_priv;
 int VAR_14 = FUNC_0(VAR_11->flags);

 FUNC_3(&VAR_11->timer);
 FUNC_1(VAR_7, VAR_2,
  "%s: %s: %s unrecoverable channel error",
   VAR_0, VAR_11->id, VAR_14 == VAR_1 ? "RX" : "TX");

 if (FUNC_2(VAR_11)) {
  VAR_13->stats.tx_dropped++;
  VAR_13->stats.tx_errors++;
 }
 if (VAR_14 == VAR_1) {
  FUNC_5(VAR_8, VAR_3);
  FUNC_4(VAR_13->fsm, VAR_5, VAR_12);
 } else {
  FUNC_5(VAR_8, VAR_4);
  FUNC_4(VAR_13->fsm, VAR_6, VAR_12);
 }
}
