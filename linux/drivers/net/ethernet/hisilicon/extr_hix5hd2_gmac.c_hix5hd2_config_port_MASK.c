
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct hix5hd2_priv {int phy_mode; scalar_t__ base; scalar_t__ ctrl_base; scalar_t__ duplex; scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct hix5hd2_priv*) ;
 struct hix5hd2_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_15, u32 VAR_16, u32 VAR_17)
{
 struct hix5hd2_priv *VAR_18 = FUNC_1(VAR_15);
 u32 VAR_19;

 VAR_18->speed = VAR_16;
 VAR_18->duplex = VAR_17;

 switch (VAR_18->phy_mode) {
 case 128:
  if (VAR_16 == VAR_14)
   VAR_19 = VAR_12;
  else if (VAR_16 == VAR_13)
   VAR_19 = VAR_11;
  else
   VAR_19 = VAR_10;
  break;
 case 129:
  if (VAR_16 == VAR_13)
   VAR_19 = VAR_7;
  else
   VAR_19 = VAR_6;
  break;
 default:
  FUNC_2(VAR_15, "not supported mode\n");
  VAR_19 = VAR_6;
  break;
 }

 if (VAR_17)
  VAR_19 |= VAR_1;
 FUNC_3(VAR_19, VAR_18->ctrl_base);
 FUNC_0(VAR_18);

 FUNC_3(VAR_0, VAR_18->base + VAR_8);
 if (VAR_16 == VAR_14)
  VAR_19 = VAR_4;
 else if (VAR_16 == VAR_13)
  VAR_19 = VAR_3;
 else
  VAR_19 = VAR_2;
 FUNC_3(VAR_19, VAR_18->base + VAR_9);
 FUNC_3(0, VAR_18->base + VAR_8);
 FUNC_3(VAR_17, VAR_18->base + VAR_5);
}
