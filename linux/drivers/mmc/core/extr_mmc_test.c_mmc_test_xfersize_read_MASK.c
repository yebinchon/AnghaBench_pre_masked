
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_card {int dummy; } ;


 int FUNC_0 (struct mmc_test_card*,int,int,int ) ;
 int FUNC_1 (struct mmc_test_card*,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 512);
 if (VAR_1)
  return VAR_1;

 return FUNC_0(VAR_0, 1, 512, 0);
}
