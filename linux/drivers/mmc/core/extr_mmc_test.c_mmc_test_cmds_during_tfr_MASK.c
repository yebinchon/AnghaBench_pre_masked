
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {unsigned long max_tfr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct mmc_test_card*,unsigned long,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0, int VAR_1,
        int VAR_2, int VAR_3)
{
 struct mmc_test_area *VAR_4 = &VAR_0->area;
 unsigned long VAR_5;
 int VAR_6;

 for (VAR_5 = 512; VAR_5 <= VAR_4->max_tfr; VAR_5 += 512) {
  VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2,
       VAR_3);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
