
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct mmc_test_area {unsigned long max_sz; unsigned int dev_addr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct mmc_test_card*) ;
 int FUNC_2 (struct mmc_test_card*,unsigned long,unsigned int,int,int ,int ) ;
 int FUNC_3 (struct mmc_test_card*,unsigned long,unsigned int,struct timespec64*,struct timespec64*) ;

__attribute__((used)) static int FUNC_4(struct mmc_test_card *VAR_0, unsigned long VAR_1)
{
 struct mmc_test_area *VAR_2 = &VAR_0->area;
 unsigned int VAR_3, VAR_4, VAR_5;
 struct timespec64 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0);
 if (VAR_8)
  return VAR_8;
 VAR_5 = VAR_2->max_sz / VAR_1;
 VAR_3 = VAR_2->dev_addr;
 FUNC_0(&VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_3, 1, 0, 0);
  if (VAR_8)
   return VAR_8;
  VAR_3 += (VAR_1 >> 9);
 }
 FUNC_0(&VAR_7);
 FUNC_3(VAR_0, VAR_1, VAR_5, &VAR_6, &VAR_7);
 return 0;
}
