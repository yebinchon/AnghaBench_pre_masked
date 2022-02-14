
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


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
 int FUNC_0 (struct pci_dev*,int ,int*) ;

enum pci_bus_speed FUNC_1(struct pci_dev *VAR_16)
{
 u32 VAR_17, VAR_18;
 FUNC_0(VAR_16, VAR_6, &VAR_17);
 if (VAR_17) {
  if (VAR_17 & VAR_9)
   return VAR_2;
  else if (VAR_17 & VAR_7)
   return VAR_0;
  else if (VAR_17 & VAR_11)
   return VAR_4;
  else if (VAR_17 & VAR_10)
   return VAR_3;
  else if (VAR_17 & VAR_8)
   return VAR_1;
  return VAR_15;
 }

 FUNC_0(VAR_16, VAR_5, &VAR_18);
 if ((VAR_18 & VAR_12) == VAR_14)
  return VAR_3;
 else if ((VAR_18 & VAR_12) == VAR_13)
  return VAR_1;

 return VAR_15;
}
