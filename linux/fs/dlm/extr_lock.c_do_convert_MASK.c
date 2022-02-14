
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int lkb_exflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int,int ) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_2 (struct dlm_lkb*) ;
 scalar_t__ FUNC_3 (struct dlm_rsb*,struct dlm_lkb*,int,int ,int*) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_6 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_7 (struct dlm_rsb*,int ,int *,int *) ;
 scalar_t__ FUNC_8 (struct dlm_lkb*) ;
 int FUNC_9 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_10 (struct dlm_rsb*,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_11(struct dlm_rsb *VAR_6, struct dlm_lkb *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;



 if (FUNC_3(VAR_6, VAR_7, 1, 0, &VAR_9)) {
  FUNC_6(VAR_6, VAR_7);
  FUNC_9(VAR_6, VAR_7, 0);
  goto out;
 }





 if (VAR_9 && !(VAR_7->lkb_exflags & VAR_0)) {

  FUNC_10(VAR_6, VAR_7);
  FUNC_9(VAR_6, VAR_7, -VAR_4);
  VAR_8 = -VAR_4;
  goto out;
 }







 if (FUNC_8(VAR_7)) {
  FUNC_7(VAR_6, VAR_2, ((void*)0), ((void*)0));
  if (FUNC_0(VAR_6, VAR_7, 1, 0)) {
   FUNC_6(VAR_6, VAR_7);
   FUNC_9(VAR_6, VAR_7, 0);
   goto out;
  }

 }

 if (FUNC_4(VAR_7)) {
  VAR_8 = -VAR_5;
  FUNC_5(VAR_6, VAR_7);
  FUNC_1(VAR_6, VAR_7, VAR_1);
  FUNC_2(VAR_7);
  goto out;
 }

 VAR_8 = -VAR_3;
 FUNC_9(VAR_6, VAR_7, -VAR_3);
 out:
 return VAR_8;
}
