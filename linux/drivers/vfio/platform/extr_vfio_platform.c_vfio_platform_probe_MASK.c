
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int reset_required; int parent_module; int get_irq; int get_resource; int flags; int name; void* opaque; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vfio_platform_device*) ;
 struct vfio_platform_device* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct vfio_platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7)
{
 struct vfio_platform_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->opaque = (void *) VAR_7;
 VAR_8->name = VAR_7->name;
 VAR_8->flags = VAR_3;
 VAR_8->get_resource = VAR_5;
 VAR_8->get_irq = VAR_4;
 VAR_8->parent_module = VAR_2;
 VAR_8->reset_required = VAR_6;

 VAR_9 = FUNC_2(VAR_8, &VAR_7->dev);
 if (VAR_9)
  FUNC_0(VAR_8);

 return VAR_9;
}
