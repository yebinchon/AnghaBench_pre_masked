
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {int flags; } ;
struct fc_vport {struct fc_lport* dd_data; } ;
struct fc_lport {scalar_t__ state; scalar_t__ host; int lp_mutex; int list; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 struct qedf_ctx* FUNC_7 (struct fc_lport*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int *) ;
 struct fc_lport* FUNC_13 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_14 (struct fc_vport*) ;

__attribute__((used)) static int FUNC_15(struct fc_vport *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_14(VAR_2);
 struct fc_lport *VAR_4 = FUNC_13(VAR_3);
 struct fc_lport *VAR_5 = VAR_2->dd_data;
 struct qedf_ctx *VAR_6 = FUNC_7(VAR_5);

 if (!VAR_6) {
  FUNC_0(((void*)0), "qedf is NULL.\n");
  goto out;
 }


 FUNC_12(VAR_1, &VAR_6->flags);

 FUNC_8(&VAR_4->lp_mutex);
 FUNC_6(&VAR_5->list);
 FUNC_9(&VAR_4->lp_mutex);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);


 FUNC_5(VAR_5->host);
 FUNC_11(VAR_5->host);





 if (VAR_5->state == VAR_0)
  FUNC_1(VAR_5);


 FUNC_4(VAR_5);


 if (VAR_5->host)
  FUNC_10(VAR_5->host);

out:
 return 0;
}
