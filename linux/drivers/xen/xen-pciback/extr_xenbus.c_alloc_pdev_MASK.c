
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct xen_pcibk_device {int op_work; scalar_t__ be_watching; int evtchn_irq; int * sh_info; int dev_lock; struct xenbus_device* xdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,struct xen_pcibk_device*) ;
 int FUNC_2 (int *,struct xen_pcibk_device*) ;
 int FUNC_3 (struct xen_pcibk_device*) ;
 struct xen_pcibk_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct xen_pcibk_device*) ;

__attribute__((used)) static struct xen_pcibk_device *FUNC_7(struct xenbus_device *VAR_3)
{
 struct xen_pcibk_device *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct xen_pcibk_device), VAR_0);
 if (VAR_4 == ((void*)0))
  goto out;
 FUNC_1(&VAR_3->dev, "allocated pdev @ 0x%p\n", VAR_4);

 VAR_4->xdev = VAR_3;

 FUNC_5(&VAR_4->dev_lock);

 VAR_4->sh_info = ((void*)0);
 VAR_4->evtchn_irq = VAR_1;
 VAR_4->be_watching = 0;

 FUNC_0(&VAR_4->op_work, VAR_2);

 if (FUNC_6(VAR_4)) {
  FUNC_3(VAR_4);
  VAR_4 = ((void*)0);
 }

 FUNC_2(&VAR_3->dev, VAR_4);

out:
 return VAR_4;
}
