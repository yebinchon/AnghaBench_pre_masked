
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int portName; } ;
struct lpfc_vport {TYPE_2__ fc_sparam; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_3__ {int AttrWWN; } ;
struct lpfc_fdmi_attr_entry {TYPE_1__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct lpfc_fdmi_attr_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_vport *VAR_2,
    struct lpfc_fdmi_attr_def *VAR_3)
{
 struct lpfc_fdmi_attr_entry *VAR_4;
 uint32_t VAR_5;

 VAR_4 = (struct lpfc_fdmi_attr_entry *)&VAR_3->AttrValue;
 FUNC_2(VAR_4, 0, sizeof(struct lpfc_name));

 FUNC_1(&VAR_4->un.AttrWWN, &VAR_2->fc_sparam.portName,
        sizeof(struct lpfc_name));
 VAR_5 = VAR_0 + sizeof(struct lpfc_name);
 VAR_3->AttrLen = FUNC_0(VAR_5);
 VAR_3->AttrType = FUNC_0(VAR_1);
 return VAR_5;
}
