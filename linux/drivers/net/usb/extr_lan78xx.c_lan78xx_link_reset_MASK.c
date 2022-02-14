
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ link; } ;
struct lan78xx_net {int link_on; int delta; int bh; int stat_monitor; TYPE_3__* net; TYPE_1__* udev; } ;
struct TYPE_5__ {int speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_6__ {struct phy_device* phydev; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct lan78xx_net*,int ,int *) ;
 int FUNC_2 (struct lan78xx_net*,int ,int,int) ;
 int FUNC_3 (struct lan78xx_net*,int ,int ) ;
 int VAR_13 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct lan78xx_net*,int ,TYPE_3__*,char*,int,int ,int,int) ;
 int FUNC_6 (struct phy_device*,struct ethtool_link_ksettings*) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct lan78xx_net *VAR_14)
{
 struct phy_device *VAR_15 = VAR_14->net->phydev;
 struct ethtool_link_ksettings VAR_16;
 int VAR_17, VAR_18, VAR_19;
 u32 VAR_20;


 VAR_19 = FUNC_3(VAR_14, VAR_1, VAR_2);
 if (FUNC_11(VAR_19 < 0))
  return -VAR_0;

 FUNC_8(VAR_15);

 if (!VAR_15->link && VAR_14->link_on) {
  VAR_14->link_on = 0;


  VAR_19 = FUNC_1(VAR_14, VAR_3, &VAR_20);
  if (FUNC_11(VAR_19 < 0))
   return -VAR_0;
  VAR_20 |= VAR_4;
  VAR_19 = FUNC_3(VAR_14, VAR_3, VAR_20);
  if (FUNC_11(VAR_19 < 0))
   return -VAR_0;

  FUNC_0(&VAR_14->stat_monitor);
 } else if (VAR_15->link && !VAR_14->link_on) {
  VAR_14->link_on = 1;

  FUNC_6(VAR_15, &VAR_16);

  if (VAR_14->udev->speed == VAR_11) {
   if (VAR_16.base.speed == 1000) {

    VAR_19 = FUNC_1(VAR_14, VAR_8, &VAR_20);
    VAR_20 &= ~VAR_10;
    VAR_19 = FUNC_3(VAR_14, VAR_8, VAR_20);

    VAR_19 = FUNC_1(VAR_14, VAR_8, &VAR_20);
    VAR_20 |= VAR_9;
    VAR_19 = FUNC_3(VAR_14, VAR_8, VAR_20);
   } else {

    VAR_19 = FUNC_1(VAR_14, VAR_8, &VAR_20);
    VAR_20 |= VAR_10;
    VAR_20 |= VAR_9;
    VAR_19 = FUNC_3(VAR_14, VAR_8, VAR_20);
   }
  }

  VAR_17 = FUNC_7(VAR_15, VAR_5);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_18 = FUNC_7(VAR_15, VAR_6);
  if (VAR_18 < 0)
   return VAR_18;

  FUNC_5(VAR_14, VAR_13, VAR_14->net,
     "speed: %u duplex: %d anadv: 0x%04x anlpa: 0x%04x",
     VAR_16.base.speed, VAR_16.base.duplex, VAR_17, VAR_18);

  VAR_19 = FUNC_2(VAR_14, VAR_16.base.duplex, VAR_17,
       VAR_18);

  if (!FUNC_10(&VAR_14->stat_monitor)) {
   VAR_14->delta = 1;
   FUNC_4(&VAR_14->stat_monitor,
      VAR_12 + VAR_7);
  }

  FUNC_9(&VAR_14->bh);
 }

 return VAR_19;
}
