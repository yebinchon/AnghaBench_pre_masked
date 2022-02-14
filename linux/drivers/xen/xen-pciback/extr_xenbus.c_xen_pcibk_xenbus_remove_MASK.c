
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct xen_pcibk_device {int dummy; } ;


 struct xen_pcibk_device* FUNC_0 (int *) ;
 int FUNC_1 (struct xen_pcibk_device*) ;

__attribute__((used)) static int FUNC_2(struct xenbus_device *VAR_0)
{
 struct xen_pcibk_device *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_1);

 return 0;
}
