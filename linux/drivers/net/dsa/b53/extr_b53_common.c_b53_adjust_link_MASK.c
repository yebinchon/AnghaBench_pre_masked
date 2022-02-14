
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int speed; int link; scalar_t__ interface; int duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;
struct ethtool_eee {int eee_enabled; } ;
struct dsa_switch {int dev; struct b53_device* priv; } ;
struct b53_device {int cpu_port; TYPE_1__* ports; } ;
struct TYPE_2__ {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct dsa_switch*,int,struct phy_device*) ;
 int FUNC_2 (struct b53_device*,int,int) ;
 int FUNC_3 (struct b53_device*,int,int,int ,int) ;
 int FUNC_4 (struct b53_device*,int ,int,int*) ;
 int FUNC_5 (struct b53_device*,int ,int,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int,int ) ;
 scalar_t__ FUNC_8 (struct b53_device*) ;
 scalar_t__ FUNC_9 (struct b53_device*) ;
 scalar_t__ FUNC_10 (struct b53_device*) ;
 scalar_t__ FUNC_11 (struct phy_device*) ;
 int FUNC_12 (struct phy_device*) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct dsa_switch *VAR_13, int VAR_14,
       struct phy_device *VAR_15)
{
 struct b53_device *VAR_16 = VAR_13->priv;
 struct ethtool_eee *VAR_17 = &VAR_16->ports[VAR_14].eee;
 u8 VAR_18 = 0, VAR_19 = 0, VAR_20;
 int VAR_21 = 0;

 if (!FUNC_12(VAR_15))
  return;


 if (FUNC_8(VAR_16) && VAR_14 == VAR_16->cpu_port)
  VAR_21 = VAR_6;

 if (VAR_15->pause) {
  if (VAR_15->asym_pause)
   VAR_21 |= VAR_5;
  VAR_21 |= VAR_4;
 }

 FUNC_3(VAR_16, VAR_14, VAR_15->speed, VAR_15->duplex, VAR_21);
 FUNC_2(VAR_16, VAR_14, VAR_15->link);

 if (FUNC_9(VAR_16) && FUNC_11(VAR_15)) {
  if (VAR_14 == 8)
   VAR_20 = VAR_2;
  else
   VAR_20 = FUNC_0(VAR_14);




  FUNC_4(VAR_16, VAR_0, VAR_20, &VAR_18);
  VAR_18 &= ~(VAR_10 | VAR_11 |
    VAR_12);
  if (VAR_15->interface == VAR_8)
   VAR_18 |= VAR_11;
  if (VAR_15->interface == VAR_7)
   VAR_18 |= VAR_11 | VAR_10;
  VAR_18 |= VAR_12;
  FUNC_5(VAR_16, VAR_0, VAR_20, VAR_18);

  FUNC_7(VAR_13->dev, "Configured port %d for %s\n", VAR_14,
    FUNC_13(VAR_15->interface));
 }


 if (FUNC_10(VAR_16)) {
  FUNC_4(VAR_16, VAR_0, VAR_1,
     &VAR_19);


  if (!(VAR_19 & VAR_9)) {
   FUNC_5(VAR_16, VAR_0, VAR_1,
       VAR_19 | VAR_9);
   FUNC_4(VAR_16, VAR_0, VAR_1,
      &VAR_19);

   if (!(VAR_19 & VAR_9)) {
    FUNC_6(VAR_13->dev,
     "Failed to enable reverse MII mode\n");
    return;
   }
  }
 } else if (FUNC_8(VAR_16)) {
  if (VAR_14 != VAR_16->cpu_port) {
   FUNC_3(VAR_16, VAR_16->cpu_port, 2000,
           VAR_3, VAR_6);
   FUNC_2(VAR_16, VAR_16->cpu_port, 1);
  }
 }


 VAR_17->eee_enabled = FUNC_1(VAR_13, VAR_14, VAR_15);
}
