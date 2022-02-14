
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ duplex; scalar_t__ speed; int autoneg; } ;
struct amd8111e_priv {TYPE_1__ link_config; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_16)
{
 struct amd8111e_priv *VAR_17 = FUNC_1(VAR_16);
 int VAR_18,VAR_19;


      VAR_18 = FUNC_4(VAR_17->mmio + VAR_15);

 if(VAR_18 & VAR_8){
  if(VAR_18 & VAR_0)
   VAR_17->link_config.autoneg = VAR_2;
  else
   VAR_17->link_config.autoneg = VAR_1;

  if(VAR_18 & VAR_7)
   VAR_17->link_config.duplex = VAR_4;
  else
   VAR_17->link_config.duplex = VAR_5;
  VAR_19 = (VAR_18 & VAR_14) >> 7;
  if(VAR_19 == VAR_9)
   VAR_17->link_config.speed = VAR_11;
  else if(VAR_19 == VAR_10)
   VAR_17->link_config.speed = VAR_12;

  FUNC_0(VAR_16, "Link is Up. Speed is %s Mbps %s Duplex\n",
       (VAR_17->link_config.speed == VAR_12) ?
       "100" : "10",
       (VAR_17->link_config.duplex == VAR_4) ?
       "Full" : "Half");

  FUNC_3(VAR_16);
 }
 else{
  VAR_17->link_config.speed = VAR_13;
  VAR_17->link_config.duplex = VAR_6;
  VAR_17->link_config.autoneg = VAR_3;
  FUNC_0(VAR_16, "Link is Down.\n");
  FUNC_2(VAR_16);
 }

 return 0;
}
