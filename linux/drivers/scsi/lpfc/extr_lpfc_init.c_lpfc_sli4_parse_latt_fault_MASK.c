
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int dummy; } ;
struct lpfc_acqe_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,struct lpfc_acqe_link*) ;
 int VAR_2 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_3,
      struct lpfc_acqe_link *VAR_4)
{
 switch (FUNC_0(VAR_2, VAR_4)) {
 case 129:
 case 131:
 case 128:
 case 130:
  break;
 default:
  FUNC_1(VAR_3, VAR_0, VAR_1,
    "0398 Unknown link fault code: x%x\n",
    FUNC_0(VAR_2, VAR_4));
  break;
 }
}
