
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {TYPE_1__* xdev; scalar_t__ be_watching; int be_watch; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct xen_pcibk_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xen_pcibk_device*) ;
 int FUNC_4 (struct xen_pcibk_device*) ;

__attribute__((used)) static void FUNC_5(struct xen_pcibk_device *VAR_0)
{
 if (VAR_0->be_watching) {
  FUNC_2(&VAR_0->be_watch);
  VAR_0->be_watching = 0;
 }

 FUNC_3(VAR_0);



 FUNC_4(VAR_0);

 FUNC_0(&VAR_0->xdev->dev, ((void*)0));
 VAR_0->xdev = ((void*)0);

 FUNC_1(VAR_0);
}
