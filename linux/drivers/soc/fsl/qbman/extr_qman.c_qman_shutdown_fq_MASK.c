
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fqs; } ;
struct TYPE_7__ {int fqd; } ;
struct TYPE_6__ {int state; } ;
union qm_mc_result {int verb; scalar_t__ result; TYPE_4__ alterfq; TYPE_3__ queryfq; TYPE_2__ queryfq_np; } ;
union qm_mc_command {int fq; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct qman_portal {int sdqcr; int p; TYPE_1__* config; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* dev; } ;


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
 int VAR_11 ;

 int VAR_12 ;





 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (int *) ;
 struct qman_portal* FUNC_6 () ;
 struct qman_portal* FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,union qm_mc_result**) ;
 union qm_mc_command* FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;

int FUNC_20(u32 VAR_23)
{
 struct qman_portal *VAR_24, *VAR_25;
 struct device *VAR_26;
 union qm_mc_command *VAR_27;
 union qm_mc_result *VAR_28;
 int VAR_29, VAR_30 = 0, VAR_31 = 0;
 u32 VAR_32, VAR_33, VAR_34;
 u8 VAR_35;

 VAR_24 = FUNC_6();
 VAR_26 = VAR_24->config->dev;

 VAR_27 = FUNC_18(&VAR_24->p);
 FUNC_15(&VAR_27->fq, VAR_23);
 FUNC_16(&VAR_24->p, VAR_9);
 if (!FUNC_17(&VAR_24->p, &VAR_28)) {
  FUNC_4(VAR_26, "QUERYFQ_NP timeout\n");
  VAR_31 = -VAR_2;
  goto out;
 }

 FUNC_0((VAR_28->verb & VAR_17) == VAR_19);
 VAR_35 = VAR_28->queryfq_np.state & VAR_12;
 if (VAR_35 == 132)
  goto out;


 VAR_27 = FUNC_18(&VAR_24->p);
 FUNC_15(&VAR_27->fq, VAR_23);
 FUNC_16(&VAR_24->p, VAR_8);
 if (!FUNC_17(&VAR_24->p, &VAR_28)) {
  FUNC_4(VAR_26, "QUERYFQ timeout\n");
  VAR_31 = -VAR_2;
  goto out;
 }

 FUNC_0((VAR_28->verb & VAR_17) == VAR_18);

 VAR_32 = FUNC_13(&VAR_28->queryfq.fqd);
 VAR_33 = FUNC_14(&VAR_28->queryfq.fqd);

 if (VAR_32 < VAR_22) {
  VAR_25 = FUNC_7(VAR_32);
  if (VAR_25 == ((void*)0)) {
   FUNC_4(VAR_26, "Can't find portal for dedicated channel 0x%x\n",
    VAR_32);
   VAR_31 = -VAR_1;
   goto out;
  }
 } else
  VAR_25 = VAR_24;

 switch (VAR_35) {
 case 129:
 case 128:
 case 133:
 case 131:
  VAR_29 = 0;
  VAR_27 = FUNC_18(&VAR_25->p);
  FUNC_15(&VAR_27->fq, VAR_23);
  FUNC_16(&VAR_25->p, VAR_7);
  if (!FUNC_17(&VAR_25->p, &VAR_28)) {
   FUNC_4(VAR_26, "ALTER_RETIRE timeout\n");
   VAR_31 = -VAR_2;
   goto out;
  }
  FUNC_0((VAR_28->verb & VAR_17) ==
       VAR_16);
  VAR_34 = VAR_28->result;

  if (VAR_34 == VAR_13)
   FUNC_5(&VAR_25->p);

  if (VAR_34 == VAR_14) {






   int VAR_36 = 0;
   u16 VAR_37 = 0;


   VAR_30 = 1;

   if (VAR_32 >= VAR_22 &&
       VAR_32 < VAR_22 + 15) {

    VAR_37 = (VAR_32 -
           VAR_22 + 1)<<4 | VAR_33;
   } else if (VAR_32 < VAR_22) {

    VAR_37 = VAR_33;
   } else {
    FUNC_4(VAR_26, "Can't recover FQ 0x%x, ch: 0x%x",
     VAR_23, VAR_32);
    VAR_31 = -VAR_0;
    goto out;
   }

   if (VAR_32 < VAR_22)
    FUNC_11(&VAR_25->p,
        VAR_21 |
        VAR_20);
   else
    FUNC_11(&VAR_25->p,
        VAR_21 |
        FUNC_1
        (VAR_32));
   do {

    FUNC_9(&VAR_25->p);

    VAR_36 = FUNC_19(&VAR_25->p,
        VAR_4);
    FUNC_3();
   } while (!VAR_36);

   FUNC_11(&VAR_25->p,
       VAR_25->sdqcr);

  }
  if (VAR_34 != VAR_13 &&
      VAR_34 != VAR_14) {
   FUNC_4(VAR_26, "retire_fq failed: FQ 0x%x, res=0x%x\n",
    VAR_23, VAR_34);
   VAR_31 = -VAR_1;
   goto out;
  }
  if (!(VAR_28->alterfq.fqs & VAR_11)) {




   VAR_29 = 1;
  }




  if (VAR_30 || VAR_28->alterfq.fqs & VAR_10) {

   do {
    u32 VAR_38 = VAR_23 | FUNC_2(3);

    FUNC_12(&VAR_24->p, VAR_38);




   } while (!FUNC_10(&VAR_24->p, VAR_23, VAR_5));
  }

  while (!VAR_29) {

   VAR_29 = FUNC_19(&VAR_24->p, VAR_3);
   FUNC_3();
  }
  VAR_27 = FUNC_18(&VAR_24->p);
  FUNC_15(&VAR_27->fq, VAR_23);
  FUNC_16(&VAR_24->p, VAR_6);
  if (!FUNC_17(&VAR_24->p, &VAR_28)) {
   VAR_31 = -VAR_2;
   goto out;
  }

  FUNC_0((VAR_28->verb & VAR_17) ==
       VAR_15);
  if (VAR_28->result != VAR_13) {
   FUNC_4(VAR_26, "OOS after drain fail: FQ 0x%x (0x%x)\n",
    VAR_23, VAR_28->result);
   VAR_31 = -VAR_1;
   goto out;
  }
  break;

 case 130:

  VAR_27 = FUNC_18(&VAR_24->p);
  FUNC_15(&VAR_27->fq, VAR_23);
  FUNC_16(&VAR_24->p, VAR_6);
  if (!FUNC_17(&VAR_24->p, &VAR_28)) {
   VAR_31 = -VAR_2;
   goto out;
  }

  FUNC_0((VAR_28->verb & VAR_17) ==
       VAR_15);
  if (VAR_28->result != VAR_13) {
   FUNC_4(VAR_26, "OOS fail: FQ 0x%x (0x%x)\n",
    VAR_23, VAR_28->result);
   VAR_31 = -VAR_1;
   goto out;
  }
  break;

 case 132:

  break;

 default:
  VAR_31 = -VAR_1;
 }

out:
 FUNC_8();
 return VAR_31;
}
