
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct TYPE_2__ {int AttrString; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_fdmi_attr_entry*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_vport *VAR_2,
        struct lpfc_fdmi_attr_def *VAR_3)
{
 struct lpfc_fdmi_attr_entry *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_4 = (struct lpfc_fdmi_attr_entry *)&VAR_3->AttrValue;
 FUNC_1(VAR_4, 0, 256);

 FUNC_2(VAR_4->un.AttrString, "Smart SAN Initiator",
  sizeof(VAR_4->un.AttrString));
 VAR_5 = FUNC_3(VAR_4->un.AttrString,
     sizeof(VAR_4->un.AttrString));
 VAR_5 += (VAR_5 & 3) ? (4 - (VAR_5 & 3)) : 4;
 VAR_6 = VAR_0 + VAR_5;
 VAR_3->AttrLen = FUNC_0(VAR_6);
 VAR_3->AttrType = FUNC_0(VAR_1);
 return VAR_6;
}
