
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7251 {int power_on; int lock; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct ov7251*) ;
 int FUNC_5 (struct ov7251*) ;
 int FUNC_6 (struct ov7251*,int ,int ) ;
 struct ov7251* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct ov7251 *VAR_3 = FUNC_7(VAR_1);
 int VAR_4 = 0;

 FUNC_2(&VAR_3->lock);


 if (VAR_3->power_on == !!VAR_2)
  goto exit;

 if (VAR_2) {
  VAR_4 = FUNC_5(VAR_3);
  if (VAR_4 < 0)
   goto exit;

  VAR_4 = FUNC_6(VAR_3,
     VAR_0,
     FUNC_0(VAR_0));
  if (VAR_4 < 0) {
   FUNC_1(VAR_3->dev, "could not set init registers\n");
   FUNC_4(VAR_3);
   goto exit;
  }

  VAR_3->power_on = 1;
 } else {
  FUNC_4(VAR_3);
  VAR_3->power_on = 0;
 }

exit:
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
