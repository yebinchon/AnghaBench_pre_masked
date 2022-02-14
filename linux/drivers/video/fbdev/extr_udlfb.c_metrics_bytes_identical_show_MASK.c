
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct dlfb_data* par; } ;
struct dlfb_data {int bytes_identical; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3) {
 struct fb_info *VAR_4 = FUNC_1(VAR_1);
 struct dlfb_data *VAR_5 = VAR_4->par;
 return FUNC_2(VAR_3, VAR_0, "%u\n",
   FUNC_0(&VAR_5->bytes_identical));
}
