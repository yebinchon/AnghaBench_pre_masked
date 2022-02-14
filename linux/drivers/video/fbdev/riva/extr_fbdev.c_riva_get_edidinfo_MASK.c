
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct riva_par {int FlatPanel; int EDID; } ;
struct fb_var_screeninfo {int dummy; } ;
struct TYPE_2__ {int input; int modedb_len; int modedb; } ;
struct fb_info {TYPE_1__ monspecs; int modelist; struct riva_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*) ;
 struct fb_var_screeninfo VAR_1 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_2)
{
 struct fb_var_screeninfo *VAR_3 = &VAR_1;
 struct riva_par *VAR_4 = VAR_2->par;

 FUNC_0(VAR_4->EDID, &VAR_2->monspecs);
 FUNC_1(VAR_2->monspecs.modedb, VAR_2->monspecs.modedb_len,
     &VAR_2->modelist);
 FUNC_2(VAR_3, VAR_2);


 if (VAR_2->monspecs.input & VAR_0)
  VAR_4->FlatPanel = 1;
}
