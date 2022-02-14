
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int fbcon_par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_1 ;
 int FUNC_3 (struct fb_info*) ;
 size_t VAR_2 ;
 struct fb_info** VAR_3 ;
 int FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct fb_info *VAR_8;
 int VAR_9, VAR_10;
 char **VAR_11 = ((void*)0);

 FUNC_0();
 VAR_10 = VAR_0[VAR_2];

 if (VAR_10 == -1 || VAR_3[VAR_10] == ((void*)0))
  goto err;

 VAR_8 = VAR_3[VAR_10];

 if (!VAR_8->fbcon_par)
  goto err;

 VAR_9 = FUNC_4(VAR_6, VAR_11, 0);

 if (VAR_9) {
  VAR_1 = 0;
  FUNC_2(VAR_8);
 } else {
  VAR_1 = 1;
  FUNC_3(VAR_8);
 }

err:
 FUNC_1();
 return VAR_7;
}
