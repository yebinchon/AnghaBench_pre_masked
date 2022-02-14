
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;





 struct lis3lv02d* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lis3lv02d*,int*) ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (char*,char*,char const*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct lis3lv02d *VAR_3 = FUNC_0(VAR_0);
 s16 VAR_4[3];

 static const char VAR_5[] = "OK";
 static const char VAR_6[] = "FAIL";
 static const char VAR_7[] = "FAIL_IRQ";
 const char *VAR_8;

 FUNC_2(VAR_3);
 switch (FUNC_1(VAR_3, VAR_4)) {
 case 130:
  VAR_8 = VAR_6;
  break;
 case 129:
  VAR_8 = VAR_7;
  break;
 case 128:
 default:
  VAR_8 = VAR_5;
  break;
 }
 return FUNC_3(VAR_2, "%s %d %d %d\n", VAR_8,
  VAR_4[0], VAR_4[1], VAR_4[2]);
}
