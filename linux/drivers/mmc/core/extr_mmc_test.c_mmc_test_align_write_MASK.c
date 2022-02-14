
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mmc_test_card {scalar_t__ buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_test_card*,struct scatterlist*,int,int ,int,int,int) ;
 int FUNC_1 (struct scatterlist*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_1)
{
 int VAR_2, VAR_3;
 struct scatterlist VAR_4;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(&VAR_4, VAR_1->buffer + VAR_3, 512);
  VAR_2 = FUNC_0(VAR_1, &VAR_4, 1, 0, 1, 512, 1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
