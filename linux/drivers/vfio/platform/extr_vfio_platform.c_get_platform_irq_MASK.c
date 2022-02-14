
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {scalar_t__ opaque; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_platform_device *VAR_0, int VAR_1)
{
 struct platform_device *VAR_2 = (struct platform_device *) VAR_0->opaque;

 return FUNC_0(VAR_2, VAR_1);
}
