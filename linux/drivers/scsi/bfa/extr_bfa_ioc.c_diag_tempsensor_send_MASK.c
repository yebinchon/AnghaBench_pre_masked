
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfi_diag_ts_req_s {int mh; int temp; } ;
struct TYPE_4__ {scalar_t__ msg; } ;
struct TYPE_3__ {TYPE_2__ mbcmd; } ;
struct bfa_diag_s {TYPE_1__ tsensor; int ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_diag_s*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_diag_s *VAR_2)
{
 struct bfi_diag_ts_req_s *VAR_3;

 VAR_3 = (struct bfi_diag_ts_req_s *)VAR_2->tsensor.mbcmd.msg;
 FUNC_2(VAR_2, VAR_3->temp);

 FUNC_3(VAR_3->mh, VAR_1, VAR_0,
  FUNC_1(VAR_2->ioc));

 FUNC_0(VAR_2->ioc, &VAR_2->tsensor.mbcmd);
}
