
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fb_info {struct arkfb_info* par; } ;
struct TYPE_2__ {int vgabase; } ;
struct arkfb_info {TYPE_1__ state; int dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct fb_info*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_3, u32 VAR_4)
{
 struct arkfb_info *VAR_5 = VAR_3->par;
 u8 VAR_6;

 int VAR_7 = FUNC_0(VAR_5->dac, 0, 1000000000 / VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "cannot set requested pixclock, keeping old value\n");
  return;
 }


 VAR_6 = FUNC_2(VAR_5->state.vgabase, VAR_1);
 FUNC_3(VAR_5->state.vgabase, VAR_2, VAR_6 | VAR_0);
}
