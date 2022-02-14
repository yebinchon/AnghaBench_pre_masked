
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_card {int buffer; TYPE_2__* card; } ;
struct TYPE_3__ {int write_partial; } ;
struct TYPE_4__ {TYPE_1__ csd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_test_card*,struct scatterlist*,int,int ,int,int,int) ;
 int FUNC_1 (struct scatterlist*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_1)
{
 int VAR_2, VAR_3;
 struct scatterlist VAR_4;

 if (!VAR_1->card->csd.write_partial)
  return VAR_0;

 for (VAR_3 = 3; VAR_3 < 512; VAR_3 += 7) {
  FUNC_1(&VAR_4, VAR_1->buffer, VAR_3);
  VAR_2 = FUNC_0(VAR_1, &VAR_4, 1, 0, 1, VAR_3, 1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
