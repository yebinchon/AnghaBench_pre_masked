
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int lkb_status; void* lkb_grmode; void* lkb_rqmode; } ;





 void* VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*,int const) ;
 int FUNC_3 (struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_4(struct dlm_rsb *VAR_1, struct dlm_lkb *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->lkb_rqmode = VAR_0;

 switch (VAR_2->lkb_status) {
 case 129:
  break;
 case 130:
  FUNC_2(VAR_1, VAR_2, 129);
  VAR_3 = 1;
  break;
 case 128:
  FUNC_0(VAR_1, VAR_2);
  VAR_2->lkb_grmode = VAR_0;


  FUNC_3(VAR_2);
  VAR_3 = -1;
  break;
 default:
  FUNC_1("invalid status for revert %d", VAR_2->lkb_status);
 }
 return VAR_3;
}
