
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {scalar_t__ intr_type; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_hba *VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11 = VAR_3;
 int VAR_12;

 if (VAR_10 == 2) {

  VAR_12 = FUNC_0(VAR_9, VAR_4);
  if (!VAR_12) {

   VAR_12 = FUNC_2(VAR_9);
   if (!VAR_12) {

    VAR_9->intr_type = VAR_6;
    VAR_11 = 2;
   }
  }
 }


 if (VAR_10 >= 1 && VAR_9->intr_type == VAR_7) {
  VAR_12 = FUNC_1(VAR_9);
  if (!VAR_12) {

   VAR_9->intr_type = VAR_5;
   VAR_11 = 1;
  }
 }


 if (VAR_9->intr_type == VAR_7) {
  VAR_12 = FUNC_3(VAR_9->pcidev->irq, VAR_8,
         VAR_1, VAR_2, VAR_9);
  if (!VAR_12) {

   VAR_9->intr_type = VAR_0;
   VAR_11 = 0;
  }
 }
 return VAR_11;
}
