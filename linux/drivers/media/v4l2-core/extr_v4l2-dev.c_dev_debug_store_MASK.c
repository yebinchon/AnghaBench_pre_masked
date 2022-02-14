
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct video_device {int dev_debug; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;
 struct video_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = 0;
 u16 VAR_6;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_4->dev_debug = VAR_6;
 return VAR_3;
}
