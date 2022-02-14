
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_bus {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {TYPE_1__* driver; int dev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (struct ssb_bus*) ;
 struct ssb_bus* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,char const*) ;
 int FUNC_8 (struct pci_dev*,struct ssb_bus*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int,int) ;
 int FUNC_11 (struct ssb_bus*,struct pci_dev*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_2,
        const struct pci_device_id *VAR_3)
{
 struct ssb_bus *VAR_4;
 int VAR_5 = -VAR_0;
 const char *VAR_6;
 u32 VAR_7;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  goto err_kfree_ssb;
 VAR_6 = FUNC_0(&VAR_2->dev);
 if (VAR_2->driver && VAR_2->driver->name)
  VAR_6 = VAR_2->driver->name;
 VAR_5 = FUNC_7(VAR_2, VAR_6);
 if (VAR_5)
  goto err_pci_disable;
 FUNC_9(VAR_2);



 FUNC_5(VAR_2, 0x40, &VAR_7);
 if ((VAR_7 & 0x0000ff00) != 0)
  FUNC_10(VAR_2, 0x40, VAR_7 & 0xffff00ff);

 VAR_5 = FUNC_11(VAR_4, VAR_2);
 if (VAR_5)
  goto err_pci_release_regions;

 FUNC_8(VAR_2, VAR_4);

out:
 return VAR_5;

err_pci_release_regions:
 FUNC_6(VAR_2);
err_pci_disable:
 FUNC_3(VAR_2);
err_kfree_ssb:
 FUNC_1(VAR_4);
 return VAR_5;
}
