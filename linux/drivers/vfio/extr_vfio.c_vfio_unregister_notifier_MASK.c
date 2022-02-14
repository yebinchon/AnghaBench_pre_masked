
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int dummy; } ;
struct notifier_block {int dummy; } ;
struct device {int dummy; } ;
typedef enum vfio_notify_type { ____Placeholder_vfio_notify_type } vfio_notify_type ;


 int VAR_0 ;
 int VAR_1 ;


 struct vfio_group* FUNC_0 (struct device*) ;
 int FUNC_1 (struct vfio_group*) ;
 int FUNC_2 (struct vfio_group*,struct notifier_block*) ;
 int FUNC_3 (struct vfio_group*,struct notifier_block*) ;

int FUNC_4(struct device *VAR_2, enum vfio_notify_type VAR_3,
        struct notifier_block *VAR_4)
{
 struct vfio_group *VAR_5;
 int VAR_6;

 if (!VAR_2 || !VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_3(VAR_5, VAR_4);
  break;
 case 129:
  VAR_6 = FUNC_2(VAR_5, VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 FUNC_1(VAR_5);
 return VAR_6;
}
