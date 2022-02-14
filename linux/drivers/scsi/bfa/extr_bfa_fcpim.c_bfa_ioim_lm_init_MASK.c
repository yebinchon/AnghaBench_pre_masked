
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_lun_mask_s {int rp_tag; int lp_tag; int ua; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bfa_lun_mask_s* FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (struct bfa_s*) ;

void
FUNC_2(struct bfa_s *VAR_5)
{
 struct bfa_lun_mask_s *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_5) == VAR_2)
  return;

 VAR_6 = FUNC_0(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6[VAR_7].ua = VAR_0;
  VAR_6[VAR_7].lp_tag = VAR_1;
  VAR_6[VAR_7].rp_tag = VAR_3;
 }
}
