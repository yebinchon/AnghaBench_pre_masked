
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_fix_screeninfo {int type; int visual; int type_aux; int line_length; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; int smem_len; int smem_start; int id; } ;
struct atafb_par {int next_line; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct fb_fix_screeninfo *VAR_10, struct atafb_par *VAR_11)
{
 FUNC_1(VAR_10->id, "Unknown Extern");
 VAR_10->smem_start = VAR_5;
 VAR_10->smem_len = FUNC_0(VAR_7);
 if (VAR_6 == 1) {
  VAR_10->type = 129;


  VAR_10->visual =
   (VAR_8 == 130 ||
    VAR_8 == 129) ?
    VAR_1 : VAR_0;
 } else {

  int VAR_12 = VAR_9 ?
      VAR_2 :
      VAR_3;
  switch (VAR_8) {
  case -1:
   VAR_10->type = 129;
   VAR_10->visual = VAR_4;
   break;
  case 129:
   VAR_10->type = 129;
   VAR_10->visual = VAR_12;
   break;
  case 128:
   VAR_10->type = 128;
   VAR_10->visual = VAR_12;
   break;
  case 130:
   VAR_10->type = 130;
   VAR_10->type_aux = 2;
   VAR_10->visual = VAR_12;
   break;
  }
 }
 VAR_10->xpanstep = 0;
 VAR_10->ypanstep = 0;
 VAR_10->ywrapstep = 0;
 VAR_10->line_length = VAR_11->next_line;
 return 0;
}
