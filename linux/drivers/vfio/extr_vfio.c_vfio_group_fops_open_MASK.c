
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct vfio_group {TYPE_1__ notifier; int opened; scalar_t__ container; scalar_t__ noiommu; } ;
struct inode {int dummy; } ;
struct file {struct vfio_group* private_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 struct vfio_group* FUNC_6 (int ) ;
 int FUNC_7 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct vfio_group *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(FUNC_5(VAR_4));
 if (!VAR_6)
  return -VAR_2;

 if (VAR_6->noiommu && !FUNC_4(VAR_0)) {
  FUNC_7(VAR_6);
  return -VAR_3;
 }


 VAR_7 = FUNC_2(&VAR_6->opened, 0, 1);
 if (VAR_7) {
  FUNC_7(VAR_6);
  return -VAR_1;
 }


 if (VAR_6->container) {
  FUNC_3(&VAR_6->opened);
  FUNC_7(VAR_6);
  return -VAR_1;
 }


 if (FUNC_1(VAR_6->notifier.head))
  FUNC_0(&VAR_6->notifier);

 VAR_5->private_data = VAR_6;

 return 0;
}
