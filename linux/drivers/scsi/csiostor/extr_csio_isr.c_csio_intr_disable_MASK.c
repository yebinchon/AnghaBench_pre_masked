
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_hw {int intr_mode; int num_sqsets; int flags; int pdev; TYPE_1__* msix_entries; } ;
struct TYPE_2__ {struct csio_hw* dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (int ,struct csio_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct csio_hw *VAR_3, bool VAR_4)
{
 FUNC_0(VAR_3);

 if (VAR_4) {
  int VAR_5;

  switch (VAR_3->intr_mode) {
  case 128:
   for (VAR_5 = 0; VAR_5 < VAR_3->num_sqsets + VAR_0; VAR_5++) {
    FUNC_1(FUNC_3(VAR_3->pdev, VAR_5),
      VAR_3->msix_entries[VAR_5].dev_id);
   }
   break;
  case 129:
  case 130:
   FUNC_1(FUNC_3(VAR_3->pdev, 0), VAR_3);
   break;
  default:
   break;
  }
 }

 FUNC_2(VAR_3->pdev);
 VAR_3->intr_mode = VAR_2;
 VAR_3->flags &= ~VAR_1;
}
