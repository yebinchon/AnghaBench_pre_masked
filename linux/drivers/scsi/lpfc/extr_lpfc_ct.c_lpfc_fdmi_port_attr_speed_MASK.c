
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int hba_flag; int fc_linkspeed; } ;
struct TYPE_2__ {void* AttrInt; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_17,
     struct lpfc_fdmi_attr_def *VAR_18)
{
 struct lpfc_hba *VAR_19 = VAR_17->phba;
 struct lpfc_fdmi_attr_entry *VAR_20;
 uint32_t VAR_21;

 VAR_20 = (struct lpfc_fdmi_attr_entry *)&VAR_18->AttrValue;

 if (!(VAR_19->hba_flag & VAR_1)) {
  switch (VAR_19->fc_linkspeed) {
  case 133:
   VAR_20->un.AttrInt = VAR_7;
   break;
  case 132:
   VAR_20->un.AttrInt = VAR_9;
   break;
  case 130:
   VAR_20->un.AttrInt = VAR_12;
   break;
  case 128:
   VAR_20->un.AttrInt = VAR_14;
   break;
  case 136:
   VAR_20->un.AttrInt = VAR_4;
   break;
  case 134:
   VAR_20->un.AttrInt = VAR_6;
   break;
  case 131:
   VAR_20->un.AttrInt = VAR_10;
   break;
  case 129:
   VAR_20->un.AttrInt = VAR_13;
   break;
  case 135:
   VAR_20->un.AttrInt = VAR_5;
   break;
  default:
   VAR_20->un.AttrInt = VAR_15;
   break;
  }
 } else {
  switch (VAR_19->fc_linkspeed) {
  case 139:
   VAR_20->un.AttrInt = VAR_3;
   break;
  case 138:
   VAR_20->un.AttrInt = VAR_8;
   break;
  case 137:
   VAR_20->un.AttrInt = VAR_11;
   break;
  case 140:
   VAR_20->un.AttrInt = VAR_2;
   break;
  default:
   VAR_20->un.AttrInt = VAR_15;
   break;
  }
 }

 VAR_20->un.AttrInt = FUNC_1(VAR_20->un.AttrInt);
 VAR_21 = VAR_0 + sizeof(uint32_t);
 VAR_18->AttrLen = FUNC_0(VAR_21);
 VAR_18->AttrType = FUNC_0(VAR_16);
 return VAR_21;
}
