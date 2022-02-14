
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct fm10k_intfc {int* reta; TYPE_1__* pdev; int netdev; TYPE_2__* ring_feature; } ;
struct TYPE_4__ {size_t indices; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fm10k_intfc*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fm10k_intfc *VAR_2)
{
 u16 VAR_3, VAR_4 = VAR_2->ring_feature[VAR_1].indices;
 u32 VAR_5;




 if (FUNC_2(VAR_2->netdev)) {
  for (VAR_3 = VAR_0; VAR_3--;) {
   VAR_5 = VAR_2->reta[VAR_3];
   if ((((VAR_5 << 24) >> 24) < VAR_4) &&
       (((VAR_5 << 16) >> 24) < VAR_4) &&
       (((VAR_5 << 8) >> 24) < VAR_4) &&
       (((VAR_5) >> 24) < VAR_4))
    continue;


   FUNC_0(&VAR_2->pdev->dev,
    "RSS indirection table assigned flows out of queue bounds. Reconfiguring.\n");
   goto repopulate_reta;
  }


  return;
 }

repopulate_reta:
 FUNC_1(VAR_2, ((void*)0));
}
