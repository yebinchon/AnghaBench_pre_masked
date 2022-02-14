
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int* vc_par; int vc_def_color; int vc_attr; int vc_hi_font_mask; int vc_npar; int vc_bell_pitch; int vc_cur_blink_ms; int vc_bell_duration; int vc_intensity; void* vc_halfcolor; int vc_can_do_color; int vc_underline; void* vc_ulcolor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 int FUNC_0 (struct vc_data*) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vc_data*) ;
 int FUNC_5 (int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_9)
{
 switch(VAR_9->vc_par[0]) {
  case 1:
   if (VAR_9->vc_can_do_color &&
     VAR_9->vc_par[1] < 16) {
    VAR_9->vc_ulcolor = VAR_6[VAR_9->vc_par[1]];
    if (VAR_9->vc_underline)
     FUNC_4(VAR_9);
   }
   break;
  case 2:
   if (VAR_9->vc_can_do_color &&
     VAR_9->vc_par[1] < 16) {
    VAR_9->vc_halfcolor = VAR_6[VAR_9->vc_par[1]];
    if (VAR_9->vc_intensity == 0)
     FUNC_4(VAR_9);
   }
   break;
  case 8:
   VAR_9->vc_def_color = VAR_9->vc_attr;
   if (VAR_9->vc_hi_font_mask == 0x100)
    VAR_9->vc_def_color >>= 1;
   FUNC_0(VAR_9);
   FUNC_4(VAR_9);
   break;
  case 9:
   VAR_5 = ((VAR_9->vc_par[1] < 60) ? VAR_9->vc_par[1] : 60) * 60;
   FUNC_2();
   break;
  case 10:
   if (VAR_9->vc_npar >= 1)
    VAR_9->vc_bell_pitch = VAR_9->vc_par[1];
   else
    VAR_9->vc_bell_pitch = VAR_1;
   break;
  case 11:
   if (VAR_9->vc_npar >= 1)
    VAR_9->vc_bell_duration = (VAR_9->vc_par[1] < 2000) ?
     FUNC_1(VAR_9->vc_par[1]) : 0;
   else
    VAR_9->vc_bell_duration = VAR_0;
   break;
  case 12:
   if (VAR_9->vc_par[1] >= 1 && FUNC_5(VAR_9->vc_par[1] - 1))
    FUNC_3(VAR_9->vc_par[1] - 1);
   break;
  case 13:
   FUNC_2();
   break;
  case 14:
   VAR_8 = ((VAR_9->vc_par[1] < 60) ? VAR_9->vc_par[1] : 60) * 60 * VAR_3;
   break;
  case 15:
   FUNC_3(VAR_7);
   break;
  case 16:
   if (VAR_9->vc_npar >= 1 && VAR_9->vc_par[1] >= 50 &&
     VAR_9->vc_par[1] <= VAR_4)
    VAR_9->vc_cur_blink_ms = VAR_9->vc_par[1];
   else
    VAR_9->vc_cur_blink_ms = VAR_2;
   break;
 }
}
