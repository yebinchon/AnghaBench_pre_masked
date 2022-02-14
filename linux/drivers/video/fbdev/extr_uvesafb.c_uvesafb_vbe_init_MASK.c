
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvesafb_par {scalar_t__ ypan; scalar_t__ pmi_setpal; int nocrtc; } ;
struct uvesafb_ktask {int dummy; } ;
struct fb_info {int modelist; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_3 () ;
 int FUNC_4 (struct uvesafb_ktask*,struct uvesafb_par*) ;
 int FUNC_5 (struct uvesafb_ktask*,struct uvesafb_par*) ;
 int FUNC_6 (struct uvesafb_ktask*,struct fb_info*) ;
 int FUNC_7 (struct uvesafb_ktask*,struct uvesafb_par*) ;
 int FUNC_8 (struct uvesafb_ktask*,struct uvesafb_par*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_9(struct fb_info *VAR_6)
{
 struct uvesafb_ktask *VAR_7 = ((void*)0);
 struct uvesafb_par *VAR_8 = VAR_6->par;
 int VAR_9;

 VAR_7 = FUNC_3();
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_5(VAR_7, VAR_8);
 if (VAR_9)
  goto out;

 VAR_8->nocrtc = VAR_3;
 VAR_8->pmi_setpal = VAR_8->ypan = 0;


 FUNC_0(&VAR_6->modelist);
 FUNC_6(VAR_7, VAR_6);
 FUNC_8(VAR_7, VAR_8);

out: FUNC_2(VAR_7);
 return VAR_9;
}
