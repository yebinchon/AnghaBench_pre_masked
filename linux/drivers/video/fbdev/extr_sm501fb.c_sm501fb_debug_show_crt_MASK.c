
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sm501fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sm501fb_info*,char*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 struct sm501fb_info *VAR_5 = FUNC_0(VAR_2);
 char *VAR_6 = VAR_4;

 VAR_6 += FUNC_1(VAR_5, VAR_6, VAR_0, 0x40);
 VAR_6 += FUNC_1(VAR_5, VAR_6, VAR_1, 0x10);

 return VAR_6 - VAR_4;
}
