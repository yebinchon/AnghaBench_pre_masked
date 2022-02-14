
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct pci_dev {TYPE_3__ dev; } ;
struct cmodio_device {TYPE_1__* ctrl; int hex; struct pci_dev* pdev; } ;
struct TYPE_5__ {int int_disable; int int_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmodio_device*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 struct cmodio_device* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 TYPE_1__* FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct cmodio_device*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 struct cmodio_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_11(VAR_4, VAR_6);
 VAR_6->pdev = VAR_4;


 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev, "unable to enable device\n");
  return VAR_7;
 }

 FUNC_12(VAR_4);
 VAR_7 = FUNC_10(VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev, "unable to request regions\n");
  goto out_pci_disable_device;
 }


 VAR_6->ctrl = FUNC_8(VAR_4, 4);
 if (!VAR_6->ctrl) {
  FUNC_1(&VAR_4->dev, "unable to remap onboard regs\n");
  VAR_7 = -VAR_1;
  goto out_pci_release_regions;
 }


 VAR_6->hex = FUNC_3(&VAR_6->ctrl->int_enable);


 VAR_7 = FUNC_13(&VAR_4->dev.kobj, &VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev, "unable to create sysfs attributes\n");
  goto out_unmap_ctrl;
 }





 FUNC_5(0xf, &VAR_6->ctrl->int_disable);


 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev, "unable to probe submodules\n");
  goto out_sysfs_remove_group;
 }

 return 0;

out_sysfs_remove_group:
 FUNC_14(&VAR_4->dev.kobj, &VAR_3);
out_unmap_ctrl:
 FUNC_4(VAR_6->ctrl);
out_pci_release_regions:
 FUNC_9(VAR_4);
out_pci_disable_device:
 FUNC_6(VAR_4);

 return VAR_7;
}
