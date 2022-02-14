
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvu {int num_vec; int pdev; scalar_t__* irq_allocated; TYPE_1__* hw; } ;
struct TYPE_2__ {int total_pfs; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct rvu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct rvu*,int ,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_5(struct rvu *VAR_4)
{
 int VAR_5;


 FUNC_4(VAR_4, VAR_0, VAR_1,
      FUNC_0(VAR_4->hw->total_pfs) & ~1ULL);


 FUNC_4(VAR_4, VAR_0, VAR_2,
      FUNC_0(VAR_4->hw->total_pfs) & ~1ULL);


 FUNC_4(VAR_4, VAR_0, VAR_3,
      FUNC_0(VAR_4->hw->total_pfs) & ~1ULL);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_vec; VAR_5++) {
  if (VAR_4->irq_allocated[VAR_5])
   FUNC_1(FUNC_3(VAR_4->pdev, VAR_5), VAR_4);
 }

 FUNC_2(VAR_4->pdev);
 VAR_4->num_vec = 0;
}
