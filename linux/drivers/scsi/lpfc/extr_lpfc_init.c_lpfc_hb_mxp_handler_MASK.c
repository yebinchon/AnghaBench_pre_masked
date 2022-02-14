
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lpfc_hba {scalar_t__ cfg_hdw_queue; } ;


 int FUNC_0 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_2 (struct lpfc_hba*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct lpfc_hba *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;

 VAR_2 = VAR_0->cfg_hdw_queue;
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {

  FUNC_1(VAR_0, VAR_1);


  FUNC_0(VAR_0, VAR_1);





 }
}
