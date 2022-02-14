
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_fix_screeninfo {int type_aux; int xpanstep; int ypanstep; int accel; int line_length; scalar_t__ ywrapstep; int visual; int type; int smem_len; int smem_start; int id; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ st; } ;
struct atafb_par {int next_line; TYPE_2__ hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct fb_fix_screeninfo *VAR_9,
       struct atafb_par *VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_9->id, "Atari Builtin");
 VAR_9->smem_start = VAR_7;
 VAR_9->smem_len = VAR_8;
 VAR_9->type = VAR_2;
 VAR_9->type_aux = 2;
 VAR_9->visual = VAR_5;
 VAR_11 = VAR_10->hw.st.mode & 3;
 if (VAR_11 == VAR_6) {
  VAR_9->type = VAR_3;
  VAR_9->type_aux = 0;
  VAR_9->visual = VAR_4;
 }
 if (FUNC_0(VAR_0)) {
  VAR_9->xpanstep = 16;
  VAR_9->ypanstep = 1;
 } else {
  VAR_9->xpanstep = 0;
  VAR_9->ypanstep = 0;
 }
 VAR_9->ywrapstep = 0;
 VAR_9->line_length = VAR_10->next_line;
 VAR_9->accel = VAR_1;
 return 0;
}
