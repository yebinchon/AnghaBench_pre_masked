
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9p031 {int power_count; int power_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mt9p031*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mt9p031* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct mt9p031 *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->power_lock);




 if (VAR_2->power_count == !VAR_1) {
  VAR_3 = FUNC_1(VAR_2, !!VAR_1);
  if (VAR_3 < 0)
   goto out;
 }


 VAR_2->power_count += VAR_1 ? 1 : -1;
 FUNC_0(VAR_2->power_count < 0);

out:
 FUNC_3(&VAR_2->power_lock);
 return VAR_3;
}
