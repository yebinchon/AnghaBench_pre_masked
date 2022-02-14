
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int speed; int pause; } ;
struct phylink_config {int dev; } ;
struct net_device {int dev; } ;
struct axienet_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct axienet_local*,int ) ;
 int FUNC_1 (struct axienet_local*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct axienet_local* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct phylink_config *VAR_10, unsigned int VAR_11,
          const struct phylink_link_state *VAR_12)
{
 struct net_device *VAR_13 = FUNC_4(VAR_10->dev);
 struct axienet_local *VAR_14 = FUNC_3(VAR_13);
 u32 VAR_15, VAR_16;

 VAR_15 = FUNC_0(VAR_14, VAR_6);
 VAR_15 &= ~VAR_5;

 switch (VAR_12->speed) {
 case 128:
  VAR_15 |= VAR_4;
  break;
 case 129:
  VAR_15 |= VAR_3;
  break;
 case 130:
  VAR_15 |= VAR_2;
  break;
 default:
  FUNC_2(&VAR_13->dev,
   "Speed other than 10, 100 or 1Gbps is not supported\n");
  break;
 }

 FUNC_1(VAR_14, VAR_6, VAR_15);

 VAR_16 = FUNC_0(VAR_14, VAR_9);
 if (VAR_12->pause & VAR_1)
  VAR_16 |= VAR_8;
 else
  VAR_16 &= ~VAR_8;
 if (VAR_12->pause & VAR_0)
  VAR_16 |= VAR_7;
 else
  VAR_16 &= ~VAR_7;
 FUNC_1(VAR_14, VAR_9, VAR_16);
}
