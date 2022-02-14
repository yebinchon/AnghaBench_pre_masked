
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_reserve {unsigned long size; } ;
struct sram_partition {scalar_t__ base; } ;
struct sram_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct sram_dev *VAR_1, struct sram_reserve *VAR_2,
       struct sram_partition *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_3->base;
 unsigned long VAR_5 = VAR_4 + VAR_2->size;

 if (!FUNC_0(VAR_4) || !FUNC_0(VAR_5)) {
  FUNC_1(VAR_1->dev,
   "SRAM pool marked with 'protect-exec' is not page aligned and will not be created.\n");
  return -VAR_0;
 }

 return 0;
}
