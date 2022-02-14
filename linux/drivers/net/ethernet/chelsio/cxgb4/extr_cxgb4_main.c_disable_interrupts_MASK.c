
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adapter {int flags; TYPE_2__* pdev; TYPE_1__* msix_info; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_2)
{
 if (VAR_2->flags & VAR_0) {
  FUNC_3(VAR_2);
  if (VAR_2->flags & VAR_1) {
   FUNC_1(VAR_2);
   FUNC_0(VAR_2->msix_info[0].vec, VAR_2);
  } else {
   FUNC_0(VAR_2->pdev->irq, VAR_2);
  }
  FUNC_2(VAR_2);
 }
}
