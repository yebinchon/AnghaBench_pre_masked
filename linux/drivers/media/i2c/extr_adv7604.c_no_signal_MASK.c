
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static inline bool FUNC_6(struct v4l2_subdev *VAR_0)
{
 bool VAR_1;

 VAR_1 = FUNC_4(VAR_0);

 VAR_1 |= FUNC_2(VAR_0);
 VAR_1 |= FUNC_1(VAR_0);

 if (FUNC_0(VAR_0)) {
  VAR_1 |= FUNC_3(VAR_0);
  VAR_1 |= FUNC_5(VAR_0);
 }

 return VAR_1;
}
