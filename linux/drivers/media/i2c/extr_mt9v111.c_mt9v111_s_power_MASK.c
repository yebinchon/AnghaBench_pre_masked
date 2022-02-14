
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {int pwr_count; int pwr_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mt9v111_dev* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct mt9v111_dev *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_2->pwr_mutex);





 VAR_3 = VAR_2->pwr_count;
 VAR_3 += VAR_1 ? 1 : -1;
 if (VAR_3 == !!VAR_1) {
  VAR_4 = VAR_1 ? FUNC_2(VAR_0) :
      FUNC_1(VAR_0);
  if (!VAR_4)

   VAR_2->pwr_count = VAR_3;

  FUNC_4(&VAR_2->pwr_mutex);

  return VAR_4;
 }





 FUNC_0(VAR_3 < 0 || VAR_3 > 1);
 VAR_2->pwr_count = VAR_3;

 FUNC_4(&VAR_2->pwr_mutex);

 return VAR_4;
}
