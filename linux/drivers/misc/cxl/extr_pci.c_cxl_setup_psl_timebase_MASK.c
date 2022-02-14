
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct device_node {int dummy; } ;
struct cxl {int psl_timebase_synced; TYPE_2__* native; } ;
struct TYPE_4__ {TYPE_1__* sl_ops; } ;
struct TYPE_3__ {int (* write_timebase_ctrl ) (struct cxl*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct cxl*) ;

__attribute__((used)) static void FUNC_7(struct cxl *VAR_2, struct pci_dev *VAR_3)
{
 struct device_node *VAR_4;

 VAR_2->psl_timebase_synced = 0;

 if (!(VAR_4 = FUNC_5(VAR_3)))
  return;


 FUNC_3(VAR_4);
 if (! FUNC_2(VAR_4, "ibm,capp-timebase-sync", ((void*)0))) {
  FUNC_4(VAR_4);
  FUNC_1(&VAR_3->dev, "PSL timebase inactive: OPAL support missing\n");
  return;
 }
 FUNC_4(VAR_4);





 if (VAR_2->native->sl_ops->write_timebase_ctrl)
  VAR_2->native->sl_ops->write_timebase_ctrl(VAR_2);


 FUNC_0(VAR_2, VAR_0, 0x0000000000000000);
 FUNC_0(VAR_2, VAR_0, VAR_1);

 return;
}
