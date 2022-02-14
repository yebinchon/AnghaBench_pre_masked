
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
 int VAR_3 ;
 struct v4l2_subdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct csi_state*) ;
 int FUNC_2 (struct csi_state*) ;
 struct csi_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, bool VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_0(VAR_4);
 struct csi_state *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = 0;

 FUNC_4(&VAR_7->lock);
 if (!VAR_5 && !(VAR_7->flags & VAR_3))
  goto unlock;

 if (!(VAR_7->flags & VAR_1)) {
  VAR_8 = FUNC_6(VAR_7->mipi_phy_regulator);
  if (VAR_8)
   goto unlock;

  VAR_7->flags |= VAR_1;
  FUNC_1(VAR_7);
 }
 if (VAR_7->flags & VAR_2)
  FUNC_2(VAR_7);

 VAR_7->flags &= ~VAR_3;

unlock:
 FUNC_5(&VAR_7->lock);

 return VAR_8 ? -VAR_0 : 0;
}
