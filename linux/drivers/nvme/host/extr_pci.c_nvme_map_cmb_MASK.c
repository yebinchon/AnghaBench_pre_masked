
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {TYPE_2__* device; } ;
struct nvme_dev {int cmb_size; int cmbsz; int cmb_use_sqes; TYPE_1__ ctrl; void* cmbloc; int bar; int dev; } ;
typedef int resource_size_t ;
struct TYPE_6__ {int attr; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct nvme_dev*) ;
 int FUNC_4 (struct nvme_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,int,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int) ;
 void* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 struct pci_dev* FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_11(struct nvme_dev *VAR_7)
{
 u64 VAR_8, VAR_9;
 resource_size_t VAR_10;
 struct pci_dev *VAR_11 = FUNC_10(VAR_7->dev);
 int VAR_12;

 if (VAR_7->cmb_size)
  return;

 VAR_7->cmbsz = FUNC_8(VAR_7->bar + VAR_4);
 if (!VAR_7->cmbsz)
  return;
 VAR_7->cmbloc = FUNC_8(VAR_7->bar + VAR_3);

 VAR_8 = FUNC_4(VAR_7) * FUNC_3(VAR_7);
 VAR_9 = FUNC_4(VAR_7) * FUNC_1(VAR_7->cmbloc);
 VAR_12 = FUNC_0(VAR_7->cmbloc);
 VAR_10 = FUNC_7(VAR_11, VAR_12);

 if (VAR_9 > VAR_10)
  return;






 if (VAR_8 > VAR_10 - VAR_9)
  VAR_8 = VAR_10 - VAR_9;

 if (FUNC_5(VAR_11, VAR_12, VAR_8, VAR_9)) {
  FUNC_2(VAR_7->ctrl.device,
    "failed to register the CMB\n");
  return;
 }

 VAR_7->cmb_size = VAR_8;
 VAR_7->cmb_use_sqes = VAR_6 && (VAR_7->cmbsz & VAR_1);

 if ((VAR_7->cmbsz & (VAR_2 | VAR_0)) ==
   (VAR_2 | VAR_0))
  FUNC_6(VAR_11, 1);

 if (FUNC_9(&VAR_7->ctrl.device->kobj,
        &VAR_5.attr, ((void*)0)))
  FUNC_2(VAR_7->ctrl.device,
    "failed to add sysfs attribute for CMB\n");
}
