
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int type; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum pci_bus_speed FUNC_0(struct slot *VAR_6)
{
 enum pci_bus_speed VAR_7;
 switch (VAR_6->type) {
 case 1:
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
  VAR_7 = VAR_2;
  break;
 case 7:
 case 8:
  VAR_7 = VAR_3;
  break;
 case 11:
 case 14:
  VAR_7 = VAR_4;
  break;
 case 12:
 case 15:
  VAR_7 = VAR_0;
  break;
 case 13:
 case 16:
  VAR_7 = VAR_1;
  break;
 default:
  VAR_7 = VAR_5;
  break;
 }

 return VAR_7;
}
