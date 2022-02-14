
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fimc_md {int user_subdev_api; TYPE_2__** fimc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int user_subdev_api; } ;
struct TYPE_4__ {TYPE_1__ vid_cap; } ;


 int VAR_0 ;
 struct fimc_md* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct fimc_md *VAR_5 = FUNC_0(VAR_1);
 bool VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_3, "vid-dev\n"))
  VAR_6 = 0;
 else if (!FUNC_1(VAR_3, "sub-dev\n"))
  VAR_6 = 1;
 else
  return VAR_4;

 VAR_5->user_subdev_api = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_5->fimc[VAR_7])
   VAR_5->fimc[VAR_7]->vid_cap.user_subdev_api = VAR_6;
 return VAR_4;
}
