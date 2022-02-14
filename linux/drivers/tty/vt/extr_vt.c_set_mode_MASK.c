
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_npar; scalar_t__ vc_priv; int* vc_par; int vc_decscnm; int vc_decom; int vc_decawm; int vc_report_mouse; int vc_deccm; int vc_disp_ctrl; int vc_decim; int vc_screenbuf_size; int vc_rows; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vc_data*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vc_data*,int ,int ) ;
 int FUNC_2 (struct vc_data*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vc_data*,int ) ;
 int FUNC_4 (struct vc_data*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 <= VAR_5->vc_npar; VAR_7++)
  if (VAR_5->vc_priv == VAR_0) {
   switch(VAR_5->vc_par[VAR_7]) {
   case 1:
    if (VAR_6)
     FUNC_3(VAR_5, VAR_2);
    else
     FUNC_0(VAR_5, VAR_2);
    break;
   case 3:





    break;
   case 5:
    if (VAR_5->vc_decscnm != VAR_6) {
     VAR_5->vc_decscnm = VAR_6;
     FUNC_2(VAR_5, 0, VAR_5->vc_screenbuf_size, 0);
     FUNC_4(VAR_5);
    }
    break;
   case 6:
    VAR_5->vc_decom = VAR_6;
    FUNC_1(VAR_5, 0, 0);
    break;
   case 7:
    VAR_5->vc_decawm = VAR_6;
    break;
   case 8:
    if (VAR_6)
     FUNC_3(VAR_5, VAR_1);
    else
     FUNC_0(VAR_5, VAR_1);
    break;
   case 9:
    VAR_5->vc_report_mouse = VAR_6 ? 1 : 0;
    break;
   case 25:
    VAR_5->vc_deccm = VAR_6;
    break;
   case 1000:
    VAR_5->vc_report_mouse = VAR_6 ? 2 : 0;
    break;
   }
  } else {
   switch(VAR_5->vc_par[VAR_7]) {
   case 3:
    VAR_5->vc_disp_ctrl = VAR_6;
    break;
   case 4:
    VAR_5->vc_decim = VAR_6;
    break;
   case 20:
    if (VAR_6)
     FUNC_3(VAR_5, VAR_4);
    else
     FUNC_0(VAR_5, VAR_4);
    break;
   }
  }
}
