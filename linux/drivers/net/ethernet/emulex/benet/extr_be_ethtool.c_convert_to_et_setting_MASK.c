
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int interface_type; int cable_type; } ;
struct be_adapter {TYPE_1__ phy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static u32 FUNC_0(struct be_adapter *VAR_21, u32 VAR_22)
{
 u32 VAR_23 = 0;

 switch (VAR_21->phy.interface_type) {
 case 140:
 case 139:
 case 131:
  VAR_23 |= VAR_20;
  if (VAR_22 & VAR_3)
   VAR_23 |= VAR_10;
  if (VAR_22 & VAR_0)
   VAR_23 |= VAR_11;
  if (VAR_22 & VAR_2)
   VAR_23 |= VAR_12;
  break;
 case 135:
  VAR_23 |= VAR_18;
  if (VAR_22 & VAR_3)
   VAR_23 |= VAR_9;
  if (VAR_22 & VAR_1)
   VAR_23 |= VAR_7;
  break;
 case 138:
  VAR_23 |= VAR_18;
  if (VAR_22 & VAR_1)
   VAR_23 |= VAR_6;
  if (VAR_22 & VAR_4)
   VAR_23 |= VAR_13;
  break;
 case 136:
  VAR_23 |= VAR_18 |
    VAR_6;
  break;
 case 137:
  VAR_23 |= VAR_18;
  if (VAR_22 & VAR_1)
   VAR_23 |= VAR_6;
  if (VAR_22 & VAR_5)
   VAR_23 |= VAR_15;
  break;
 case 134:
  if (VAR_22 & VAR_5) {
   switch (VAR_21->phy.cable_type) {
   case 129:
    VAR_23 |= VAR_14;
    break;
   case 128:
    VAR_23 |= VAR_16;
    break;
   default:
    VAR_23 |= VAR_17;
    break;
   }
  }

 case 132:
 case 130:
 case 133:
  VAR_23 |= VAR_19;
  if (VAR_22 & VAR_1)
   VAR_23 |= VAR_8;
  if (VAR_22 & VAR_3)
   VAR_23 |= VAR_10;
  break;
 case 141:
  VAR_23 |= VAR_20;
  if (VAR_22 & VAR_1)
   VAR_23 |= VAR_8;
  if (VAR_22 & VAR_3)
   VAR_23 |= VAR_10;
  if (VAR_22 & VAR_0)
   VAR_23 |= VAR_11;
  break;
 default:
  VAR_23 |= VAR_20;
 }

 return VAR_23;
}
