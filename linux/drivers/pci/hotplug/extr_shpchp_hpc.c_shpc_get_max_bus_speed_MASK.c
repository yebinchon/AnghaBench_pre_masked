
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_bus {int max_bus_speed; } ;
struct controller {TYPE_1__* pci_dev; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;
struct TYPE_2__ {struct pci_bus* subordinate; } ;


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
 int FUNC_0 (struct controller*,char*,int) ;
 int FUNC_1 (struct controller*,int ) ;
 int FUNC_2 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_3(struct controller *VAR_27)
{
 int VAR_28 = 0;
 struct pci_bus *VAR_29 = VAR_27->pci_dev->subordinate;
 enum pci_bus_speed VAR_30 = VAR_12;
 u8 VAR_31 = FUNC_1(VAR_27, VAR_13);
 u32 VAR_32 = FUNC_2(VAR_27, VAR_25);
 u32 VAR_33 = FUNC_2(VAR_27, VAR_26);

 if (VAR_31 == 2) {
  if (VAR_33 & VAR_19)
   VAR_30 = VAR_6;
  else if (VAR_33 & VAR_16)
   VAR_30 = VAR_3;
  else if (VAR_33 & VAR_24)
   VAR_30 = VAR_11;
  else if (VAR_33 & VAR_18)
   VAR_30 = VAR_5;
  else if (VAR_33 & VAR_15)
   VAR_30 = VAR_2;
  else if (VAR_33 & VAR_23)
   VAR_30 = VAR_10;
 }

 if (VAR_30 == VAR_12) {
  if (VAR_32 & VAR_17)
   VAR_30 = VAR_4;
  else if (VAR_32 & VAR_14)
   VAR_30 = VAR_1;
  else if (VAR_32 & VAR_22)
   VAR_30 = VAR_9;
  else if (VAR_33 & VAR_21)
   VAR_30 = VAR_8;
  else if (VAR_32 & VAR_20)
   VAR_30 = VAR_7;
  else
   VAR_28 = -VAR_0;
 }

 VAR_29->max_bus_speed = VAR_30;
 FUNC_0(VAR_27, "Max bus speed = %d\n", VAR_30);

 return VAR_28;
}
