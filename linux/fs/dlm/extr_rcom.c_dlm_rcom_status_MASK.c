
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rcom_status {int dummy; } ;
struct dlm_rcom {int rc_result; int rc_id; scalar_t__ rc_buf; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_recover_nodeid; struct dlm_rcom* ls_recover_buf; } ;
struct TYPE_2__ {int ci_buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ls*,int *) ;
 int FUNC_1 (struct dlm_ls*,struct dlm_rcom*,int) ;
 int FUNC_2 (struct dlm_ls*,int,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_3 (struct dlm_ls*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*,int *) ;
 int FUNC_7 (struct dlm_ls*,char*,int) ;
 int FUNC_8 (struct dlm_rcom*,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;
 int FUNC_10 (struct dlm_ls*,struct rcom_status*,int ) ;

int FUNC_11(struct dlm_ls *VAR_5, int VAR_6, uint32_t VAR_7)
{
 struct dlm_rcom *VAR_8;
 struct dlm_mhandle *VAR_9;
 int VAR_10 = 0;

 VAR_5->ls_recover_nodeid = VAR_6;

 if (VAR_6 == FUNC_4()) {
  VAR_8 = VAR_5->ls_recover_buf;
  VAR_8->rc_result = FUNC_5(VAR_5);
  goto out;
 }

retry:
 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_0,
       sizeof(struct rcom_status), &VAR_8, &VAR_9);
 if (VAR_10)
  goto out;

 FUNC_10(VAR_5, (struct rcom_status *)VAR_8->rc_buf, VAR_7);

 FUNC_0(VAR_5, &VAR_8->rc_id);
 FUNC_8(VAR_5->ls_recover_buf, 0, VAR_3.ci_buffer_size);

 FUNC_9(VAR_5, VAR_9, VAR_8);

 VAR_10 = FUNC_6(VAR_5, &VAR_4);
 FUNC_3(VAR_5);
 if (VAR_10 == -VAR_2)
  goto retry;
 if (VAR_10)
  goto out;

 VAR_8 = VAR_5->ls_recover_buf;

 if (VAR_8->rc_result == -VAR_1) {

  FUNC_7(VAR_5, "remote node %d not ready", VAR_6);
  VAR_8->rc_result = 0;
  VAR_10 = 0;
 } else {
  VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_6);
 }


 out:
 return VAR_10;
}
