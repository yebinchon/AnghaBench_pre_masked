
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_fqd {int dummy; } ;
struct TYPE_2__ {struct qm_fqd fqd; } ;
union qm_mc_result {int verb; scalar_t__ result; TYPE_1__ queryfq; } ;
union qm_mc_command {int fq; } ;
struct qman_portal {int p; } ;
struct qman_fq {int fqid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qman_portal* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_6 (int *) ;

int FUNC_7(struct qman_fq *VAR_6, struct qm_fqd *VAR_7)
{
 union qm_mc_command *VAR_8;
 union qm_mc_result *VAR_9;
 struct qman_portal *VAR_10 = FUNC_1();
 int VAR_11 = 0;

 VAR_8 = FUNC_6(&VAR_10->p);
 FUNC_3(&VAR_8->fq, VAR_6->fqid);
 FUNC_4(&VAR_10->p, VAR_2);
 if (!FUNC_5(&VAR_10->p, &VAR_9)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_0((VAR_9->verb & VAR_4) == VAR_5);
 if (VAR_9->result == VAR_3)
  *VAR_7 = VAR_9->queryfq.fqd;
 else
  VAR_11 = -VAR_0;
out:
 FUNC_2();
 return VAR_11;
}
