
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int done; int mutex; } ;
struct TYPE_5__ {TYPE_1__ ioctl_cmds; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_3(struct pci_dev *VAR_0, const struct pci_device_id *VAR_1)
{
 MPT_ADAPTER *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_2->ioctl_cmds.mutex);
 FUNC_0(&VAR_2->ioctl_cmds.done);
 return 0;
}
