
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPT3SAS_ADAPTER {TYPE_1__* pdev; } ;
struct TYPE_2__ {int subsystem_vendor; int subsystem_device; int device; } ;







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

 int VAR_21 ;

 int VAR_22 ;

 int VAR_23 ;

 int VAR_24 ;

 int VAR_25 ;

 int VAR_26 ;

 int VAR_27 ;

 int VAR_28 ;

 int VAR_29 ;

 int VAR_30 ;




 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct MPT3SAS_ADAPTER *VAR_31)
{
 if (VAR_31->pdev->subsystem_vendor != 128)
  return;

 switch (VAR_31->pdev->subsystem_vendor) {
 case 128:
  switch (VAR_31->pdev->device) {
  case 164:
   switch (VAR_31->pdev->subsystem_device) {
   case 142:
    FUNC_0(VAR_31, "%s\n",
      VAR_19);
    break;
   case 143:
    FUNC_0(VAR_31, "%s\n",
      VAR_18);
    break;
   case 140:
    FUNC_0(VAR_31, "%s\n",
      VAR_21);
    break;
   default:
    FUNC_0(VAR_31, "Intel(R) Controller: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  case 163:
   switch (VAR_31->pdev->subsystem_device) {
   case 141:
    FUNC_0(VAR_31, "%s\n",
      VAR_20);
    break;
   case 148:
    FUNC_0(VAR_31, "%s\n",
      VAR_13);
    break;
   case 149:
    FUNC_0(VAR_31, "%s\n",
      VAR_12);
    break;
   case 146:
    FUNC_0(VAR_31, "%s\n",
      VAR_15);
    break;
   case 147:
    FUNC_0(VAR_31, "%s\n",
      VAR_14);
    break;
   case 145:
    FUNC_0(VAR_31, "%s\n",
      VAR_16);
    break;
   case 144:
    FUNC_0(VAR_31, "%s\n",
      VAR_17);
    break;
   default:
    FUNC_0(VAR_31, "Intel(R) Controller: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  case 167:
   switch (VAR_31->pdev->subsystem_device) {
   case 134:
    FUNC_0(VAR_31, "%s\n",
      VAR_27);
    break;

   case 132:
    FUNC_0(VAR_31, "%s\n",
      VAR_29);
    break;
   case 133:
    FUNC_0(VAR_31, "%s\n",
      VAR_28);
    break;
   case 131:
    FUNC_0(VAR_31, "%s\n",
      VAR_30);
    break;
   default:
    FUNC_0(VAR_31, "Intel(R) Controller: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  default:
   FUNC_0(VAR_31, "Intel(R) Controller: Subsystem ID: 0x%X\n",
     VAR_31->pdev->subsystem_device);
   break;
  }
  break;
 case 129:
  switch (VAR_31->pdev->device) {
  case 164:
   switch (VAR_31->pdev->subsystem_device) {
   case 162:
    FUNC_0(VAR_31, "%s\n",
      VAR_1);
    break;
   case 160:
    FUNC_0(VAR_31, "%s\n",
      VAR_2);
    break;
   case 158:
    FUNC_0(VAR_31, "%s\n",
      VAR_5);
    break;
   case 157:
    FUNC_0(VAR_31, "%s\n",
      VAR_6);
    break;
   case 159:
    FUNC_0(VAR_31, "%s\n",
      VAR_4);
    break;
   case 156:
    FUNC_0(VAR_31, "%s\n",
      VAR_3);
    break;
   case 161:
    FUNC_0(VAR_31, "%s\n",
      VAR_0);
    break;
   default:
    FUNC_0(VAR_31, "Dell 6Gbps HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  case 167:
   switch (VAR_31->pdev->subsystem_device) {
   case 135:
    FUNC_0(VAR_31, "%s\n",
      VAR_26);
    break;
   default:
    FUNC_0(VAR_31, "Dell 12Gbps HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  default:
   FUNC_0(VAR_31, "Dell HBA: Subsystem ID: 0x%X\n",
     VAR_31->pdev->subsystem_device);
   break;
  }
  break;
 case 130:
  switch (VAR_31->pdev->device) {
  case 167:
   switch (VAR_31->pdev->subsystem_device) {
   case 139:
    FUNC_0(VAR_31, "%s\n",
      VAR_22);
    break;
   case 138:
    FUNC_0(VAR_31, "%s\n",
      VAR_23);
    break;
   case 137:
    FUNC_0(VAR_31, "%s\n",
      VAR_24);
    break;
   default:
    FUNC_0(VAR_31, "Cisco 12Gbps SAS HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  case 166:
   switch (VAR_31->pdev->subsystem_device) {
   case 137:
    FUNC_0(VAR_31, "%s\n",
      VAR_24);
    break;
   case 136:
    FUNC_0(VAR_31, "%s\n",
      VAR_25);
    break;
   default:
    FUNC_0(VAR_31, "Cisco 12Gbps SAS HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  default:
   FUNC_0(VAR_31, "Cisco SAS HBA: Subsystem ID: 0x%X\n",
     VAR_31->pdev->subsystem_device);
   break;
  }
  break;
 case 152:
  switch (VAR_31->pdev->device) {
  case 165:
   switch (VAR_31->pdev->subsystem_device) {
   case 151:
    FUNC_0(VAR_31, "%s\n",
      VAR_10);
    break;
   default:
    FUNC_0(VAR_31, "HP 6Gbps SAS HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  case 163:
   switch (VAR_31->pdev->subsystem_device) {
   case 153:
    FUNC_0(VAR_31, "%s\n",
      VAR_9);
    break;
   case 154:
    FUNC_0(VAR_31, "%s\n",
      VAR_8);
    break;
   case 155:
    FUNC_0(VAR_31, "%s\n",
      VAR_7);
    break;
   case 150:
    FUNC_0(VAR_31, "%s\n",
      VAR_11);
    break;
   default:
    FUNC_0(VAR_31, "HP 6Gbps SAS HBA: Subsystem ID: 0x%X\n",
      VAR_31->pdev->subsystem_device);
    break;
   }
   break;
  default:
   FUNC_0(VAR_31, "HP SAS HBA: Subsystem ID: 0x%X\n",
     VAR_31->pdev->subsystem_device);
   break;
  }
 default:
  break;
 }
}
