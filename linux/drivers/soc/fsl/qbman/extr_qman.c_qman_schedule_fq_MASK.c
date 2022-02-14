
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union qm_mc_result {int verb; scalar_t__ result; } ;
union qm_mc_command {int fq; } ;
struct qman_portal {TYPE_1__* config; int p; } ;
struct qman_fq {scalar_t__ state; int fqid; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct qman_fq*,int ) ;
 struct qman_portal* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_8 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_9(struct qman_fq *VAR_12)
{
 union qm_mc_command *VAR_13;
 union qm_mc_result *VAR_14;
 struct qman_portal *VAR_15;
 int VAR_16 = 0;

 if (VAR_12->state != VAR_10)
  return -VAR_1;





 VAR_15 = FUNC_3();
 if (FUNC_2(VAR_12, VAR_5) ||
     VAR_12->state != VAR_10) {
  VAR_16 = -VAR_0;
  goto out;
 }
 VAR_13 = FUNC_8(&VAR_15->p);
 FUNC_5(&VAR_13->fq, VAR_12->fqid);
 FUNC_6(&VAR_15->p, VAR_6);
 if (!FUNC_7(&VAR_15->p, &VAR_14)) {
  FUNC_1(VAR_15->config->dev, "ALTER_SCHED timeout\n");
  VAR_16 = -VAR_3;
  goto out;
 }

 FUNC_0((VAR_14->verb & VAR_9) == VAR_8);
 if (VAR_14->result != VAR_7) {
  VAR_16 = -VAR_2;
  goto out;
 }
 VAR_12->state = VAR_11;
out:
 FUNC_4();
 return VAR_16;
}
