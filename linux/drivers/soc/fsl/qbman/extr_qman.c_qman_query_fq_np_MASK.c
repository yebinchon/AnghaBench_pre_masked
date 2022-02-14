
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mcr_queryfq_np {int dummy; } ;
union qm_mc_result {int verb; scalar_t__ result; struct qm_mcr_queryfq_np queryfq_np; } ;
union qm_mc_command {int fq; } ;
struct qman_portal {int p; } ;
struct qman_fq {int fqid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qman_portal* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_6 (int *) ;

int FUNC_7(struct qman_fq *VAR_8, struct qm_mcr_queryfq_np *VAR_9)
{
 union qm_mc_command *VAR_10;
 union qm_mc_result *VAR_11;
 struct qman_portal *VAR_12 = FUNC_1();
 int VAR_13 = 0;

 VAR_10 = FUNC_6(&VAR_12->p);
 FUNC_3(&VAR_10->fq, VAR_8->fqid);
 FUNC_4(&VAR_12->p, VAR_3);
 if (!FUNC_5(&VAR_12->p, &VAR_11)) {
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_0((VAR_11->verb & VAR_6) == VAR_7);
 if (VAR_11->result == VAR_5)
  *VAR_9 = VAR_11->queryfq_np;
 else if (VAR_11->result == VAR_4)
  VAR_13 = -VAR_1;
 else
  VAR_13 = -VAR_0;
out:
 FUNC_2();
 return VAR_13;
}
