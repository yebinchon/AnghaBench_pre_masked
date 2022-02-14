
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int enc_cur_valid; int enc_ctl_state; int enc_cur_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct pvr2_hdw *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_2,VAR_1,
        (VAR_2->enc_cur_valid ? &VAR_2->enc_cur_state : ((void*)0)),
        &VAR_2->enc_ctl_state);
 if (VAR_3) {
  FUNC_1(VAR_0,
      "Error from cx2341x module code=%d",VAR_3);
 } else {
  VAR_2->enc_cur_state = VAR_2->enc_ctl_state;
  VAR_2->enc_cur_valid = !0;
 }
 return VAR_3;
}
