
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enic {int intr_count; TYPE_1__* msix; } ;
struct TYPE_2__ {int affinity_mask; } ;


 scalar_t__ FUNC_0 (struct enic*,int) ;
 scalar_t__ FUNC_1 (struct enic*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct enic *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++) {
  if (FUNC_0(VAR_0, VAR_1) || FUNC_1(VAR_0, VAR_1))
   continue;
  FUNC_2(VAR_0->msix[VAR_1].affinity_mask);
 }
}
