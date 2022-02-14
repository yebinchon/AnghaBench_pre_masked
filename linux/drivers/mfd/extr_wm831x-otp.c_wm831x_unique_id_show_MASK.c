
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wm831x* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,char*) ;
 int FUNC_2 (struct wm831x*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct wm831x *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 char VAR_6[VAR_0];

 VAR_5 = FUNC_2(VAR_4, VAR_6);
 if (VAR_5 < 0)
  return 0;

 return FUNC_1(VAR_3, "%*phN\n", VAR_0, VAR_6);
}
