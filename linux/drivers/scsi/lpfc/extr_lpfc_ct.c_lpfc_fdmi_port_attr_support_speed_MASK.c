
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int hba_flag; int lmt; int fc_linkspeed; } ;
struct TYPE_2__ {int AttrInt; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


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
 int VAR_23 ;




 int VAR_24 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_25,
      struct lpfc_fdmi_attr_def *VAR_26)
{
 struct lpfc_hba *VAR_27 = VAR_25->phba;
 struct lpfc_fdmi_attr_entry *VAR_28;
 uint32_t VAR_29;

 VAR_28 = (struct lpfc_fdmi_attr_entry *)&VAR_26->AttrValue;

 VAR_28->un.AttrInt = 0;
 if (!(VAR_27->hba_flag & VAR_1)) {
  if (VAR_27->lmt & VAR_16)
   VAR_28->un.AttrInt |= VAR_5;
  if (VAR_27->lmt & VAR_22)
   VAR_28->un.AttrInt |= VAR_13;
  if (VAR_27->lmt & VAR_20)
   VAR_28->un.AttrInt |= VAR_10;
  if (VAR_27->lmt & VAR_17)
   VAR_28->un.AttrInt |= VAR_6;
  if (VAR_27->lmt & VAR_15)
   VAR_28->un.AttrInt |= VAR_4;
  if (VAR_27->lmt & VAR_23)
   VAR_28->un.AttrInt |= VAR_14;
  if (VAR_27->lmt & VAR_21)
   VAR_28->un.AttrInt |= VAR_12;
  if (VAR_27->lmt & VAR_19)
   VAR_28->un.AttrInt |= VAR_9;
  if (VAR_27->lmt & VAR_18)
   VAR_28->un.AttrInt |= VAR_7;
 } else {

  switch (VAR_27->fc_linkspeed) {
  case 130:
   VAR_28->un.AttrInt = VAR_3;
   break;
  case 129:
   VAR_28->un.AttrInt = VAR_8;
   break;
  case 128:
   VAR_28->un.AttrInt = VAR_11;
   break;
  case 131:
   VAR_28->un.AttrInt = VAR_2;
   break;
  }
 }
 VAR_28->un.AttrInt = FUNC_1(VAR_28->un.AttrInt);
 VAR_29 = VAR_0 + sizeof(uint32_t);
 VAR_26->AttrLen = FUNC_0(VAR_29);
 VAR_26->AttrType = FUNC_0(VAR_24);
 return VAR_29;
}
