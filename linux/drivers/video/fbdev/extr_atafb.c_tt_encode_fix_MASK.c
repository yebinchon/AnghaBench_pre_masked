
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_fix_screeninfo {int type_aux; int ypanstep; int accel; int line_length; scalar_t__ ywrapstep; scalar_t__ xpanstep; int visual; int type; int smem_len; int smem_start; int id; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ tt; } ;
struct atafb_par {int next_line; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct fb_fix_screeninfo *VAR_10, struct atafb_par *VAR_11)
{
 int VAR_12;

 FUNC_0(VAR_10->id, "Atari Builtin");
 VAR_10->smem_start = VAR_8;
 VAR_10->smem_len = VAR_9;
 VAR_10->type = VAR_1;
 VAR_10->type_aux = 2;
 VAR_10->visual = VAR_4;
 VAR_12 = VAR_11->hw.tt.mode & VAR_5;
 if (VAR_12 == VAR_7 || VAR_12 == VAR_6) {
  VAR_10->type = VAR_2;
  VAR_10->type_aux = 0;
  if (VAR_12 == VAR_7)
   VAR_10->visual = VAR_3;
 }
 VAR_10->xpanstep = 0;
 VAR_10->ypanstep = 1;
 VAR_10->ywrapstep = 0;
 VAR_10->line_length = VAR_11->next_line;
 VAR_10->accel = VAR_0;
 return 0;
}
