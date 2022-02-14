
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int reset_required; struct vfio_platform_device* name; int parent_module; int get_irq; int get_resource; int flags; void* opaque; } ;
struct amba_id {int dummy; } ;
struct amba_device {int dev; int periphid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vfio_platform_device* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct vfio_platform_device*) ;
 struct vfio_platform_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct vfio_platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct amba_device *VAR_6, const struct amba_id *VAR_7)
{
 struct vfio_platform_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->name = FUNC_0(VAR_1, "vfio-amba-%08x", VAR_6->periphid);
 if (!VAR_8->name) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 VAR_8->opaque = (void *) VAR_6;
 VAR_8->flags = VAR_3;
 VAR_8->get_resource = VAR_5;
 VAR_8->get_irq = VAR_4;
 VAR_8->parent_module = VAR_2;
 VAR_8->reset_required = 0;

 VAR_9 = FUNC_3(VAR_8, &VAR_6->dev);
 if (VAR_9) {
  FUNC_1(VAR_8->name);
  FUNC_1(VAR_8);
 }

 return VAR_9;
}
