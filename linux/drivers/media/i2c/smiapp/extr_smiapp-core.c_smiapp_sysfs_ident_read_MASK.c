
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct smiapp_module_info {int manufacturer_id; int model_id; int revision_number_major; } ;
struct smiapp_sensor {struct smiapp_module_info minfo; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ,char*,int,int,int ) ;
 int FUNC_2 (struct device*) ;
 struct smiapp_sensor* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_0(FUNC_2(VAR_1));
 struct smiapp_sensor *VAR_5 = FUNC_3(VAR_4);
 struct smiapp_module_info *VAR_6 = &VAR_5->minfo;

 return FUNC_1(VAR_3, VAR_0, "%2.2x%4.4x%2.2x\n",
   VAR_6->manufacturer_id, VAR_6->model_id,
   VAR_6->revision_number_major) + 1;
}
