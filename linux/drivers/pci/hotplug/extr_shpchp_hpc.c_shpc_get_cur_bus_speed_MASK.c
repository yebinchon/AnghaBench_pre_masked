
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_bus {int cur_bus_speed; } ;
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct controller*,int ) ;
 int FUNC_2 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_3(struct controller *VAR_18)
{
 int VAR_19 = 0;
 struct pci_bus *VAR_20 = VAR_18->pci_dev->subordinate;
 enum pci_bus_speed VAR_21 = VAR_15;
 u16 VAR_22 = FUNC_2(VAR_18, VAR_17);
 u8 VAR_23 = FUNC_1(VAR_18, VAR_16);
 u8 VAR_24 = (VAR_23 == 2) ? (VAR_22 & 0xF) : (VAR_22 & 0x7);

 if ((VAR_23 == 1) && (VAR_24 > 4)) {
  VAR_19 = -VAR_0;
  goto out;
 }

 switch (VAR_24) {
 case 0x0:
  VAR_21 = VAR_9;
  break;
 case 0x1:
  VAR_21 = VAR_10;
  break;
 case 0x2:
  VAR_21 = VAR_11;
  break;
 case 0x3:
  VAR_21 = VAR_1;
  break;
 case 0x4:
  VAR_21 = VAR_5;
  break;
 case 0x5:
  VAR_21 = VAR_14;
  break;
 case 0x6:
  VAR_21 = VAR_4;
  break;
 case 0x7:
  VAR_21 = VAR_8;
  break;
 case 0x8:
  VAR_21 = VAR_12;
  break;
 case 0x9:
  VAR_21 = VAR_2;
  break;
 case 0xa:
  VAR_21 = VAR_6;
  break;
 case 0xb:
  VAR_21 = VAR_13;
  break;
 case 0xc:
  VAR_21 = VAR_3;
  break;
 case 0xd:
  VAR_21 = VAR_7;
  break;
 default:
  VAR_19 = -VAR_0;
  break;
 }

 out:
 VAR_20->cur_bus_speed = VAR_21;
 FUNC_0("Current bus speed = %d\n", VAR_21);
 return VAR_19;
}
