
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enic {int intr_count; int wq_count; TYPE_2__* msix; int netdev; TYPE_1__* msix_entry; } ;
struct TYPE_4__ {int affinity_mask; } ;
struct TYPE_3__ {int vector; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct enic*,int) ;
 scalar_t__ FUNC_3 (struct enic*,int) ;
 int FUNC_4 (struct enic*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct enic *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++) {
  if (FUNC_2(VAR_0, VAR_1) ||
      FUNC_3(VAR_0, VAR_1) ||
      !FUNC_0(VAR_0->msix[VAR_1].affinity_mask) ||
      FUNC_1(VAR_0->msix[VAR_1].affinity_mask))
   continue;
  VAR_2 = FUNC_5(VAR_0->msix_entry[VAR_1].vector,
         VAR_0->msix[VAR_1].affinity_mask);
  if (VAR_2)
   FUNC_6(VAR_0->netdev, "irq_set_affinity_hint failed, err %d\n",
        VAR_2);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_count; VAR_1++) {
  int VAR_3 = FUNC_4(VAR_0, VAR_1);

  if (FUNC_0(VAR_0->msix[VAR_3].affinity_mask) &&
      !FUNC_1(VAR_0->msix[VAR_3].affinity_mask))
   FUNC_7(VAR_0->netdev,
         VAR_0->msix[VAR_3].affinity_mask,
         VAR_1);
 }
}
