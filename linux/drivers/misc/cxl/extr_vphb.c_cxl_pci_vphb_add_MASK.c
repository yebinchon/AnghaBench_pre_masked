
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_controller {TYPE_3__* bus; int controller_ops; struct cxl_afu* private_data; int * cfg_data; int * cfg_addr; int * ops; struct device* parent; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cxl_afu {struct pci_controller* phb; TYPE_2__* adapter; int crs_num; } ;
struct TYPE_7__ {int bridge; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,void*) ;
 struct pci_controller* FUNC_2 (struct device_node*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_4 (struct pci_controller*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cxl_afu *VAR_5)
{
 struct pci_controller *VAR_6;
 struct device_node *VAR_7;
 struct device *VAR_8;
 if (!VAR_5->crs_num)
  return 0;
 VAR_8 = VAR_5->adapter->dev.parent;
 VAR_7 = VAR_8->of_node;


 VAR_6 = FUNC_2(VAR_7);
 if (!VAR_6)
  return -VAR_0;


 VAR_6->parent = VAR_8;


 VAR_6->ops = &VAR_3;
 VAR_6->cfg_addr = ((void*)0);
 VAR_6->cfg_data = ((void*)0);
 VAR_6->private_data = VAR_5;
 VAR_6->controller_ops = VAR_2;


 FUNC_4(VAR_6);
 if (VAR_6->bus == ((void*)0))
  return -VAR_1;


 FUNC_1(FUNC_5(VAR_6->bus->bridge),
        VAR_4,
        (void *) VAR_6);





 FUNC_3(VAR_6->bus);


 FUNC_0(VAR_6->bus);

 VAR_5->phb = VAR_6;

 return 0;
}
