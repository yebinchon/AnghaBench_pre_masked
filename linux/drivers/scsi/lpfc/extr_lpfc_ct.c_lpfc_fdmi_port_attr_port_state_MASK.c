
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
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_3,
          struct lpfc_fdmi_attr_def *VAR_4)
{
 struct lpfc_fdmi_attr_entry *VAR_5;
 uint32_t VAR_6;

 VAR_5 = (struct lpfc_fdmi_attr_entry *)&VAR_4->AttrValue;

 VAR_5->un.AttrInt = FUNC_1(VAR_1);
 VAR_6 = VAR_0 + sizeof(uint32_t);
 VAR_4->AttrLen = FUNC_0(VAR_6);
 VAR_4->AttrType = FUNC_0(VAR_2);
 return VAR_6;
}
