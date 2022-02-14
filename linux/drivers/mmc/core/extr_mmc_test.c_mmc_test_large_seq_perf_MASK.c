
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_card {int dummy; } ;


 int FUNC_0 (struct mmc_test_card*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 10 * 1024 * 1024, 1);
  if (VAR_2)
   return VAR_2;
 }
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 100 * 1024 * 1024, 1);
  if (VAR_2)
   return VAR_2;
 }
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 1000 * 1024 * 1024, 1);
  if (VAR_2)
   return VAR_2;
 }

 return VAR_2;
}
