
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_2__ {int AttrInt; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_4,
     struct lpfc_fdmi_attr_def *VAR_5)
{
 struct lpfc_fdmi_attr_entry *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (struct lpfc_fdmi_attr_entry *)&VAR_5->AttrValue;
 VAR_6->un.AttrInt = FUNC_1(VAR_0 | VAR_1);
 VAR_7 = VAR_2 + sizeof(uint32_t);
 VAR_5->AttrLen = FUNC_0(VAR_7);
 VAR_5->AttrType = FUNC_0(VAR_3);
 return VAR_7;
}
