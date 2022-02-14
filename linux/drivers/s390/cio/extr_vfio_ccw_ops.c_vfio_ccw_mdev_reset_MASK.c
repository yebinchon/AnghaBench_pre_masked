
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfio_ccw_private {int state; struct subchannel* sch; } ;
struct subchannel {int dummy; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel*,int ) ;
 struct vfio_ccw_private* FUNC_1 (int ) ;
 int FUNC_2 (struct mdev_device*) ;
 int FUNC_3 (struct subchannel*) ;

__attribute__((used)) static int FUNC_4(struct mdev_device *VAR_1)
{
 struct vfio_ccw_private *VAR_2;
 struct subchannel *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(FUNC_2(VAR_1));
 VAR_3 = VAR_2->sch;
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, (u32)(unsigned long)VAR_3);
 if (!VAR_4)
  VAR_2->state = VAR_0;

 return VAR_4;
}
