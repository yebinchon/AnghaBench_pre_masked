
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {unsigned long max_tfr; unsigned long dev_addr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct mmc_test_card*,unsigned long,unsigned int,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0)
{
 struct mmc_test_area *VAR_1 = &VAR_0->area;
 unsigned long VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_2 = 512; VAR_2 < VAR_1->max_tfr; VAR_2 <<= 1) {
  VAR_3 = VAR_1->dev_addr + (VAR_2 >> 9);
  VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, 0, 0, 1);
  if (VAR_4)
   return VAR_4;
 }
 VAR_2 = VAR_1->max_tfr;
 VAR_3 = VAR_1->dev_addr;
 return FUNC_0(VAR_0, VAR_2, VAR_3, 0, 0, 1);
}
