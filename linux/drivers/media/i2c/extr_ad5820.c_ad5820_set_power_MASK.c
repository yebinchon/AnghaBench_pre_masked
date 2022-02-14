
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ad5820_device {int power_count; int power_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ad5820_device*,int) ;
 int FUNC_2 (struct ad5820_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ad5820_device* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int
FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ad5820_device *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 FUNC_3(&VAR_2->power_lock);





 if (VAR_2->power_count == !VAR_1) {
  VAR_3 = VAR_1 ? FUNC_2(VAR_2, 1) :
   FUNC_1(VAR_2, 1);
  if (VAR_3 < 0)
   goto done;
 }


 VAR_2->power_count += VAR_1 ? 1 : -1;
 FUNC_0(VAR_2->power_count < 0);

done:
 FUNC_4(&VAR_2->power_lock);
 return VAR_3;
}
