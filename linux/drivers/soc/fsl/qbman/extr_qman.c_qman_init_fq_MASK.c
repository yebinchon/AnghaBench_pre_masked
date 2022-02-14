
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union qm_mc_result {scalar_t__ verb; scalar_t__ result; } ;
struct TYPE_5__ {int cgid; int fq_ctrl; int context_a; int context_b; } ;
struct qm_mcc_initfq {TYPE_2__ fqd; int we_mask; scalar_t__ count; } ;
union qm_mc_command {struct qm_mcc_initfq initfq; int fq; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct qman_portal {TYPE_1__* config; int p; } ;
struct qman_fq {scalar_t__ state; int cgr_groupid; int fqid; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; int channel; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct qman_fq*,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct qman_fq*,int ) ;
 scalar_t__ FUNC_8 (struct qman_fq*,int ) ;
 scalar_t__ FUNC_9 (struct qman_fq*,int ) ;
 int FUNC_10 (struct qman_fq*,int ) ;
 int FUNC_11 (struct qman_fq*) ;
 struct qman_portal* FUNC_12 () ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_2__*,int ,int) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_20 (int *) ;
 struct qman_portal* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;

int FUNC_21(struct qman_fq *VAR_27, u32 VAR_28, struct qm_mcc_initfq *VAR_29)
{
 union qm_mc_command *VAR_30;
 union qm_mc_result *VAR_31;
 struct qman_portal *VAR_32;
 u8 VAR_33, VAR_34;
 int VAR_35 = 0;

 VAR_34 = (VAR_28 & VAR_10)
  ? VAR_20 : VAR_19;

 if (VAR_27->state != VAR_24 &&
     VAR_27->state != VAR_25)
  return -VAR_2;




 if (VAR_29 && (FUNC_1(VAR_29->we_mask) & VAR_17)) {

  if (FUNC_1(VAR_29->we_mask) & VAR_18)
   return -VAR_2;
 }

 VAR_32 = FUNC_12();
 if (FUNC_9(VAR_27, VAR_8) ||
     (VAR_27->state != VAR_24 &&
      VAR_27->state != VAR_25)) {
  VAR_35 = -VAR_1;
  goto out;
 }
 VAR_30 = FUNC_20(&VAR_32->p);
 if (VAR_29)
  VAR_30->initfq = *VAR_29;
 FUNC_17(&VAR_30->fq, VAR_27->fqid);
 VAR_30->initfq.count = 0;





 if (FUNC_8(VAR_27, VAR_6)) {
  dma_addr_t VAR_36;

  VAR_30->initfq.we_mask |= FUNC_2(VAR_14);
  VAR_30->initfq.fqd.context_b = FUNC_3(FUNC_11(VAR_27));




  if (!(FUNC_1(VAR_30->initfq.we_mask) &
      VAR_13)) {
   VAR_30->initfq.we_mask |=
    FUNC_2(VAR_13);
   FUNC_13(&VAR_30->initfq.fqd.context_a, 0,
    sizeof(VAR_30->initfq.fqd.context_a));
  } else {
   struct qman_portal *VAR_37 = VAR_23;

   VAR_36 = FUNC_5(VAR_37->config->dev, VAR_27,
       sizeof(*VAR_27), VAR_0);
   if (FUNC_6(VAR_37->config->dev, VAR_36)) {
    FUNC_4(VAR_37->config->dev, "dma_mapping failed\n");
    VAR_35 = -VAR_3;
    goto out;
   }

   FUNC_16(&VAR_30->initfq.fqd, VAR_36);
  }
 }
 if (VAR_28 & VAR_9) {
  int VAR_38 = 0;

  if (!(FUNC_1(VAR_30->initfq.we_mask) &
      VAR_15)) {
   VAR_30->initfq.we_mask |=
    FUNC_2(VAR_15);
   VAR_38 = 4;
  }
  FUNC_15(&VAR_30->initfq.fqd, VAR_32->config->channel, VAR_38);
 }
 FUNC_18(&VAR_32->p, VAR_34);
 if (!FUNC_19(&VAR_32->p, &VAR_31)) {
  FUNC_4(VAR_32->config->dev, "MCR timeout\n");
  VAR_35 = -VAR_4;
  goto out;
 }

 FUNC_0((VAR_31->verb & VAR_22) == VAR_34);
 VAR_33 = VAR_31->result;
 if (VAR_33 != VAR_21) {
  VAR_35 = -VAR_3;
  goto out;
 }
 if (VAR_29) {
  if (FUNC_1(VAR_29->we_mask) & VAR_16) {
   if (FUNC_1(VAR_29->fqd.fq_ctrl) & VAR_11)
    FUNC_10(VAR_27, VAR_7);
   else
    FUNC_7(VAR_27, VAR_7);
  }
  if (FUNC_1(VAR_29->we_mask) & VAR_12)
   VAR_27->cgr_groupid = VAR_29->fqd.cgid;
 }
 VAR_27->state = (VAR_28 & VAR_10) ?
  VAR_26 : VAR_25;

out:
 FUNC_14();
 return VAR_35;
}
