
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9p031 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt9p031*) ;
 int FUNC_1 (struct mt9p031*) ;
 int FUNC_2 (struct mt9p031*,int ,int ) ;
 int FUNC_3 (struct mt9p031*) ;
 struct mt9p031* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct mt9p031 *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 if (!VAR_2) {

  VAR_4 = FUNC_2(VAR_3,
       VAR_0, 0);
  if (VAR_4 < 0)
   return VAR_4;

  return FUNC_0(VAR_3);
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_3, 0,
      VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_3);
}
