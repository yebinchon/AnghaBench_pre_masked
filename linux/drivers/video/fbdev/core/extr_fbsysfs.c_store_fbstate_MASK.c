
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct fb_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct fb_info*,int) ;
 int FUNC_4 (struct fb_info*) ;
 scalar_t__ FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_2(VAR_0);
 u32 VAR_5;
 char *VAR_6 = ((void*)0);

 VAR_5 = FUNC_5(VAR_2, &VAR_6, 0);

 FUNC_0();
 FUNC_4(VAR_4);

 FUNC_3(VAR_4, (int)VAR_5);

 FUNC_6(VAR_4);
 FUNC_1();

 return VAR_3;
}
