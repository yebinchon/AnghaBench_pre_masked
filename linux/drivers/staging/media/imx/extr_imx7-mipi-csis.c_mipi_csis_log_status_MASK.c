
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct csi_state {int flags; int lock; scalar_t__ debug; } ;


 int VAR_0 ;
 int FUNC_0 (struct csi_state*) ;
 int FUNC_1 (struct csi_state*,int) ;
 struct csi_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1)
{
 struct csi_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_2, 1);
 if (VAR_2->debug && (VAR_2->flags & VAR_0))
  FUNC_0(VAR_2);
 FUNC_4(&VAR_2->lock);

 return 0;
}
