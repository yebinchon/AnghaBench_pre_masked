
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_els_ls_rjt {int er_reason; int er_explan; int er_cmd; } ;
typedef enum fc_els_rjt_reason { ____Placeholder_fc_els_rjt_reason } fc_els_rjt_reason ;
typedef enum fc_els_rjt_explan { ____Placeholder_fc_els_rjt_explan } fc_els_rjt_explan ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_2 (struct fc_lport*,int) ;
 struct fc_els_ls_rjt* FUNC_3 (struct fc_frame*,int) ;
 int FUNC_4 (struct fc_seq*) ;
 struct fc_lport* FUNC_5 (struct fc_frame*) ;
 struct fc_seq* FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (struct fc_els_ls_rjt*,int ,int) ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_9(struct fc_frame *VAR_2, enum fc_els_rjt_reason VAR_3,
     enum fc_els_rjt_explan VAR_4)
{
 struct fc_lport *VAR_5;
 struct fc_els_ls_rjt *VAR_6;
 struct fc_frame *VAR_7;
 struct fc_seq *VAR_8;

 VAR_5 = FUNC_5(VAR_2);
 VAR_8 = FUNC_6(VAR_2);
 VAR_7 = FUNC_2(VAR_5, sizeof(*VAR_6));
 if (!VAR_7) {
  FUNC_0(FUNC_4(VAR_8),
       "exch: drop LS_ACC, out of memory\n");
  return;
 }
 VAR_6 = FUNC_3(VAR_7, sizeof(*VAR_6));
 FUNC_7(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->er_cmd = VAR_0;
 VAR_6->er_reason = VAR_3;
 VAR_6->er_explan = VAR_4;
 FUNC_1(VAR_7, VAR_2, VAR_1, 0);
 VAR_5->tt.frame_send(VAR_5, VAR_7);
}
