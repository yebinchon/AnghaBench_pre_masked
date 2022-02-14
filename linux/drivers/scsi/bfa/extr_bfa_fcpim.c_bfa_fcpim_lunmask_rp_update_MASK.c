
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wwn_t ;
typedef size_t u8 ;
typedef int u16 ;
struct bfa_s {int dummy; } ;
struct bfa_lun_mask_s {scalar_t__ state; scalar_t__ lp_wwn; scalar_t__ rp_wwn; size_t lp_tag; int rp_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct bfa_lun_mask_s* FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (struct bfa_s*) ;

void
FUNC_2(struct bfa_s *VAR_3, wwn_t VAR_4, wwn_t VAR_5,
   u16 VAR_6, u8 VAR_7)
{
 struct bfa_lun_mask_s *VAR_8;
 u8 VAR_9;

 if (FUNC_1(VAR_3) == VAR_1)
  return;

 VAR_8 = FUNC_0(VAR_3);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_8[VAR_9].state == VAR_0) {
   if ((VAR_8[VAR_9].lp_wwn == VAR_4) &&
       (VAR_8[VAR_9].rp_wwn == VAR_5)) {
    VAR_8[VAR_9].rp_tag = VAR_6;
    VAR_8[VAR_9].lp_tag = VAR_7;
   }
  }
 }
}
