
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bfi_tskim_rsp_s {scalar_t__ tsk_status; int tsk_tag; } ;
struct bfi_msg_s {int dummy; } ;
struct bfa_tskim_s {scalar_t__ tsk_tag; scalar_t__ tsk_status; int itnim; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcpim_s {int dummy; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_tskim_s* FUNC_1 (struct bfa_fcpim_s*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_tskim_s*,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_6(struct bfa_s *VAR_7, struct bfi_msg_s *VAR_8)
{
 struct bfa_fcpim_s *VAR_9 = FUNC_0(VAR_7);
 struct bfi_tskim_rsp_s *VAR_10 = (struct bfi_tskim_rsp_s *) VAR_8;
 struct bfa_tskim_s *VAR_11;
 u16 VAR_12 = FUNC_3(VAR_10->tsk_tag);

 VAR_11 = FUNC_1(VAR_9, VAR_12);
 FUNC_2(VAR_11->tsk_tag != VAR_12);

 VAR_11->tsk_status = VAR_10->tsk_status;





 if (VAR_10->tsk_status == VAR_3) {
  FUNC_5(VAR_11->itnim, VAR_5);
  FUNC_4(VAR_11, VAR_0);
 } else if (VAR_10->tsk_status == VAR_4) {
  FUNC_4(VAR_11, VAR_2);
 } else {
  FUNC_5(VAR_11->itnim, VAR_6);
  FUNC_4(VAR_11, VAR_1);
 }
}
