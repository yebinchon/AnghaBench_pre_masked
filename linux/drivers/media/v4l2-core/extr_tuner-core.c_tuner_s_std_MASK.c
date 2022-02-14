
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tuner {int std; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct tuner*,int ) ;
 scalar_t__ FUNC_2 (struct tuner*,int ) ;
 struct tuner* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct tuner*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, v4l2_std_id VAR_2)
{
 struct tuner *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_3, VAR_0))
  return 0;

 VAR_3->std = FUNC_4(VAR_3, VAR_2);
 if (VAR_3->std != VAR_2)
  FUNC_0("Fixup standard %llx to %llx\n", VAR_2, VAR_3->std);
 FUNC_1(VAR_3, 0);
 return 0;
}
