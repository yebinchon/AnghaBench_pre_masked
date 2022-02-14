
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct fb_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct fb_info*,int) ;
 int FUNC_4 (struct fb_info*,int) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_2(VAR_0);
 char *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 VAR_7 = FUNC_5(VAR_2, &VAR_5, 0);
 FUNC_0();
 VAR_6 = FUNC_3(VAR_4, VAR_7);

 FUNC_4(VAR_4, VAR_7);
 FUNC_1();
 if (VAR_6 < 0)
  return VAR_6;
 return VAR_3;
}
