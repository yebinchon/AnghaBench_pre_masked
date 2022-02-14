
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct mmc_test_area {unsigned long max_sz; unsigned long dev_addr; } ;
struct mmc_test_card {int card; struct mmc_test_area area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int,unsigned long,int ) ;
 int FUNC_4 (struct mmc_test_card*,unsigned long,struct timespec64*,struct timespec64*) ;

__attribute__((used)) static int FUNC_5(struct mmc_test_card *VAR_3)
{
 struct mmc_test_area *VAR_4 = &VAR_3->area;
 unsigned long VAR_5;
 unsigned int VAR_6;
 struct timespec64 VAR_7, VAR_8;
 int VAR_9;

 if (!FUNC_2(VAR_3->card))
  return VAR_1;

 if (!FUNC_1(VAR_3->card))
  return VAR_2;

 for (VAR_5 = 512; VAR_5 < VAR_4->max_sz; VAR_5 <<= 1) {
  VAR_6 = VAR_4->dev_addr + (VAR_5 >> 9);
  FUNC_0(&VAR_7);
  VAR_9 = FUNC_3(VAR_3->card, VAR_6, VAR_5 >> 9, VAR_0);
  if (VAR_9)
   return VAR_9;
  FUNC_0(&VAR_8);
  FUNC_4(VAR_3, VAR_5, &VAR_7, &VAR_8);
 }
 VAR_6 = VAR_4->dev_addr;
 FUNC_0(&VAR_7);
 VAR_9 = FUNC_3(VAR_3->card, VAR_6, VAR_5 >> 9, VAR_0);
 if (VAR_9)
  return VAR_9;
 FUNC_0(&VAR_8);
 FUNC_4(VAR_3, VAR_5, &VAR_7, &VAR_8);
 return 0;
}
