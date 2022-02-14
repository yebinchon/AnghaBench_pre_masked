
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int dummy; } ;
struct dlm_lksb {int dummy; } ;
struct dlm_lkb {int dummy; } ;
struct dlm_args {int dummy; } ;
typedef int dlm_lockspace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;
 struct dlm_ls* FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_lkb*) ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*,int,struct dlm_lkb**) ;
 int FUNC_7 (int,void*,struct dlm_args*) ;
 int FUNC_8 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;

int FUNC_9(dlm_lockspace_t *VAR_6,
        uint32_t VAR_7,
        uint32_t VAR_8,
        struct dlm_lksb *VAR_9,
        void *VAR_10)
{
 struct dlm_ls *VAR_11;
 struct dlm_lkb *VAR_12;
 struct dlm_args VAR_13;
 int VAR_14;

 VAR_11 = FUNC_1(VAR_6);
 if (!VAR_11)
  return -VAR_5;

 FUNC_2(VAR_11);

 VAR_14 = FUNC_6(VAR_11, VAR_7, &VAR_12);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_7(VAR_8, VAR_10, &VAR_13);
 if (VAR_14)
  goto out_put;

 if (VAR_8 & VAR_2)
  VAR_14 = FUNC_0(VAR_11, VAR_12, &VAR_13);
 else
  VAR_14 = FUNC_8(VAR_11, VAR_12, &VAR_13);

 if (VAR_14 == -VAR_1 || VAR_14 == -VAR_0)
  VAR_14 = 0;
 if (VAR_14 == -VAR_4 && (VAR_8 & (VAR_2 | VAR_3)))
  VAR_14 = 0;
 out_put:
 FUNC_3(VAR_12);
 out:
 FUNC_5(VAR_11);
 FUNC_4(VAR_11);
 return VAR_14;
}
