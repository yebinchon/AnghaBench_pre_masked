
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbtft_par {int debug; } ;
struct fb_info {struct fbtft_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(VAR_0);
 struct fbtft_par *VAR_5 = VAR_4->par;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_5->debug);
 if (VAR_6)
  return VAR_6;
 FUNC_1(&VAR_5->debug);

 return VAR_3;
}
