
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct bfi_diag_ledtest_req_s {int freq; int led; int portid; void* color; void* cmd; int mh; } ;
struct TYPE_4__ {scalar_t__ msg; } ;
struct TYPE_3__ {TYPE_2__ mbcmd; } ;
struct bfa_diag_s {TYPE_1__ ledtest; int ioc; } ;
struct bfa_diag_ledtest_s {int freq; int led; scalar_t__ color; scalar_t__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_diag_s*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_diag_s *VAR_2, struct bfa_diag_ledtest_s *VAR_3)
{
 struct bfi_diag_ledtest_req_s *VAR_4;

 VAR_4 = (struct bfi_diag_ledtest_req_s *)VAR_2->ledtest.mbcmd.msg;

 FUNC_3(VAR_4->mh, VAR_1, VAR_0,
   FUNC_1(VAR_2->ioc));





 if (VAR_3->freq)
  VAR_3->freq = 500 / VAR_3->freq;

 if (VAR_3->freq == 0)
  VAR_3->freq = 1;

 FUNC_2(VAR_2, VAR_3->freq);

 VAR_4->cmd = (u8) VAR_3->cmd;
 VAR_4->color = (u8) VAR_3->color;
 VAR_4->portid = FUNC_1(VAR_2->ioc);
 VAR_4->led = VAR_3->led;
 VAR_4->freq = FUNC_4(VAR_3->freq);


 FUNC_0(VAR_2->ioc, &VAR_2->ledtest.mbcmd);
}
