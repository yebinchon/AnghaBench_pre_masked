
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; int OptionROMVersion; } ;
struct TYPE_2__ {int AttrString; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_hba*,int ,int) ;
 int FUNC_2 (struct lpfc_fdmi_attr_entry*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_vport *VAR_3,
      struct lpfc_fdmi_attr_def *VAR_4)
{
 struct lpfc_hba *VAR_5 = VAR_3->phba;
 struct lpfc_fdmi_attr_entry *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = (struct lpfc_fdmi_attr_entry *)&VAR_4->AttrValue;
 FUNC_2(VAR_6, 0, 256);

 if (VAR_5->sli_rev == VAR_1)
  FUNC_1(VAR_5, VAR_6->un.AttrString, 1);
 else
  FUNC_3(VAR_6->un.AttrString, VAR_5->OptionROMVersion,
   sizeof(VAR_6->un.AttrString));
 VAR_7 = FUNC_4(VAR_6->un.AttrString,
     sizeof(VAR_6->un.AttrString));
 VAR_7 += (VAR_7 & 3) ? (4 - (VAR_7 & 3)) : 4;
 VAR_8 = VAR_0 + VAR_7;
 VAR_4->AttrLen = FUNC_0(VAR_8);
 VAR_4->AttrType = FUNC_0(VAR_2);
 return VAR_8;
}
