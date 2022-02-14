
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;
struct atafb_par {int dummy; } ;
struct TYPE_2__ {int (* decode_var ) (struct fb_var_screeninfo*,struct atafb_par*) ;int (* encode_var ) (struct fb_var_screeninfo*,struct atafb_par*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct atafb_par*) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct atafb_par*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 int VAR_3;
 struct atafb_par VAR_4;



 VAR_3 = VAR_0->decode_var(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_0->encode_var(VAR_1, &VAR_4);
 return 0;
}
