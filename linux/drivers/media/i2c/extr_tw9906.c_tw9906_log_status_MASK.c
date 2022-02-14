
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tw9906 {int norm; } ;


 int VAR_0 ;
 struct tw9906* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct tw9906 *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3 = VAR_2->norm & VAR_0;

 FUNC_2(VAR_1, "Standard: %d Hz\n", VAR_3 ? 60 : 50);
 FUNC_1(VAR_1);
 return 0;
}
