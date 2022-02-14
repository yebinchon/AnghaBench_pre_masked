
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_md {scalar_t__ user_subdev_api; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fimc_md* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct fimc_md *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->user_subdev_api)
  return FUNC_1(VAR_3, "Sub-device API (sub-dev)\n", VAR_0);

 return FUNC_1(VAR_3, "V4L2 video node only API (vid-dev)\n", VAR_0);
}
