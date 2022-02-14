
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {scalar_t__ opaque; } ;
struct resource {int dummy; } ;
struct amba_device {struct resource res; } ;



__attribute__((used)) static struct resource *FUNC_0(struct vfio_platform_device *VAR_0,
       int VAR_1)
{
 struct amba_device *VAR_2 = (struct amba_device *) VAR_0->opaque;

 if (VAR_1 == 0)
  return &VAR_2->res;

 return ((void*)0);
}
