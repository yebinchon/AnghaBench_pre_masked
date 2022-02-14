
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_ctrl_req {int tv_sec; void* rsvd; void* clscode; int mh; } ;
struct bfa_ioc {int clscode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc*,struct bfi_ioc_ctrl_req*,int) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc *VAR_2)
{
 struct bfi_ioc_ctrl_req VAR_3;

 FUNC_2(VAR_3.mh, VAR_1, VAR_0,
      FUNC_1(VAR_2));
 VAR_3.clscode = FUNC_3(VAR_2->clscode);
 VAR_3.rsvd = FUNC_3(0);

 VAR_3.tv_sec = FUNC_5(FUNC_4());
 FUNC_0(VAR_2, &VAR_3, sizeof(struct bfi_ioc_ctrl_req));
}
