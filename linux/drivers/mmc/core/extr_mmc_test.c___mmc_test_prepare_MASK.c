
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_card {int* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct mmc_test_card*,int*,int,int,int) ;
 int FUNC_2 (struct mmc_test_card*,int) ;

__attribute__((used)) static int FUNC_3(struct mmc_test_card *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_1, 512);
 if (VAR_3)
  return VAR_3;

 if (VAR_2)
  FUNC_0(VAR_1->buffer, 0xDF, 512);
 else {
  for (VAR_4 = 0; VAR_4 < 512; VAR_4++)
   VAR_1->buffer[VAR_4] = VAR_4;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0 / 512; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_1->buffer, VAR_4, 512, 1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
