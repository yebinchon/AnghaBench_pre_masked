
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {int ifcount; TYPE_1__* pci_dev; TYPE_2__* props; } ;
struct octdev_props {int dummy; } ;
struct TYPE_4__ {int gmxport; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct octeon_device*) ;

__attribute__((used)) static int FUNC_4(struct octeon_device *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3, VAR_4 = 0;

 FUNC_0(&VAR_1->pci_dev->dev, "Initializing network interfaces\n");




 VAR_1->ifcount = VAR_2;
 FUNC_2(VAR_1->props, 0,
        sizeof(struct octdev_props) * VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->props[VAR_3].gmxport = -1;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  FUNC_1(&VAR_1->pci_dev->dev, "Setup NIC devices failed\n");
  goto octnet_init_failure;
 }

 FUNC_0(&VAR_1->pci_dev->dev, "Network interfaces ready\n");

 return VAR_4;

octnet_init_failure:

 VAR_1->ifcount = 0;

 return VAR_4;
}
