
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct dlfb_data* par; } ;
struct dlfb_data {int cpu_kcycles_used; int bytes_sent; int bytes_identical; int bytes_rendered; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *,int ) ;
 struct fb_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_0);
 struct dlfb_data *VAR_5 = VAR_4->par;

 FUNC_0(&VAR_5->bytes_rendered, 0);
 FUNC_0(&VAR_5->bytes_identical, 0);
 FUNC_0(&VAR_5->bytes_sent, 0);
 FUNC_0(&VAR_5->cpu_kcycles_used, 0);

 return VAR_3;
}
