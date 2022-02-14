
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int device; int refcnt; scalar_t__ reset_required; int parent_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vfio_platform_device*,char const**) ;
 int FUNC_8 (struct vfio_platform_device*) ;
 int FUNC_9 (struct vfio_platform_device*) ;
 int FUNC_10 (struct vfio_platform_device*) ;
 int FUNC_11 (struct vfio_platform_device*) ;

__attribute__((used)) static int FUNC_12(void *VAR_3)
{
 struct vfio_platform_device *VAR_4 = VAR_3;
 int VAR_5;

 if (!FUNC_6(VAR_4->parent_module))
  return -VAR_0;

 FUNC_2(&VAR_2);

 if (!VAR_4->refcnt) {
  const char *VAR_6 = ((void*)0);

  VAR_5 = FUNC_11(VAR_4);
  if (VAR_5)
   goto err_reg;

  VAR_5 = FUNC_9(VAR_4);
  if (VAR_5)
   goto err_irq;

  VAR_5 = FUNC_4(VAR_4->device);
  if (VAR_5 < 0)
   goto err_pm;

  VAR_5 = FUNC_7(VAR_4, &VAR_6);
  if (VAR_5 && VAR_4->reset_required) {
   FUNC_0(VAR_4->device, "reset driver is required and reset call failed in open (%d) %s\n",
     VAR_5, VAR_6 ? VAR_6 : "");
   goto err_rst;
  }
 }

 VAR_4->refcnt++;

 FUNC_3(&VAR_2);
 return 0;

err_rst:
 FUNC_5(VAR_4->device);
err_pm:
 FUNC_8(VAR_4);
err_irq:
 FUNC_10(VAR_4);
err_reg:
 FUNC_3(&VAR_2);
 FUNC_1(VAR_1);
 return VAR_5;
}
