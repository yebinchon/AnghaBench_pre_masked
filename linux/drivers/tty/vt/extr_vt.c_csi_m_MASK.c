
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_npar; int* vc_par; int vc_intensity; int vc_italic; int vc_underline; int vc_blink; int vc_reverse; int vc_disp_ctrl; int vc_toggle_meta; int vc_color; int vc_def_color; void* vc_translate; int vc_G1_charset; int vc_G0_charset; int vc_charset; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,struct vc_data*) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct vc_data*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_4->vc_npar; VAR_5++)
  switch (VAR_4->vc_par[VAR_5]) {
  case 0:
   FUNC_0(VAR_4);
   break;
  case 1:
   VAR_4->vc_intensity = 2;
   break;
  case 2:
   VAR_4->vc_intensity = 0;
   break;
  case 3:
   VAR_4->vc_italic = 1;
   break;
  case 21:




  case 4:
   VAR_4->vc_underline = 1;
   break;
  case 5:
   VAR_4->vc_blink = 1;
   break;
  case 7:
   VAR_4->vc_reverse = 1;
   break;
  case 10:



   VAR_4->vc_translate = FUNC_1(VAR_4->vc_charset == 0
     ? VAR_4->vc_G0_charset
     : VAR_4->vc_G1_charset, VAR_4);
   VAR_4->vc_disp_ctrl = 0;
   VAR_4->vc_toggle_meta = 0;
   break;
  case 11:



   VAR_4->vc_translate = FUNC_1(VAR_0, VAR_4);
   VAR_4->vc_disp_ctrl = 1;
   VAR_4->vc_toggle_meta = 0;
   break;
  case 12:



   VAR_4->vc_translate = FUNC_1(VAR_0, VAR_4);
   VAR_4->vc_disp_ctrl = 1;
   VAR_4->vc_toggle_meta = 1;
   break;
  case 22:
   VAR_4->vc_intensity = 1;
   break;
  case 23:
   VAR_4->vc_italic = 0;
   break;
  case 24:
   VAR_4->vc_underline = 0;
   break;
  case 25:
   VAR_4->vc_blink = 0;
   break;
  case 27:
   VAR_4->vc_reverse = 0;
   break;
  case 38:
   VAR_5 = FUNC_3(VAR_4, VAR_5, VAR_3);
   break;
  case 48:
   VAR_5 = FUNC_3(VAR_4, VAR_5, VAR_2);
   break;
  case 39:
   VAR_4->vc_color = (VAR_4->vc_def_color & 0x0f) |
    (VAR_4->vc_color & 0xf0);
   break;
  case 49:
   VAR_4->vc_color = (VAR_4->vc_def_color & 0xf0) |
    (VAR_4->vc_color & 0x0f);
   break;
  default:
   if (VAR_4->vc_par[VAR_5] >= 90 && VAR_4->vc_par[VAR_5] <= 107) {
    if (VAR_4->vc_par[VAR_5] < 100)
     VAR_4->vc_intensity = 2;
    VAR_4->vc_par[VAR_5] -= 60;
   }
   if (VAR_4->vc_par[VAR_5] >= 30 && VAR_4->vc_par[VAR_5] <= 37)
    VAR_4->vc_color = VAR_1[VAR_4->vc_par[VAR_5] - 30]
     | (VAR_4->vc_color & 0xf0);
   else if (VAR_4->vc_par[VAR_5] >= 40 && VAR_4->vc_par[VAR_5] <= 47)
    VAR_4->vc_color = (VAR_1[VAR_4->vc_par[VAR_5] - 40] << 4)
     | (VAR_4->vc_color & 0x0f);
   break;
  }
 FUNC_2(VAR_4);
}
