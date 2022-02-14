
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {scalar_t__ opaque; } ;
struct amba_device {int* irq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vfio_platform_device *VAR_2, int VAR_3)
{
 struct amba_device *VAR_4 = (struct amba_device *) VAR_2->opaque;
 int VAR_5 = 0;

 if (VAR_3 < VAR_0)
  VAR_5 = VAR_4->irq[VAR_3];


 return VAR_5 ? VAR_5 : -VAR_1;
}
