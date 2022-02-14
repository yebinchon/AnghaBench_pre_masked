
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct serv_parm {int dummy; } ;
struct TYPE_15__ {scalar_t__* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int * vpi_ids; TYPE_2__ sli4_hba; } ;
struct lpfc_dmabuf {int phys; int * virt; int list; } ;
struct TYPE_16__ {int bdeSize; } ;
struct TYPE_17__ {TYPE_3__ f; } ;
struct TYPE_18__ {int addrLow; int addrHigh; TYPE_4__ tus; } ;
struct TYPE_19__ {TYPE_5__ sp64; } ;
struct TYPE_20__ {TYPE_6__ un; int did; int vpi; scalar_t__ rpi; } ;
struct TYPE_21__ {TYPE_7__ varRegLogin; } ;
struct TYPE_22__ {TYPE_8__ un; void* mbxCommand; int mbxOwner; } ;
struct TYPE_14__ {TYPE_9__ mb; } ;
struct TYPE_13__ {int * ctx_buf; TYPE_1__ u; } ;
typedef TYPE_9__ MAILBOX_t ;
typedef TYPE_10__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 int * FUNC_3 (struct lpfc_hba*,int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,size_t,int ,size_t) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_10__*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct lpfc_hba *VAR_7, uint16_t VAR_8, uint32_t VAR_9,
      uint8_t *VAR_10, LPFC_MBOXQ_t *VAR_11, uint16_t VAR_12)
{
 MAILBOX_t *VAR_13 = &VAR_11->u.mb;
 uint8_t *VAR_14;
 struct lpfc_dmabuf *VAR_15;

 FUNC_6(VAR_11, 0, sizeof (LPFC_MBOXQ_t));

 VAR_13->un.varRegLogin.rpi = 0;
 if (VAR_7->sli_rev == VAR_4)
  VAR_13->un.varRegLogin.rpi = VAR_7->sli4_hba.rpi_ids[VAR_12];
 if (VAR_7->sli_rev >= VAR_3)
  VAR_13->un.varRegLogin.vpi = VAR_7->vpi_ids[VAR_8];
 VAR_13->un.varRegLogin.did = VAR_9;
 VAR_13->mbxOwner = VAR_6;

 VAR_15 = FUNC_2(sizeof (struct lpfc_dmabuf), VAR_0);
 if (VAR_15)
  VAR_15->virt = FUNC_3(VAR_7, 0, &VAR_15->phys);
 if (!VAR_15 || !VAR_15->virt) {
  FUNC_1(VAR_15);
  VAR_13->mbxCommand = VAR_5;

  FUNC_4(VAR_7, VAR_1, VAR_2,
    "0302 REG_LOGIN: no buffers, VPI:%d DID:x%x, "
    "rpi x%x\n", VAR_8, VAR_9, VAR_12);
  return 1;
 }
 FUNC_0(&VAR_15->list);
 VAR_14 = VAR_15->virt;


 FUNC_5(VAR_14, VAR_10, sizeof (struct serv_parm));


 VAR_11->ctx_buf = (uint8_t *)VAR_15;

 VAR_13->mbxCommand = VAR_5;
 VAR_13->un.varRegLogin.un.sp64.tus.f.bdeSize = sizeof (struct serv_parm);
 VAR_13->un.varRegLogin.un.sp64.addrHigh = FUNC_7(VAR_15->phys);
 VAR_13->un.varRegLogin.un.sp64.addrLow = FUNC_8(VAR_15->phys);

 return 0;
}
