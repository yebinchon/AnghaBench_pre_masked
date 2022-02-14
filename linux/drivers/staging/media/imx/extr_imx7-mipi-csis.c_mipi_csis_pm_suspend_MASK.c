
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct device {int dummy; } ;
struct csi_state {int flags; int lock; int mipi_phy_regulator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct csi_state*) ;
 int FUNC_2 (struct csi_state*) ;
 struct csi_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, bool VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_0(VAR_3);
 struct csi_state *VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = 0;

 FUNC_4(&VAR_6->lock);
 if (VAR_6->flags & VAR_1) {
  FUNC_2(VAR_6);
  VAR_7 = FUNC_6(VAR_6->mipi_phy_regulator);
  if (VAR_7)
   goto unlock;
  FUNC_1(VAR_6);
  VAR_6->flags &= ~VAR_1;
  if (!VAR_4)
   VAR_6->flags |= VAR_2;
 }

unlock:
 FUNC_5(&VAR_6->lock);

 return VAR_7 ? -VAR_0 : 0;
}
