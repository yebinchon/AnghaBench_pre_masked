
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_csi_dev {int dev; } ;
typedef enum csi_input_fmt { ____Placeholder_csi_input_fmt } csi_input_fmt ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum csi_input_fmt FUNC_1(struct sun6i_csi_dev *VAR_2,
            u32 VAR_3, u32 VAR_4)
{

 if ((VAR_3 & 0xF000) != 0x2000)
  return VAR_0;

 switch (VAR_4) {
 case 129:
 case 128:
 case 131:
 case 130:
  return VAR_0;
 default:
  break;
 }


 FUNC_0(VAR_2->dev, "Select YUV422 as default input format of CSI.\n");
 return VAR_1;
}
