
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_22__ {int sli_flag; } ;
struct lpfc_hba {int sli_rev; int sli3_options; int mbox_mem_pool; scalar_t__ max_vpi; TYPE_4__* mbox; int port_gp; int * hbq_get; scalar_t__ cfg_enable_bg; int fips_spec_rev; int fips_level; scalar_t__ max_vports; int hbalock; TYPE_6__ sli; int link_state; TYPE_5__* pport; } ;
struct TYPE_15__ {int casabt; scalar_t__ gasabt; int sli_mode; scalar_t__ gbg; scalar_t__ gcrp; scalar_t__ gerbm; scalar_t__ sec_err; int fips_rev; int fips_level; scalar_t__ gdss; scalar_t__ max_vpi; scalar_t__ gmv; int cMA; } ;
struct TYPE_25__ {TYPE_10__ varCfgPort; } ;
struct TYPE_23__ {TYPE_9__ un; int mbxStatus; int mbxCommand; } ;
struct TYPE_24__ {TYPE_7__ mb; } ;
struct TYPE_21__ {int port_state; } ;
struct TYPE_18__ {int port; } ;
struct TYPE_17__ {int port; int * hbq_get; } ;
struct TYPE_19__ {TYPE_2__ s2; TYPE_1__ s3_pgp; } ;
struct TYPE_20__ {TYPE_3__ us; } ;
struct TYPE_16__ {TYPE_8__ u; } ;
typedef TYPE_11__ LPFC_MBOXQ_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_11__*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,TYPE_11__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_11__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct lpfc_hba *VAR_23, int VAR_24)
{
 LPFC_MBOXQ_t *VAR_25;
 uint32_t VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;

 VAR_25 = (LPFC_MBOXQ_t *) FUNC_6(VAR_23->mbox_mem_pool, VAR_4);
 if (!VAR_25) {
  VAR_23->link_state = VAR_9;
  return -VAR_1;
 }

 VAR_23->sli_rev = VAR_24;
 while (VAR_26 < 2 && !VAR_28) {
  FUNC_8(&VAR_23->hbalock);
  VAR_23->sli.sli_flag |= VAR_19;
  FUNC_9(&VAR_23->hbalock);
  VAR_23->pport->port_state = VAR_20;
  FUNC_3(VAR_23);
  VAR_27 = FUNC_4(VAR_23);
  if (VAR_27)
   break;

  FUNC_8(&VAR_23->hbalock);
  VAR_23->sli.sli_flag &= ~VAR_19;
  FUNC_9(&VAR_23->hbalock);
  VAR_26++;






  VAR_27 = FUNC_1(VAR_23);
  if (VAR_27 == -VAR_3) {
   VAR_23->link_state = VAR_11;
   continue;
  } else if (VAR_27)
   break;

  VAR_23->link_state = VAR_10;
  FUNC_0(VAR_23, VAR_25);
  VAR_27 = FUNC_5(VAR_23, VAR_25, VAR_21);
  VAR_23->sli3_options &= ~(VAR_16 |
     VAR_15 |
     VAR_13 |
     VAR_14);
  if (VAR_27 != VAR_22) {
   FUNC_2(VAR_23, VAR_5, VAR_8,
    "0442 Adapter failed to init, mbxCmd x%x "
    "CONFIG_PORT, mbxStatus x%x Data: x%x\n",
    VAR_25->u.mb.mbxCommand, VAR_25->u.mb.mbxStatus, 0);
   FUNC_8(&VAR_23->hbalock);
   VAR_23->sli.sli_flag &= ~VAR_17;
   FUNC_9(&VAR_23->hbalock);
   VAR_27 = -VAR_2;
  } else {

   FUNC_8(&VAR_23->hbalock);
   VAR_23->sli.sli_flag &= ~VAR_18;
   FUNC_9(&VAR_23->hbalock);
   VAR_28 = 1;

   if ((VAR_25->u.mb.un.varCfgPort.casabt == 1) &&
       (VAR_25->u.mb.un.varCfgPort.gasabt == 0))
    FUNC_2(VAR_23, VAR_7, VAR_8,
     "3110 Port did not grant ASABT\n");
  }
 }
 if (!VAR_28) {
  VAR_27 = -VAR_0;
  goto do_prep_failed;
 }
 if (VAR_25->u.mb.un.varCfgPort.sli_mode == 3) {
  if (!VAR_25->u.mb.un.varCfgPort.cMA) {
   VAR_27 = -VAR_2;
   goto do_prep_failed;
  }
  if (VAR_23->max_vpi && VAR_25->u.mb.un.varCfgPort.gmv) {
   VAR_23->sli3_options |= VAR_16;
   VAR_23->max_vpi = VAR_25->u.mb.un.varCfgPort.max_vpi;
   VAR_23->max_vports = (VAR_23->max_vpi > VAR_23->max_vports) ?
    VAR_23->max_vpi : VAR_23->max_vports;

  } else
   VAR_23->max_vpi = 0;
  VAR_23->fips_level = 0;
  VAR_23->fips_spec_rev = 0;
  if (VAR_25->u.mb.un.varCfgPort.gdss) {
   VAR_23->sli3_options |= VAR_14;
   VAR_23->fips_level = VAR_25->u.mb.un.varCfgPort.fips_level;
   VAR_23->fips_spec_rev = VAR_25->u.mb.un.varCfgPort.fips_rev;
   FUNC_2(VAR_23, VAR_6, VAR_8,
     "2850 Security Crypto Active. FIPS x%d "
     "(Spec Rev: x%d)",
     VAR_23->fips_level, VAR_23->fips_spec_rev);
  }
  if (VAR_25->u.mb.un.varCfgPort.sec_err) {
   FUNC_2(VAR_23, VAR_5, VAR_8,
     "2856 Config Port Security Crypto "
     "Error: x%x ",
     VAR_25->u.mb.un.varCfgPort.sec_err);
  }
  if (VAR_25->u.mb.un.varCfgPort.gerbm)
   VAR_23->sli3_options |= VAR_15;
  if (VAR_25->u.mb.un.varCfgPort.gcrp)
   VAR_23->sli3_options |= VAR_13;

  VAR_23->hbq_get = VAR_23->mbox->us.s3_pgp.hbq_get;
  VAR_23->port_gp = VAR_23->mbox->us.s3_pgp.port;

  if (VAR_23->sli3_options & VAR_12) {
   if (VAR_25->u.mb.un.varCfgPort.gbg == 0) {
    VAR_23->cfg_enable_bg = 0;
    VAR_23->sli3_options &= ~VAR_12;
    FUNC_2(VAR_23, VAR_5, VAR_8,
      "0443 Adapter did not grant "
      "BlockGuard\n");
   }
  }
 } else {
  VAR_23->hbq_get = ((void*)0);
  VAR_23->port_gp = VAR_23->mbox->us.s2.port;
  VAR_23->max_vpi = 0;
 }
do_prep_failed:
 FUNC_7(VAR_25, VAR_23->mbox_mem_pool);
 return VAR_27;
}
