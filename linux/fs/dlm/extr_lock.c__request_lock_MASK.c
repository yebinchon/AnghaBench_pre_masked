
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 scalar_t__ FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_4 (struct dlm_rsb*,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_5(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1)
{
 int VAR_2;



 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 < 0)
  goto out;
 if (VAR_2) {
  VAR_2 = 0;
  goto out;
 }

 if (FUNC_2(VAR_0)) {

  VAR_2 = FUNC_3(VAR_0, VAR_1);
 } else {
  VAR_2 = FUNC_0(VAR_0, VAR_1);


  FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 out:
 return VAR_2;
}
