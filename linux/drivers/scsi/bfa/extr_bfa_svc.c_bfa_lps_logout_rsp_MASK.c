
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_lps_logout_rsp_s {scalar_t__ bfa_tag; } ;
struct bfa_s {int dummy; } ;
struct bfa_lps_s {int dummy; } ;
struct bfa_lps_mod_s {scalar_t__ num_lps; } ;


 struct bfa_lps_s* FUNC_0 (struct bfa_lps_mod_s*,scalar_t__) ;
 struct bfa_lps_mod_s* FUNC_1 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfa_lps_s*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_s *VAR_1, struct bfi_lps_logout_rsp_s *VAR_2)
{
 struct bfa_lps_mod_s *VAR_3 = FUNC_1(VAR_1);
 struct bfa_lps_s *VAR_4;

 FUNC_2(VAR_2->bfa_tag >= VAR_3->num_lps);
 VAR_4 = FUNC_0(VAR_3, VAR_2->bfa_tag);

 FUNC_3(VAR_4, VAR_0);
}
