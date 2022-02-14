
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct sram_partition {scalar_t__ pool; TYPE_1__ battr; } ;
struct sram_dev {int partitions; int dev; struct sram_partition* partition; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sram_dev *VAR_0)
{
 struct sram_partition *VAR_1;

 if (!VAR_0->partitions)
  return;

 VAR_1 = &VAR_0->partition[VAR_0->partitions - 1];
 for (; VAR_0->partitions; VAR_0->partitions--, VAR_1--) {
  if (VAR_1->battr.size)
   FUNC_1(VAR_0->dev, &VAR_1->battr);

  if (VAR_1->pool &&
      FUNC_2(VAR_1->pool) < FUNC_3(VAR_1->pool))
   FUNC_0(VAR_0->dev, "removed pool while SRAM allocated\n");
 }
}
