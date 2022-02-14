
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tmp_curves ;
struct TYPE_4__ {int num_curves; int num_values; int lock; int curves; } ;
struct TYPE_3__ {int (* set_gamma ) (struct fbtft_par*,int *) ;} ;
struct fbtft_par {TYPE_2__ gamma; TYPE_1__ fbtftops; } ;
struct fb_info {struct fbtft_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fbtft_par*,int *,char const*,size_t) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fbtft_par*,int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_0(VAR_1);
 struct fbtft_par *VAR_6 = VAR_5->par;
 u32 VAR_7[VAR_0];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_6->fbtftops.set_gamma(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_6->gamma.lock);
 FUNC_2(VAR_6->gamma.curves, VAR_7,
        VAR_6->gamma.num_curves * VAR_6->gamma.num_values *
        sizeof(VAR_7[0]));
 FUNC_4(&VAR_6->gamma.lock);

 return VAR_4;
}
