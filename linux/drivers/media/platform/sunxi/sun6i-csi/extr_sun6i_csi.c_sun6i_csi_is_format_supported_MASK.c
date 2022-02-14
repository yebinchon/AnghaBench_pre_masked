
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int bus_width; } ;
struct TYPE_6__ {TYPE_1__ parallel; } ;
struct TYPE_7__ {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct TYPE_8__ {TYPE_3__ v4l2_ep; } ;
struct sun6i_csi_dev {int dev; TYPE_4__ csi; } ;
struct sun6i_csi {int dummy; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 struct sun6i_csi_dev* FUNC_1 (struct sun6i_csi*) ;

bool FUNC_2(struct sun6i_csi *VAR_17,
       u32 VAR_18, u32 VAR_19)
{
 struct sun6i_csi_dev *VAR_20 = FUNC_1(VAR_17);






 if ((VAR_20->csi.v4l2_ep.bus_type == VAR_16
      || VAR_20->csi.v4l2_ep.bus_type == VAR_15)
      && VAR_20->csi.v4l2_ep.bus.parallel.bus_width == 16) {
  switch (VAR_18) {
  case 154:
  case 152:
  case 150:
  case 151:
  case 149:
  case 132:
  case 129:
  case 131:
   switch (VAR_19) {
   case 162:
   case 160:
   case 158:
   case 156:
    return 1;
   default:
    FUNC_0(VAR_20->dev, "Unsupported mbus code: 0x%x\n",
     VAR_19);
    break;
   }
   break;
  default:
   FUNC_0(VAR_20->dev, "Unsupported pixformat: 0x%x\n",
    VAR_18);
   break;
  }
  return 0;
 }

 switch (VAR_18) {
 case 144:
  return (VAR_19 == VAR_5);
 case 141:
  return (VAR_19 == VAR_8);
 case 138:
  return (VAR_19 == VAR_11);
 case 135:
  return (VAR_19 == VAR_14);
 case 146:
  return (VAR_19 == VAR_3);
 case 143:
  return (VAR_19 == VAR_6);
 case 140:
  return (VAR_19 == VAR_9);
 case 137:
  return (VAR_19 == VAR_12);
 case 145:
  return (VAR_19 == VAR_4);
 case 142:
  return (VAR_19 == VAR_7);
 case 139:
  return (VAR_19 == VAR_10);
 case 136:
  return (VAR_19 == VAR_13);

 case 130:
  return (VAR_19 == 157);
 case 128:
  return (VAR_19 == 155);
 case 134:
  return (VAR_19 == 161);
 case 133:
  return (VAR_19 == 159);

 case 154:
 case 152:
 case 150:
 case 151:
 case 149:
 case 132:
 case 129:
 case 131:
  switch (VAR_19) {
  case 161:
  case 159:
  case 157:
  case 155:
   return 1;
  default:
   FUNC_0(VAR_20->dev, "Unsupported mbus code: 0x%x\n",
    VAR_19);
   break;
  }
  break;

 case 148:
  return (VAR_19 == VAR_2);
 case 147:
  return (VAR_19 == VAR_1);

 case 153:
  return (VAR_19 == VAR_0);

 default:
  FUNC_0(VAR_20->dev, "Unsupported pixformat: 0x%x\n", VAR_18);
  break;
 }

 return 0;
}
