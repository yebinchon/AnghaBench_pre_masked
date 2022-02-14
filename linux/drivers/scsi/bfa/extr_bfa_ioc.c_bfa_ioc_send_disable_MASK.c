
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_ctrl_req_s {int tv_sec; int clscode; int mh; } ;
struct bfa_ioc_s {int clscode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_ioc_s*,struct bfi_ioc_ctrl_req_s*,int) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc_s *VAR_2)
{
 struct bfi_ioc_ctrl_req_s VAR_3;

 FUNC_3(VAR_3.mh, VAR_1, VAR_0,
      FUNC_2(VAR_2));
 VAR_3.clscode = FUNC_4(VAR_2->clscode);

 VAR_3.tv_sec = FUNC_0(FUNC_5());
 FUNC_1(VAR_2, &VAR_3, sizeof(struct bfi_ioc_ctrl_req_s));
}
