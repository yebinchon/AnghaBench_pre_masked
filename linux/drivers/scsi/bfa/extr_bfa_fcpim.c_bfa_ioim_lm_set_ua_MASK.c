
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_lun_mask_s {scalar_t__ state; int ua; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct bfa_lun_mask_s* FUNC_0 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_s *VAR_3)
{
 struct bfa_lun_mask_s *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4[VAR_5].state != VAR_1)
   continue;
  VAR_4[VAR_5].ua = VAR_0;
 }
}
