
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct myrs_hba {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned char,unsigned char) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static bool FUNC_3(struct myrs_hba *VAR_0, unsigned char VAR_1,
  unsigned char VAR_2, unsigned char VAR_3)
{
 struct pci_dev *VAR_4 = VAR_0->pdev;

 switch (VAR_1) {
 case 0x00:
  FUNC_1(&VAR_4->dev,
    "Physical Device %d:%d Not Responding\n",
    VAR_3, VAR_2);
  break;
 case 0x08:
  FUNC_2(&VAR_4->dev, "Spinning Up Drives\n");
  break;
 case 0x30:
  FUNC_2(&VAR_4->dev, "Configuration Checksum Error\n");
  break;
 case 0x60:
  FUNC_2(&VAR_4->dev, "Mirror Race Recovery Failed\n");
  break;
 case 0x70:
  FUNC_2(&VAR_4->dev, "Mirror Race Recovery In Progress\n");
  break;
 case 0x90:
  FUNC_2(&VAR_4->dev, "Physical Device %d:%d COD Mismatch\n",
      VAR_3, VAR_2);
  break;
 case 0xA0:
  FUNC_2(&VAR_4->dev, "Logical Drive Installation Aborted\n");
  break;
 case 0xB0:
  FUNC_2(&VAR_4->dev, "Mirror Race On A Critical Logical Drive\n");
  break;
 case 0xD0:
  FUNC_2(&VAR_4->dev, "New Controller Configuration Found\n");
  break;
 case 0xF0:
  FUNC_0(&VAR_4->dev, "Fatal Memory Parity Error\n");
  return 1;
 default:
  FUNC_0(&VAR_4->dev, "Unknown Initialization Error %02X\n",
   VAR_1);
  return 1;
 }
 return 0;
}
