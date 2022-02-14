
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct encx24j600_priv {int autoneg; int full_duplex; int speed; int hw_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct encx24j600_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct encx24j600_priv*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7, u8 VAR_8, u16 VAR_9,
         u8 VAR_10)
{
 struct encx24j600_priv *VAR_11 = FUNC_0(VAR_7);
 int VAR_12 = 0;

 if (!VAR_11->hw_enabled) {



  if (VAR_9 == VAR_4 || VAR_9 == VAR_5) {
   VAR_11->autoneg = (VAR_8 == VAR_0);
   VAR_11->full_duplex = (VAR_10 == VAR_1);
   VAR_11->speed = (VAR_9 == VAR_5);
  } else {
   FUNC_1(VAR_11, VAR_6, VAR_7, "unsupported link speed setting\n");


   VAR_12 = -VAR_3;
  }
 } else {
  FUNC_1(VAR_11, VAR_6, VAR_7, "Warning: hw must be disabled to set link mode\n");
  VAR_12 = -VAR_2;
 }
 return VAR_12;
}
