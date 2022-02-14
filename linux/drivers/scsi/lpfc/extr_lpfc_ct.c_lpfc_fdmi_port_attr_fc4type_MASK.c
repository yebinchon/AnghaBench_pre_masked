
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_4__ {scalar_t__ nvme; } ;
struct TYPE_5__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli4_hba; struct lpfc_vport* pport; } ;
struct TYPE_6__ {int* AttrTypes; } ;
struct lpfc_fdmi_attr_entry {TYPE_3__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_fdmi_attr_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_3,
       struct lpfc_fdmi_attr_def *VAR_4)
{
 struct lpfc_hba *VAR_5 = VAR_3->phba;
 struct lpfc_fdmi_attr_entry *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (struct lpfc_fdmi_attr_entry *)&VAR_4->AttrValue;
 FUNC_1(VAR_6, 0, 32);

 VAR_6->un.AttrTypes[3] = 0x02;
 VAR_6->un.AttrTypes[2] = 0x01;
 VAR_6->un.AttrTypes[7] = 0x01;


 if ((VAR_5->sli_rev == VAR_1) && (VAR_3 == VAR_5->pport) &&
     VAR_5->sli4_hba.pc_sli4_params.nvme)
  VAR_6->un.AttrTypes[6] = 0x01;

 VAR_7 = VAR_0 + 32;
 VAR_4->AttrLen = FUNC_0(VAR_7);
 VAR_4->AttrType = FUNC_0(VAR_2);
 return VAR_7;
}
