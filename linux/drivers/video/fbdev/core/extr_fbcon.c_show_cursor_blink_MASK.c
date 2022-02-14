
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int flags; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_3 ;
 struct fb_info** VAR_4 ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
     struct device_attribute *VAR_6, char *VAR_7)
{
 struct fb_info *VAR_8;
 struct fbcon_ops *VAR_9;
 int VAR_10, VAR_11 = -1;

 FUNC_0();
 VAR_10 = VAR_2[VAR_3];

 if (VAR_10 == -1 || VAR_4[VAR_10] == ((void*)0))
  goto err;

 VAR_8 = VAR_4[VAR_10];
 VAR_9 = VAR_8->fbcon_par;

 if (!VAR_9)
  goto err;

 VAR_11 = (VAR_9->flags & VAR_0) ? 1 : 0;
err:
 FUNC_1();
 return FUNC_2(VAR_7, VAR_1, "%d\n", VAR_11);
}
