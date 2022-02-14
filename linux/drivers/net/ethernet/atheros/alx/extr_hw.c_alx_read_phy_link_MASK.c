
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct alx_hw {int duplex; int link_speed; struct pci_dev* pdev; } ;





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
 int FUNC_0 (struct alx_hw*,int ,int*) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2(struct alx_hw *VAR_14)
{
 struct pci_dev *VAR_15 = VAR_14->pdev;
 u16 VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = FUNC_0(VAR_14, VAR_9, &VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_14, VAR_9, &VAR_16);
 if (VAR_18)
  return VAR_18;

 if (!(VAR_16 & VAR_4)) {
  VAR_14->link_speed = VAR_13;
  VAR_14->duplex = VAR_7;
  return 0;
 }


 VAR_18 = FUNC_0(VAR_14, VAR_3, &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (!(VAR_17 & VAR_1))
  goto wrong_speed;

 switch (VAR_17 & VAR_2) {
 case 130:
  VAR_14->link_speed = VAR_12;
  break;
 case 129:
  VAR_14->link_speed = VAR_11;
  break;
 case 128:
  VAR_14->link_speed = VAR_10;
  break;
 default:
  goto wrong_speed;
 }

 VAR_14->duplex = (VAR_17 & VAR_0) ? VAR_5 : VAR_6;
 return 0;

wrong_speed:
 FUNC_1(&VAR_15->dev, "invalid PHY speed/duplex: 0x%x\n", VAR_17);
 return -VAR_8;
}
