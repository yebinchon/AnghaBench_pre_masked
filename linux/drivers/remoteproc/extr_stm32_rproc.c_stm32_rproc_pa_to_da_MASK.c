
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct stm32_rproc_mem {scalar_t__ bus_addr; scalar_t__ size; scalar_t__ dev_addr; } ;
struct stm32_rproc {unsigned int nb_rmems; struct stm32_rproc_mem* rmems; } ;
struct TYPE_2__ {int parent; } ;
struct rproc {TYPE_1__ dev; struct stm32_rproc* priv; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_1, phys_addr_t VAR_2, u64 *VAR_3)
{
 unsigned int VAR_4;
 struct stm32_rproc *VAR_5 = VAR_1->priv;
 struct stm32_rproc_mem *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_5->nb_rmems; VAR_4++) {
  VAR_6 = &VAR_5->rmems[VAR_4];

  if (VAR_2 < VAR_6->bus_addr ||
      VAR_2 >= VAR_6->bus_addr + VAR_6->size)
   continue;
  *VAR_3 = VAR_2 - VAR_6->bus_addr + VAR_6->dev_addr;
  FUNC_0(VAR_1->dev.parent, "pa %pa to da %llx\n", &VAR_2, *VAR_3);
  return 0;
 }

 return -VAR_0;
}
