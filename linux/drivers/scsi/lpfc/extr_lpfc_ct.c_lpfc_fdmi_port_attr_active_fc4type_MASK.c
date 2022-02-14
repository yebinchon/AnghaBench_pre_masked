
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct TYPE_4__ {int* AttrTypes; } ;
struct lpfc_fdmi_attr_entry {TYPE_2__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;
struct TYPE_3__ {int cfg_enable_fc4_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_fdmi_attr_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_3,
       struct lpfc_fdmi_attr_def *VAR_4)
{
 struct lpfc_fdmi_attr_entry *VAR_5;
 uint32_t VAR_6;

 VAR_5 = (struct lpfc_fdmi_attr_entry *)&VAR_4->AttrValue;
 FUNC_1(VAR_5, 0, 32);

 VAR_5->un.AttrTypes[3] = 0x02;
 VAR_5->un.AttrTypes[2] = 0x01;
 VAR_5->un.AttrTypes[7] = 0x01;


 if (VAR_3->phba->cfg_enable_fc4_type & VAR_1)
  VAR_5->un.AttrTypes[6] = 0x1;

 VAR_6 = VAR_0 + 32;
 VAR_4->AttrLen = FUNC_0(VAR_6);
 VAR_4->AttrType = FUNC_0(VAR_2);
 return VAR_6;
}
