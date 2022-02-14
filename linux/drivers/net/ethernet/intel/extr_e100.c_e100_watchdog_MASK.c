
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timer_list {int dummy; } ;
struct nic {scalar_t__ mac; int flags; int watchdog; int netdev; int cmd_lock; TYPE_2__* csr; int mii; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;
struct TYPE_3__ {int cmd_hi; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct nic*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nic*) ;
 int FUNC_3 (struct nic*) ;
 scalar_t__ FUNC_4 (struct ethtool_cmd*) ;
 struct nic* FUNC_5 (int ,struct timer_list*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct ethtool_cmd*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct nic*,int ,int ,int ,char*,scalar_t__) ;
 struct nic* VAR_12 ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_18(struct timer_list *VAR_15)
{
 struct nic *VAR_16 = FUNC_5(VAR_16, VAR_15, VAR_14);
 struct ethtool_cmd VAR_17 = { .cmd = VAR_3 };
 u32 VAR_18;

 FUNC_14(VAR_16, VAR_13, VAR_4, VAR_16->netdev,
       "right now = %ld\n", VAR_10);



 FUNC_9(&VAR_16->mii, &VAR_17);
 VAR_18 = FUNC_4(&VAR_17);

 if (FUNC_10(&VAR_16->mii) && !FUNC_13(VAR_16->netdev)) {
  FUNC_12(VAR_16->netdev, "NIC Link is Up %u Mbps %s Duplex\n",
       VAR_18 == VAR_6 ? 100 : 10,
       VAR_17.duplex == VAR_0 ? "Full" : "Half");
 } else if (!FUNC_10(&VAR_16->mii) && FUNC_13(VAR_16->netdev)) {
  FUNC_12(VAR_16->netdev, "NIC Link is Down\n");
 }

 FUNC_8(&VAR_16->mii);






 FUNC_16(&VAR_16->cmd_lock);
 FUNC_7(FUNC_6(&VAR_16->csr->scb.cmd_hi) | VAR_9,&VAR_16->csr->scb.cmd_hi);
 FUNC_3(VAR_16);
 FUNC_17(&VAR_16->cmd_lock);

 FUNC_2(VAR_16);
 FUNC_0(VAR_16, VAR_18, VAR_17.duplex);

 if (VAR_16->mac <= VAR_11)

  FUNC_1(VAR_16->netdev);

 if (VAR_16->flags & VAR_7 && VAR_18 == VAR_5 && VAR_17.duplex == VAR_1)

  VAR_16->flags |= VAR_8;
 else
  VAR_16->flags &= ~VAR_8;

 FUNC_11(&VAR_16->watchdog,
    FUNC_15(VAR_10 + VAR_2));
}
