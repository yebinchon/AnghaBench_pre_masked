
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_csi_dev {int dev; } ;
typedef enum csi_input_seq { ____Placeholder_csi_input_seq } csi_input_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static enum csi_input_seq FUNC_1(struct sun6i_csi_dev *VAR_4,
         u32 VAR_5, u32 VAR_6)
{

 if ((VAR_5 & 0xF000) != 0x2000)
  return 0;

 switch (VAR_6) {
 case 136:
 case 135:
 case 134:
 case 131:
 case 130:
  switch (VAR_5) {
  case 143:
  case 144:
   return VAR_0;
  case 141:
  case 142:
   return VAR_1;
  case 139:
  case 140:
   return VAR_2;
  case 138:
  case 137:
   return VAR_3;
  default:
   FUNC_0(VAR_4->dev, "Unsupported mbus code: 0x%x\n",
     VAR_5);
   break;
  }
  break;
 case 133:
 case 132:
 case 128:
  switch (VAR_5) {
  case 143:
  case 144:
   return VAR_1;
  case 141:
  case 142:
   return VAR_0;
  case 139:
  case 140:
   return VAR_3;
  case 138:
  case 137:
   return VAR_2;
  default:
   FUNC_0(VAR_4->dev, "Unsupported mbus code: 0x%x\n",
     VAR_5);
   break;
  }
  break;

 case 129:
  return VAR_2;

 default:
  FUNC_0(VAR_4->dev, "Unsupported pixformat: 0x%x, defaulting to YUYV\n",
    VAR_6);
  break;
 }

 return VAR_2;
}
