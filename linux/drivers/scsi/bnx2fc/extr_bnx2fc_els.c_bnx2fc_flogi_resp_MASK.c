
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fcoe_ctlr {int (* update_mac ) (struct fc_lport*,int *) ;TYPE_1__* sel_fcf; } ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame_header {int * fh_d_id; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {struct fc_lport* lp; } ;
struct TYPE_4__ {int * granted_mac; } ;
struct TYPE_3__ {scalar_t__ fc_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_lport*,char*,int *,int) ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 struct fc_frame_header* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_seq*,struct fc_frame*,struct fc_lport*) ;
 struct fc_exch* FUNC_6 (struct fc_seq*) ;
 TYPE_2__* FUNC_7 (struct fc_frame*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fc_lport*,int *) ;

__attribute__((used)) static void FUNC_11(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
         void *VAR_5)
{
 struct fcoe_ctlr *VAR_6 = VAR_5;
 struct fc_exch *VAR_7 = FUNC_6(VAR_3);
 struct fc_lport *VAR_8 = VAR_7->lp;

 struct fc_frame_header *VAR_9;
 u8 *VAR_10;
 u8 VAR_11[6];
 u8 VAR_12[3];
 int VAR_13;

 if (FUNC_1(VAR_4))
  goto done;

 VAR_9 = FUNC_4(VAR_4);
 VAR_10 = FUNC_7(VAR_4)->granted_mac;
 if (!FUNC_9(VAR_10)) {
  FUNC_2(VAR_11, VAR_10);
  VAR_13 = VAR_2;
 } else if (VAR_6->sel_fcf && VAR_6->sel_fcf->fc_map != 0) {
  FUNC_8(VAR_12, VAR_6->sel_fcf->fc_map);
  VAR_11[0] = VAR_12[0];
  VAR_11[1] = VAR_12[1];
  VAR_11[2] = VAR_12[2];
  VAR_11[3] = VAR_9->fh_d_id[0];
  VAR_11[4] = VAR_9->fh_d_id[1];
  VAR_11[5] = VAR_9->fh_d_id[2];
  VAR_13 = VAR_0;
 } else {
  FUNC_3(VAR_11, VAR_9->fh_d_id);
  VAR_13 = VAR_1;
 }

 FUNC_0(VAR_8, "fcoe_mac=%pM method=%d\n", VAR_11, VAR_13);
 VAR_6->update_mac(VAR_8, VAR_11);
done:
 FUNC_5(VAR_3, VAR_4, VAR_8);
}
