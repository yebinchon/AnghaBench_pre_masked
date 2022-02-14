
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ fc_topology; } ;
struct TYPE_2__ {void* AttrInt; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_5,
         struct lpfc_fdmi_attr_def *VAR_6)
{
 struct lpfc_hba *VAR_7 = VAR_5->phba;
 struct lpfc_fdmi_attr_entry *VAR_8;
 uint32_t VAR_9;

 VAR_8 = (struct lpfc_fdmi_attr_entry *)&VAR_6->AttrValue;
 if (VAR_7->fc_topology == VAR_3)
  VAR_8->un.AttrInt = FUNC_1(VAR_1);
 else
  VAR_8->un.AttrInt = FUNC_1(VAR_2);
 VAR_9 = VAR_0 + sizeof(uint32_t);
 VAR_6->AttrLen = FUNC_0(VAR_9);
 VAR_6->AttrType = FUNC_0(VAR_4);
 return VAR_9;
}
