
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct netdev_queue {int dummy; } ;
struct TYPE_6__ {scalar_t__ duplex; int speed; int pause; TYPE_2__* def; } ;
struct gem {scalar_t__ phy_type; int dev; int rx_pause_on; int rx_pause_off; int rx_fifo_sz; scalar_t__ regs; TYPE_3__ phy_mii; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ (* read_link ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct netdev_queue*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 scalar_t__ FUNC_2 (struct gem*) ;
 int FUNC_3 (struct gem*) ;
 int VAR_25 ;
 struct netdev_queue* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct gem*,int ,int ,char*,int,char*) ;
 scalar_t__ FUNC_7 (struct gem*) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct gem *VAR_30)
{
 struct netdev_queue *VAR_31 = FUNC_4(VAR_30->dev, 0);
 int VAR_32, VAR_33, VAR_34;
 u32 VAR_35;

 VAR_32 = 0;
 VAR_33 = VAR_23;
 VAR_34 = 0;

 if (FUNC_2(VAR_30)) {
      if (VAR_30->phy_mii.def->ops->read_link(&VAR_30->phy_mii))
       return 1;
  VAR_32 = (VAR_30->phy_mii.duplex == VAR_0);
  VAR_33 = VAR_30->phy_mii.speed;
  VAR_34 = VAR_30->phy_mii.pause;
 } else if (VAR_30->phy_type == VAR_29 ||
         VAR_30->phy_type == VAR_28) {
  u32 VAR_36 = FUNC_8(VAR_30->regs + VAR_22);

  if ((VAR_36 & VAR_20) || VAR_30->phy_type == VAR_28)
   VAR_32 = 1;
  VAR_33 = VAR_24;
 }

 FUNC_6(VAR_30, VAR_25, VAR_30->dev, "Link is up at %d Mbps, %s-duplex\n",
     VAR_33, (VAR_32 ? "full" : "half"));





 FUNC_0(VAR_31, FUNC_9());

 VAR_35 = (VAR_8 | VAR_11);
 if (VAR_32) {
  VAR_35 |= (VAR_10 | VAR_9);
 } else {

 }
 FUNC_11(VAR_35, VAR_30->regs + VAR_7);

 VAR_35 = (VAR_18 | VAR_17);
 if (!VAR_32 &&
     (VAR_30->phy_type == VAR_26 ||
      VAR_30->phy_type == VAR_27)) {
  VAR_35 |= VAR_14;
 } else if (VAR_32) {
  VAR_35 |= VAR_15;
 }

 if (VAR_33 == VAR_24)
  VAR_35 |= (VAR_16);

 FUNC_11(VAR_35, VAR_30->regs + VAR_13);




 if (VAR_33 == VAR_24 && !VAR_32) {
  VAR_35 = FUNC_8(VAR_30->regs + VAR_7);
  FUNC_11(VAR_35 | VAR_12, VAR_30->regs + VAR_7);

  VAR_35 = FUNC_8(VAR_30->regs + VAR_4);
  FUNC_11(VAR_35 | VAR_5, VAR_30->regs + VAR_4);
 } else {
  VAR_35 = FUNC_8(VAR_30->regs + VAR_7);
  FUNC_11(VAR_35 & ~VAR_12, VAR_30->regs + VAR_7);

  VAR_35 = FUNC_8(VAR_30->regs + VAR_4);
  FUNC_11(VAR_35 & ~VAR_5, VAR_30->regs + VAR_4);
 }

 if (VAR_30->phy_type == VAR_29 ||
     VAR_30->phy_type == VAR_28) {
   u32 VAR_37 = FUNC_8(VAR_30->regs + VAR_22);

  if (VAR_37 & (VAR_21 | VAR_19))
   VAR_34 = 1;
 }

 if (!VAR_32)
  FUNC_11(512, VAR_30->regs + VAR_6);
 else
  FUNC_11(64, VAR_30->regs + VAR_6);
 VAR_35 = FUNC_8(VAR_30->regs + VAR_1);
 if (VAR_34)
  VAR_35 |= (VAR_3 | VAR_2);
 else
  VAR_35 &= ~(VAR_3 | VAR_2);
 FUNC_11(VAR_35, VAR_30->regs + VAR_1);

 FUNC_3(VAR_30);

 FUNC_1(VAR_31);

 if (FUNC_7(VAR_30)) {
  if (VAR_34) {
   FUNC_5(VAR_30->dev,
        "Pause is enabled (rxfifo: %d off: %d on: %d)\n",
        VAR_30->rx_fifo_sz,
        VAR_30->rx_pause_off,
        VAR_30->rx_pause_on);
  } else {
   FUNC_5(VAR_30->dev, "Pause is disabled\n");
  }
 }

 return 0;
}
