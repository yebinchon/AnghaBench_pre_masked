
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct noon010_info {int hdl; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,int,int) ;
 int FUNC_4 (struct noon010_info*) ;
 int FUNC_5 (struct noon010_info*) ;
 struct noon010_info* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct noon010_info *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 if (VAR_1) {
  VAR_3 = FUNC_5(VAR_2);
  if (!VAR_3)
   VAR_3 = FUNC_2(VAR_0);
 } else {
  FUNC_3(VAR_0, 0, 1);
  VAR_3 = FUNC_4(VAR_2);
 }
 FUNC_1(&VAR_2->lock);


 if (!VAR_3 && VAR_1)
  VAR_3 = FUNC_7(&VAR_2->hdl);

 return VAR_3;
}
