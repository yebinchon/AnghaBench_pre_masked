
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_rsb {int dummy; } ;
struct dlm_ls {int ls_rsbtbl_size; TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; int toss; int keep; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dlm_ls *VAR_0, char *VAR_1, int VAR_2)
{
 struct dlm_rsb *VAR_3 = ((void*)0);
 uint32_t VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2, 0);
 VAR_5 = VAR_4 & (VAR_0->ls_rsbtbl_size - 1);

 FUNC_3(&VAR_0->ls_rsbtbl[VAR_5].lock);
 VAR_6 = FUNC_1(&VAR_0->ls_rsbtbl[VAR_5].keep, VAR_1, VAR_2, &VAR_3);
 if (!VAR_6)
  goto out_dump;

 VAR_6 = FUNC_1(&VAR_0->ls_rsbtbl[VAR_5].toss, VAR_1, VAR_2, &VAR_3);
 if (VAR_6)
  goto out;
 out_dump:
 FUNC_0(VAR_3);
 out:
 FUNC_4(&VAR_0->ls_rsbtbl[VAR_5].lock);
}
