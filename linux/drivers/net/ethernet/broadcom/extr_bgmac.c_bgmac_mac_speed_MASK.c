
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int mac_speed; scalar_t__ mac_duplex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;




 int FUNC_0 (struct bgmac*,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct bgmac *VAR_7)
{
 u32 VAR_8 = ~(VAR_4 | VAR_5);
 u32 VAR_9 = 0;

 switch (VAR_7->mac_speed) {
 case 131:
  VAR_9 |= VAR_0;
  break;
 case 130:
  VAR_9 |= VAR_1;
  break;
 case 129:
  VAR_9 |= VAR_2;
  break;
 case 128:
  VAR_9 |= VAR_3;
  break;
 default:
  FUNC_1(VAR_7->dev, "Unsupported speed: %d\n",
   VAR_7->mac_speed);
 }

 if (VAR_7->mac_duplex == VAR_6)
  VAR_9 |= VAR_5;

 FUNC_0(VAR_7, VAR_8, VAR_9, 1);
}
