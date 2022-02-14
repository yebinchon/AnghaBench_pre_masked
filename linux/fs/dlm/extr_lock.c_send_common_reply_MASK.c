
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {int m_result; } ;
struct dlm_lkb {int lkb_nodeid; } ;


 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int,int,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_2 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_3(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1,
        int VAR_2, int VAR_3)
{
 struct dlm_message *VAR_4;
 struct dlm_mhandle *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_1->lkb_nodeid;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_2, &VAR_4, &VAR_5);
 if (VAR_7)
  goto out;

 FUNC_1(VAR_0, VAR_1, VAR_4);

 VAR_4->m_result = VAR_3;

 VAR_7 = FUNC_2(VAR_5, VAR_4);
 out:
 return VAR_7;
}
