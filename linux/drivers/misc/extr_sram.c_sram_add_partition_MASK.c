
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_reserve {scalar_t__ protect_exec; scalar_t__ export; scalar_t__ pool; scalar_t__ start; } ;
struct sram_partition {scalar_t__ base; int lock; } ;
struct sram_dev {size_t partitions; scalar_t__ virt_base; struct sram_partition* partition; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sram_dev*,struct sram_reserve*,int ,struct sram_partition*) ;
 int FUNC_2 (struct sram_dev*,struct sram_reserve*,int ,struct sram_partition*) ;
 int FUNC_3 (struct sram_partition*) ;
 int FUNC_4 (struct sram_dev*,struct sram_reserve*,struct sram_partition*) ;

__attribute__((used)) static int FUNC_5(struct sram_dev *VAR_0, struct sram_reserve *VAR_1,
         phys_addr_t VAR_2)
{
 int VAR_3;
 struct sram_partition *VAR_4 = &VAR_0->partition[VAR_0->partitions];

 FUNC_0(&VAR_4->lock);
 VAR_4->base = VAR_0->virt_base + VAR_1->start;

 if (VAR_1->pool) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
  if (VAR_3)
   return VAR_3;
 }
 if (VAR_1->export) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
  if (VAR_3)
   return VAR_3;
 }
 if (VAR_1->protect_exec) {
  VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_4);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
  if (VAR_3)
   return VAR_3;

  FUNC_3(VAR_4);
 }

 VAR_0->partitions++;

 return 0;
}
