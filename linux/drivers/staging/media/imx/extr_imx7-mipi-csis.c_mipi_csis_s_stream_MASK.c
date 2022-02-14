
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct csi_state {int flags; TYPE_1__* pdev; int lock; scalar_t__ debug; int src_sd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csi_state*) ;
 int FUNC_1 (struct csi_state*,int) ;
 int FUNC_2 (struct csi_state*) ;
 int FUNC_3 (struct csi_state*) ;
 struct csi_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_7, int VAR_8)
{
 struct csi_state *VAR_9 = FUNC_4(VAR_7);
 int VAR_10 = 0;

 if (VAR_8) {
  FUNC_0(VAR_9);
  VAR_10 = FUNC_7(&VAR_9->pdev->dev);
  if (VAR_10 < 0) {
   FUNC_9(&VAR_9->pdev->dev);
   return VAR_10;
  }
  VAR_10 = FUNC_10(VAR_9->src_sd, VAR_3, VAR_4, 1);
  if (VAR_10 < 0)
   return VAR_10;
 }

 FUNC_5(&VAR_9->lock);
 if (VAR_8) {
  if (VAR_9->flags & VAR_2) {
   VAR_10 = -VAR_0;
   goto unlock;
  }

  FUNC_2(VAR_9);
  VAR_10 = FUNC_10(VAR_9->src_sd, VAR_6, VAR_5, 1);
  if (VAR_10 < 0)
   goto unlock;

  FUNC_1(VAR_9, 1);

  VAR_9->flags |= VAR_1;
 } else {
  FUNC_10(VAR_9->src_sd, VAR_6, VAR_5, 0);
  VAR_10 = FUNC_10(VAR_9->src_sd, VAR_3, VAR_4, 1);
  FUNC_3(VAR_9);
  VAR_9->flags &= ~VAR_1;
  if (VAR_9->debug)
   FUNC_1(VAR_9, 1);
 }

unlock:
 FUNC_6(&VAR_9->lock);
 if (!VAR_8)
  FUNC_8(&VAR_9->pdev->dev);

 return VAR_10;
}
