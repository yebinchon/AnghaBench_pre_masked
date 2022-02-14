
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int device; } ;
struct intelfb_info {char* name; int mobile; void* pll_index; int chipset; } ;


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
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

int FUNC_1(struct pci_dev *VAR_21, struct intelfb_info *VAR_22)
{
 u32 VAR_23;
 if (!VAR_21 || !VAR_22)
  return 1;

 switch (VAR_21->device) {
 case 139:
  VAR_22->name = "Intel(R) 830M";
  VAR_22->chipset = VAR_0;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_19;
  return 0;
 case 138:
  VAR_22->name = "Intel(R) 845G";
  VAR_22->chipset = VAR_1;
  VAR_22->mobile = 0;
  VAR_22->pll_index = VAR_19;
  return 0;
 case 137:
  VAR_22->mobile = 1;
  VAR_22->name = "Intel(R) 854";
  VAR_22->chipset = VAR_4;
  return 0;
 case 136:
  VAR_23 = 0;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_19;
  FUNC_0(VAR_21, VAR_8, &VAR_23);
  switch ((VAR_23 >> VAR_10) &
   VAR_9) {
  case 140:
   VAR_22->name = "Intel(R) 855GME";
   VAR_22->chipset = VAR_6;
   return 0;
  case 141:
   VAR_22->name = "Intel(R) 855GM";
   VAR_22->chipset = VAR_5;
   return 0;
  case 142:
   VAR_22->name = "Intel(R) 852GME";
   VAR_22->chipset = VAR_3;
   return 0;
  case 143:
   VAR_22->name = "Intel(R) 852GM";
   VAR_22->chipset = VAR_2;
   return 0;
  default:
   VAR_22->name = "Intel(R) 852GM/855GM";
   VAR_22->chipset = VAR_7;
   return 0;
  }
  break;
 case 135:
  VAR_22->name = "Intel(R) 865G";
  VAR_22->chipset = VAR_11;
  VAR_22->mobile = 0;
  VAR_22->pll_index = VAR_19;
  return 0;
 case 134:
  VAR_22->name = "Intel(R) 915G";
  VAR_22->chipset = VAR_12;
  VAR_22->mobile = 0;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 133:
  VAR_22->name = "Intel(R) 915GM";
  VAR_22->chipset = VAR_13;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 132:
  VAR_22->name = "Intel(R) 945G";
  VAR_22->chipset = VAR_14;
  VAR_22->mobile = 0;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 131:
  VAR_22->name = "Intel(R) 945GM";
  VAR_22->chipset = VAR_15;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 130:
  VAR_22->name = "Intel(R) 945GME";
  VAR_22->chipset = VAR_16;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 129:
  VAR_22->name = "Intel(R) 965G";
  VAR_22->chipset = VAR_17;
  VAR_22->mobile = 0;
  VAR_22->pll_index = VAR_20;
  return 0;
 case 128:
  VAR_22->name = "Intel(R) 965GM";
  VAR_22->chipset = VAR_18;
  VAR_22->mobile = 1;
  VAR_22->pll_index = VAR_20;
  return 0;
 default:
  return 1;
 }
}
