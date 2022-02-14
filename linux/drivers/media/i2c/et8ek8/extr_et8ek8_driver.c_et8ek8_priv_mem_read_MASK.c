
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct et8ek8_sensor {int priv_mem; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 struct et8ek8_sensor* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_0(FUNC_3(VAR_1));
 struct et8ek8_sensor *VAR_5 = FUNC_2(VAR_4);





 FUNC_1(VAR_3, VAR_5->priv_mem, VAR_0);

 return VAR_0;
}
