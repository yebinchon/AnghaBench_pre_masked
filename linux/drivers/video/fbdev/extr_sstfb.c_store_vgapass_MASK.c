
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (struct fb_info*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(VAR_0);
 char ** VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_5, 0);
 FUNC_2(VAR_4, VAR_6);

 return VAR_3;
}
