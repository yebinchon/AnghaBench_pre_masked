
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
 int VAR_2 ;
 int FUNC_1 (struct lpfc_fdmi_attr_entry*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_vport *VAR_3,
       struct lpfc_fdmi_attr_def *VAR_4)
{
 struct lpfc_fdmi_attr_entry *VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = (struct lpfc_fdmi_attr_entry *)&VAR_4->AttrValue;
 FUNC_1(VAR_5, 0, 256);

 FUNC_2(VAR_5->un.AttrString, VAR_2,
  sizeof(VAR_5->un.AttrString));
 VAR_6 = FUNC_3(VAR_5->un.AttrString,
     sizeof(VAR_5->un.AttrString));
 VAR_6 += (VAR_6 & 3) ? (4 - (VAR_6 & 3)) : 4;
 VAR_7 = VAR_0 + VAR_6;
 VAR_4->AttrLen = FUNC_0(VAR_7);
 VAR_4->AttrType = FUNC_0(VAR_1);
 return VAR_7;
}
