
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct typhoon {int speed; int duplex; void* xcvr_select; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int speed; scalar_t__ autoneg; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct cmd_desc {void* parm1; } ;
typedef void* __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmd_desc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct typhoon*,int,struct cmd_desc*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_12,
      const struct ethtool_link_ksettings *VAR_13)
{
 struct typhoon *VAR_14 = FUNC_1(VAR_12);
 u32 VAR_15 = VAR_13->base.speed;
 struct cmd_desc VAR_16;
 __le16 VAR_17;
 int VAR_18;

 VAR_18 = -VAR_3;
 if (VAR_13->base.autoneg == VAR_0) {
  VAR_17 = VAR_11;
 } else {
  if (VAR_13->base.duplex == VAR_2) {
   if (VAR_15 == VAR_4)
    VAR_17 = VAR_10;
   else if (VAR_15 == VAR_5)
    VAR_17 = VAR_8;
   else
    goto out;
  } else if (VAR_13->base.duplex == VAR_1) {
   if (VAR_15 == VAR_4)
    VAR_17 = VAR_9;
   else if (VAR_15 == VAR_5)
    VAR_17 = VAR_7;
   else
    goto out;
  } else
   goto out;
 }

 FUNC_0(&VAR_16, VAR_6);
 VAR_16.parm1 = VAR_17;
 VAR_18 = FUNC_2(VAR_14, 1, &VAR_16, 0, ((void*)0));
 if(VAR_18 < 0)
  goto out;

 VAR_14->xcvr_select = VAR_17;
 if (VAR_13->base.autoneg == VAR_0) {
  VAR_14->speed = 0xff;
  VAR_14->duplex = 0xff;
 } else {
  VAR_14->speed = VAR_15;
  VAR_14->duplex = VAR_13->base.duplex;
 }

out:
 return VAR_18;
}
