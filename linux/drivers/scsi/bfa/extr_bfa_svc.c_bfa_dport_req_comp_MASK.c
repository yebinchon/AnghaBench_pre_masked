
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfi_diag_dport_rsp_s {scalar_t__ status; scalar_t__ pwwn; scalar_t__ nwwn; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
struct bfa_dport_s {scalar_t__ rp_pwwn; scalar_t__ rp_nwwn; int bfa; TYPE_2__ i2hmsg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bfa_dport_s*,scalar_t__) ;
 int FUNC_1 (struct bfa_dport_s*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_dport_s *VAR_4, struct bfi_diag_dport_rsp_s *VAR_5)
{
 VAR_5->status = FUNC_3(VAR_5->status);
 VAR_4->i2hmsg.rsp.status = VAR_5->status;
 VAR_4->rp_pwwn = VAR_5->pwwn;
 VAR_4->rp_nwwn = VAR_5->nwwn;

 if ((VAR_5->status == VAR_3) ||
     (VAR_5->status == VAR_2)) {
  FUNC_2(VAR_4->bfa, VAR_5->status);
  FUNC_2(VAR_4->bfa, VAR_4->rp_pwwn);
  FUNC_2(VAR_4->bfa, VAR_4->rp_nwwn);
  FUNC_1(VAR_4, VAR_0);

 } else {
  FUNC_2(VAR_4->bfa, VAR_5->status);
  FUNC_1(VAR_4, VAR_1);
 }
 FUNC_0(VAR_4, VAR_5->status);
}
