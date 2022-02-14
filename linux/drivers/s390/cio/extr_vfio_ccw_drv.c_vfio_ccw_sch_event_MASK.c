
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {scalar_t__ state; scalar_t__ mdev; } ;
struct subchannel {int lock; int dev; int todo_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct subchannel*) ;
 struct vfio_ccw_private* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct vfio_ccw_private*,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct subchannel *VAR_5, int VAR_6)
{
 struct vfio_ccw_private *VAR_7 = FUNC_1(&VAR_5->dev);
 unsigned long VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_3(VAR_5->lock, VAR_8);
 if (!FUNC_2(&VAR_5->dev))
  goto out_unlock;

 if (FUNC_6(&VAR_5->todo_work))
  goto out_unlock;

 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_7, VAR_1);
  VAR_9 = 0;
  goto out_unlock;
 }

 VAR_7 = FUNC_1(&VAR_5->dev);
 if (VAR_7->state == VAR_3) {
  VAR_7->state = VAR_7->mdev ? VAR_2 :
     VAR_4;
 }
 VAR_9 = 0;

out_unlock:
 FUNC_4(VAR_5->lock, VAR_8);

 return VAR_9;
}
