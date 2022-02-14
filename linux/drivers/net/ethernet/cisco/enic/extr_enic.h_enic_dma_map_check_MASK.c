
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_map_error; } ;
struct enic {TYPE_2__ gen_stats; TYPE_1__* netdev; int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct enic *VAR_1, dma_addr_t VAR_2)
{
 if (FUNC_2(FUNC_1(VAR_1->pdev, VAR_2))) {
  FUNC_0("%s: PCI dma mapping failed!\n",
         VAR_1->netdev->name);
  VAR_1->gen_stats.dma_map_error++;

  return -VAR_0;
 }

 return 0;
}
