
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ bbRcvSizeLsb; scalar_t__ bbRcvSizeMsb; } ;
struct serv_parm {TYPE_1__ cmn; } ;
struct lpfc_vport {int fc_sparam; } ;
struct TYPE_4__ {int AttrInt; } ;
struct lpfc_fdmi_attr_entry {TYPE_2__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_2,
         struct lpfc_fdmi_attr_def *VAR_3)
{
 struct serv_parm *VAR_4;
 struct lpfc_fdmi_attr_entry *VAR_5;
 uint32_t VAR_6;

 VAR_5 = (struct lpfc_fdmi_attr_entry *)&VAR_3->AttrValue;

 VAR_4 = (struct serv_parm *)&VAR_2->fc_sparam;
 VAR_5->un.AttrInt = (((uint32_t) VAR_4->cmn.bbRcvSizeMsb & 0x0F) << 8) |
     (uint32_t) VAR_4->cmn.bbRcvSizeLsb;
 VAR_5->un.AttrInt = FUNC_1(VAR_5->un.AttrInt);
 VAR_6 = VAR_0 + sizeof(uint32_t);
 VAR_3->AttrLen = FUNC_0(VAR_6);
 VAR_3->AttrType = FUNC_0(VAR_1);
 return VAR_6;
}
