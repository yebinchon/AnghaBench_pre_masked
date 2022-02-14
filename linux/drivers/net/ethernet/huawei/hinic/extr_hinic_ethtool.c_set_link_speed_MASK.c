
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef enum hinic_speed { ____Placeholder_hinic_speed } hinic_speed ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct ethtool_link_ksettings *VAR_8,
      enum hinic_speed VAR_9)
{
 switch (VAR_9) {
 case 130:
  VAR_8->base.speed = VAR_0;
  break;

 case 132:
  VAR_8->base.speed = VAR_1;
  break;

 case 134:
  VAR_8->base.speed = VAR_2;
  break;

 case 131:
  VAR_8->base.speed = VAR_3;
  break;

 case 129:
  VAR_8->base.speed = VAR_5;
  break;

 case 128:
  VAR_8->base.speed = VAR_6;
  break;

 case 133:
  VAR_8->base.speed = VAR_4;
  break;

 default:
  VAR_8->base.speed = VAR_7;
  break;
 }
}
