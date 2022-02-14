
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_info*,int) ;
 size_t VAR_1 ;
 struct fb_info** VAR_2 ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
    struct device_attribute *VAR_4,const char *VAR_5,
    size_t VAR_6)
{
 struct fb_info *VAR_7;
 int VAR_8, VAR_9;
 char **VAR_10 = ((void*)0);

 FUNC_0();
 VAR_9 = VAR_0[VAR_1];

 if (VAR_9 == -1 || VAR_2[VAR_9] == ((void*)0))
  goto err;

 VAR_7 = VAR_2[VAR_9];
 VAR_8 = FUNC_3(VAR_5, VAR_10, 0);
 FUNC_2(VAR_7, VAR_8);
err:
 FUNC_1();
 return VAR_6;
}
