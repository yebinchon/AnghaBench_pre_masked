
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int ls_lkbidr_spin; int ls_lkbidr; } ;
struct dlm_lkb {int lkb_ref; } ;


 int VAR_0 ;
 struct dlm_lkb* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_1, uint32_t VAR_2, struct dlm_lkb **VAR_3)
{
 struct dlm_lkb *VAR_4;

 FUNC_2(&VAR_1->ls_lkbidr_spin);
 VAR_4 = FUNC_0(&VAR_1->ls_lkbidr, VAR_2);
 if (VAR_4)
  FUNC_1(&VAR_4->lkb_ref);
 FUNC_3(&VAR_1->ls_lkbidr_spin);

 *VAR_3 = VAR_4;
 return VAR_4 ? 0 : -VAR_0;
}
