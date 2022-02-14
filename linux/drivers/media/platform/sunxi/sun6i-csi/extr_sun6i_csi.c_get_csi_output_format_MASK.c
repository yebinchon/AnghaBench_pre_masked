
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sun6i_csi_dev {int dev; } ;
typedef enum csi_output_fmt { ____Placeholder_csi_output_fmt } csi_output_fmt ;


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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static enum csi_output_fmt FUNC_1(struct sun6i_csi_dev *VAR_21,
       u32 VAR_22, u32 VAR_23)
{
 bool VAR_24 = 0;

 if (VAR_23 == VAR_18
     || VAR_23 == VAR_20
     || VAR_23 == VAR_19)
  VAR_24 = 1;

 switch (VAR_22) {
 case 144:
 case 141:
 case 138:
 case 135:
  return VAR_24 ? VAR_14 : VAR_5;
 case 146:
 case 143:
 case 140:
 case 137:
  return VAR_24 ? VAR_12 : VAR_3;
 case 145:
 case 142:
 case 139:
 case 136:
  return VAR_24 ? VAR_13 : VAR_4;

 case 130:
 case 128:
 case 134:
 case 133:
  return VAR_24 ? VAR_14 : VAR_5;

 case 154:
  return VAR_24 ? VAR_9 :
     VAR_0;
 case 152:
 case 150:
  return VAR_24 ? VAR_16 :
     VAR_7;
 case 132:
 case 129:
  return VAR_24 ? VAR_10 :
     VAR_1;
 case 151:
 case 149:
  return VAR_24 ? VAR_17 :
     VAR_8;
 case 131:
  return VAR_24 ? VAR_11 :
     VAR_2;

 case 148:
 case 147:
  return VAR_24 ? VAR_15 : VAR_6;

 case 153:
  return VAR_24 ? VAR_14 : VAR_5;

 default:
  FUNC_0(VAR_21->dev, "Unsupported pixformat: 0x%x\n", VAR_22);
  break;
 }

 return VAR_5;
}
