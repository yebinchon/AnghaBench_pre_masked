
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov5645 {int power_count; int power_lock; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct ov5645*) ;
 int FUNC_6 (struct ov5645*) ;
 int FUNC_7 (struct ov5645*,int ,int ) ;
 int FUNC_8 (struct ov5645*,int ,int) ;
 struct ov5645* FUNC_9 (struct v4l2_subdev*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct ov5645 *VAR_4 = FUNC_9(VAR_2);
 int VAR_5 = 0;

 FUNC_3(&VAR_4->power_lock);




 if (VAR_4->power_count == !VAR_3) {
  if (VAR_3) {
   VAR_5 = FUNC_6(VAR_4);
   if (VAR_5 < 0)
    goto exit;

   VAR_5 = FUNC_7(VAR_4,
     VAR_1,
     FUNC_0(VAR_1));
   if (VAR_5 < 0) {
    FUNC_2(VAR_4->dev,
     "could not set init registers\n");
    FUNC_5(VAR_4);
    goto exit;
   }

   FUNC_10(500, 1000);
  } else {
   FUNC_8(VAR_4, VAR_0, 0x58);
   FUNC_5(VAR_4);
  }
 }


 VAR_4->power_count += VAR_3 ? 1 : -1;
 FUNC_1(VAR_4->power_count < 0);

exit:
 FUNC_4(&VAR_4->power_lock);

 return VAR_5;
}
