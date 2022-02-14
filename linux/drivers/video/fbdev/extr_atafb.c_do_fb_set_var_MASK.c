
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int activate; } ;
struct atafb_par {int dummy; } ;
struct TYPE_2__ {int (* decode_var ) (struct fb_var_screeninfo*,struct atafb_par*) ;int (* encode_var ) (struct fb_var_screeninfo*,struct atafb_par*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atafb_par*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct atafb_par*) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct atafb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct atafb_par VAR_7;

 VAR_5 = VAR_2->decode_var(VAR_3, &VAR_7);
 if (VAR_5)
  return VAR_5;
 VAR_6 = VAR_3->activate;
 if (((VAR_3->activate & VAR_0) == VAR_1) && VAR_4)
  FUNC_0(&VAR_7);
 VAR_2->encode_var(VAR_3, &VAR_7);
 VAR_3->activate = VAR_6;
 return 0;
}
