
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct owl_ctx {int eeprom_load; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct owl_ctx* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 char* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,struct owl_ctx*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int,char const*,int *,int ,struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_6,
       const struct pci_device_id *VAR_7)
{
 struct owl_ctx *VAR_8;
 const char *VAR_9;
 int VAR_10 = 0;

 if (FUNC_5(VAR_6))
  return -VAR_0;

 FUNC_6(VAR_6);

 VAR_9 = FUNC_3(VAR_6);
 if (!VAR_9) {
  FUNC_0(&VAR_6->dev, "no eeprom filename found.\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_1(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(&VAR_8->eeprom_load);

 FUNC_4(VAR_6, VAR_8);
 VAR_10 = FUNC_7(VAR_4, 1, VAR_9,
          &VAR_6->dev, VAR_3, VAR_6, VAR_5);
 if (VAR_10)
  FUNC_0(&VAR_6->dev, "failed to request caldata (%d).\n", VAR_10);

 return VAR_10;
}
