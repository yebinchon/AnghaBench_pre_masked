
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fqs; int context_b; } ;
union qm_mr_entry {TYPE_4__ fq; int verb; } ;
struct TYPE_6__ {int fqs; } ;
union qm_mc_result {int verb; scalar_t__ result; TYPE_2__ alterfq; } ;
union qm_mc_command {TYPE_4__ fq; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct qman_portal {TYPE_1__* config; int p; } ;
struct TYPE_7__ {int (* fqs ) (struct qman_portal*,struct qman_fq*,union qm_mr_entry*) ;} ;
struct qman_fq {scalar_t__ state; TYPE_3__ cb; int fqid; int flags; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct qman_fq*,int ) ;
 int FUNC_4 (struct qman_fq*,int ) ;
 int FUNC_5 (struct qman_fq*) ;
 struct qman_portal* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_11 (int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_12 (struct qman_portal*,struct qman_fq*,union qm_mr_entry*) ;

int FUNC_13(struct qman_fq *VAR_20, u32 *VAR_21)
{
 union qm_mc_command *VAR_22;
 union qm_mc_result *VAR_23;
 struct qman_portal *VAR_24;
 int VAR_25;
 u8 VAR_26;

 if (VAR_20->state != VAR_17 &&
     VAR_20->state != VAR_19)
  return -VAR_1;




 VAR_24 = FUNC_6();
 if (FUNC_3(VAR_20, VAR_5) ||
     VAR_20->state == VAR_18 ||
     VAR_20->state == VAR_16) {
  VAR_25 = -VAR_0;
  goto out;
 }
 VAR_22 = FUNC_11(&VAR_24->p);
 FUNC_8(&VAR_22->fq, VAR_20->fqid);
 FUNC_9(&VAR_24->p, VAR_8);
 if (!FUNC_10(&VAR_24->p, &VAR_23)) {
  FUNC_2(VAR_24->config->dev, "ALTER_RETIRE timeout\n");
  VAR_25 = -VAR_3;
  goto out;
 }

 FUNC_0((VAR_23->verb & VAR_14) == VAR_13);
 VAR_26 = VAR_23->result;
 if (VAR_26 == VAR_11) {
  VAR_25 = 0;

  if (VAR_23->alterfq.fqs & VAR_9)
   FUNC_4(VAR_20, VAR_6);
  if (VAR_23->alterfq.fqs & VAR_10)
   FUNC_4(VAR_20, VAR_7);
  if (VAR_21)
   *VAR_21 = VAR_20->flags;
  VAR_20->state = VAR_18;
  if (VAR_20->cb.fqs) {
   union qm_mr_entry VAR_27;

   VAR_27.verb = VAR_15;
   VAR_27.fq.fqs = VAR_23->alterfq.fqs;
   FUNC_8(&VAR_27.fq, VAR_20->fqid);
   VAR_27.fq.context_b = FUNC_1(FUNC_5(VAR_20));
   VAR_20->cb.fqs(VAR_24, VAR_20, &VAR_27);
  }
 } else if (VAR_26 == VAR_12) {
  VAR_25 = 1;
  FUNC_4(VAR_20, VAR_5);
 } else {
  VAR_25 = -VAR_2;
 }
out:
 FUNC_7();
 return VAR_25;
}
