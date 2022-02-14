
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enic {int intr_count; TYPE_1__* msix; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int affinity_mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct enic*,int) ;
 scalar_t__ FUNC_6 (struct enic*,int) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct enic *VAR_1)
{
 int VAR_2 = FUNC_4(&VAR_1->pdev->dev);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->intr_count; VAR_3++) {
  if (FUNC_5(VAR_1, VAR_3) || FUNC_6(VAR_1, VAR_3) ||
      (FUNC_0(VAR_1->msix[VAR_3].affinity_mask) &&
       !FUNC_1(VAR_1->msix[VAR_3].affinity_mask)))
   continue;
  if (FUNC_7(&VAR_1->msix[VAR_3].affinity_mask,
           VAR_0))
   FUNC_3(FUNC_2(VAR_3, VAR_2),
     VAR_1->msix[VAR_3].affinity_mask);
 }
}
