
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int dummy; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_id; TYPE_1__* lkb_lksb; } ;
struct dlm_args {int dummy; } ;
struct TYPE_2__ {int sb_lkid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_ls*,char*,int,int ,int ,struct dlm_rsb**) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct dlm_rsb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;

__attribute__((used)) static int FUNC_7(struct dlm_ls *VAR_1, struct dlm_lkb *VAR_2, char *VAR_3,
   int VAR_4, struct dlm_args *VAR_5)
{
 struct dlm_rsb *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4, 0, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_6);

 FUNC_1(VAR_6, VAR_2);
 VAR_2->lkb_lksb->sb_lkid = VAR_2->lkb_id;

 VAR_7 = FUNC_0(VAR_6, VAR_2);

 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 return VAR_7;
}
