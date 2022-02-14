
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int ls_lkbidr_spin; int ls_lkbidr; } ;
struct dlm_lkb {scalar_t__ lkb_lvbptr; int lkb_ref; int lkb_id; } ;


 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dlm_ls *VAR_1, struct dlm_lkb *VAR_2)
{
 uint32_t VAR_3 = VAR_2->lkb_id;

 FUNC_6(&VAR_1->ls_lkbidr_spin);
 if (FUNC_5(&VAR_2->lkb_ref, VAR_0)) {
  FUNC_3(&VAR_1->ls_lkbidr, VAR_3);
  FUNC_7(&VAR_1->ls_lkbidr_spin);

  FUNC_0(VAR_2);


  if (VAR_2->lkb_lvbptr && FUNC_4(VAR_2))
   FUNC_2(VAR_2->lkb_lvbptr);
  FUNC_1(VAR_2);
  return 1;
 } else {
  FUNC_7(&VAR_1->ls_lkbidr_spin);
  return 0;
 }
}
