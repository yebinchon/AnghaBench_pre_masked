
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int cfg_fof; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_name*,struct lpfc_name*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_name*,struct lpfc_name*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_2(struct lpfc_hba *VAR_2, uint8_t VAR_3[],
         uint8_t VAR_4[], uint64_t VAR_5,
         uint32_t VAR_6, uint8_t VAR_7)
{

 int VAR_8 = 0;

 if (!VAR_2->cfg_fof)
  return -VAR_1;

 if (VAR_6) {
  if (!FUNC_1(VAR_2, (struct lpfc_name *)VAR_3,
      (struct lpfc_name *)VAR_4,
      VAR_5, VAR_7))
   VAR_8 = -VAR_0;
 } else {
  FUNC_0(VAR_2, (struct lpfc_name *)VAR_3,
         (struct lpfc_name *)VAR_4, VAR_5, VAR_7);
 }
 return VAR_8;

}
