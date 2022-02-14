
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_info*) ;
 size_t VAR_2 ;
 struct fb_info** VAR_3 ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
      struct device_attribute *VAR_5,char *VAR_6)
{
 struct fb_info *VAR_7;
 int VAR_8 = 0, VAR_9;

 FUNC_0();
 VAR_9 = VAR_1[VAR_2];

 if (VAR_9 == -1 || VAR_3[VAR_9] == ((void*)0))
  goto err;

 VAR_7 = VAR_3[VAR_9];
 VAR_8 = FUNC_2(VAR_7);
err:
 FUNC_1();
 return FUNC_3(VAR_6, VAR_0, "%d\n", VAR_8);
}
