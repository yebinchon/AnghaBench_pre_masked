
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rcom {int rc_id; int rc_buf; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_recover_nodeid; int ls_recover_buf; } ;
struct TYPE_2__ {int ci_buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int *) ;
 int FUNC_1 (struct dlm_ls*,int,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_2 (struct dlm_ls*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct dlm_ls*,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

int FUNC_7(struct dlm_ls *VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 struct dlm_rcom *VAR_8;
 struct dlm_mhandle *VAR_9;
 int VAR_10 = 0;

 VAR_4->ls_recover_nodeid = VAR_5;

retry:
 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_0, VAR_7, &VAR_8, &VAR_9);
 if (VAR_10)
  goto out;
 FUNC_4(VAR_8->rc_buf, VAR_6, VAR_7);

 FUNC_0(VAR_4, &VAR_8->rc_id);
 FUNC_5(VAR_4->ls_recover_buf, 0, VAR_2.ci_buffer_size);

 FUNC_6(VAR_4, VAR_9, VAR_8);

 VAR_10 = FUNC_3(VAR_4, &VAR_3);
 FUNC_2(VAR_4);
 if (VAR_10 == -VAR_1)
  goto retry;
 out:
 return VAR_10;
}
