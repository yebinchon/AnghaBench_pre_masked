
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_4__ {int biuRev; } ;
struct TYPE_6__ {TYPE_1__ rev; } ;
struct lpfc_hba {TYPE_3__ vpd; } ;
struct TYPE_5__ {char* AttrString; } ;
struct lpfc_fdmi_attr_entry {TYPE_2__ un; } ;
struct lpfc_fdmi_attr_def {void* AttrType; void* AttrLen; int AttrValue; } ;
typedef TYPE_3__ lpfc_vpd_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lpfc_fdmi_attr_entry*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_2,
      struct lpfc_fdmi_attr_def *VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_2->phba;
 lpfc_vpd_t *VAR_5 = &VAR_4->vpd;
 struct lpfc_fdmi_attr_entry *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = (struct lpfc_fdmi_attr_entry *)&VAR_3->AttrValue;
 FUNC_1(VAR_6, 0, 256);


 VAR_9 = VAR_5->rev.biuRev;
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_8 = (VAR_9 & 0xf);
  if (VAR_8 <= 9)
   VAR_6->un.AttrString[7 - VAR_7] =
       (char)((uint8_t) 0x30 +
       (uint8_t) VAR_8);
  else
   VAR_6->un.AttrString[7 - VAR_7] =
       (char)((uint8_t) 0x61 +
       (uint8_t) (VAR_8 - 10));
  VAR_9 = (VAR_9 >> 4);
 }
 VAR_10 = VAR_0 + 8;
 VAR_3->AttrLen = FUNC_0(VAR_10);
 VAR_3->AttrType = FUNC_0(VAR_1);
 return VAR_10;
}
