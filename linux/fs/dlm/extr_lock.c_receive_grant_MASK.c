
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_message {int m_remid; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {struct dlm_rsb* lkb_resource; } ;


 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 scalar_t__ FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_7 (struct dlm_rsb*) ;
 int FUNC_8 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_9 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_10 (struct dlm_rsb*) ;
 int FUNC_11 (struct dlm_lkb*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_12(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_lkb *VAR_2;
 struct dlm_rsb *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->m_remid, &VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = VAR_2->lkb_resource;

 FUNC_3(VAR_3);
 FUNC_5(VAR_3);

 VAR_4 = FUNC_11(VAR_2, VAR_1);
 if (VAR_4)
  goto out;

 FUNC_9(VAR_2, VAR_1);
 if (FUNC_4(VAR_2))
  FUNC_6(VAR_2, VAR_1);
 FUNC_2(VAR_3, VAR_2, VAR_1);
 FUNC_8(VAR_3, VAR_2, 0);
 out:
 FUNC_10(VAR_3);
 FUNC_7(VAR_3);
 FUNC_0(VAR_2);
 return 0;
}
