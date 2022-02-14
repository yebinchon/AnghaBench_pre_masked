
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notifier_call; } ;
struct vfio_ccw_private {TYPE_1__ nb; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct vfio_ccw_private* FUNC_0 (int ) ;
 int FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (struct mdev_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct vfio_ccw_private*) ;
 int FUNC_4 (int ,int ,unsigned long*,TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct mdev_device *VAR_3)
{
 struct vfio_ccw_private *VAR_4 =
  FUNC_0(FUNC_2(VAR_3));
 unsigned long VAR_5 = VAR_1;
 int VAR_6;

 VAR_4->nb.notifier_call = VAR_2;

 VAR_6 = FUNC_4(FUNC_1(VAR_3), VAR_0,
         &VAR_5, &VAR_4->nb);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  FUNC_5(FUNC_1(VAR_3), VAR_0,
      &VAR_4->nb);
 return VAR_6;
}
