
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_multiple_rw {int len; int * sg_len; int size; } ;
struct mmc_test_card {int dummy; } ;


 int FUNC_0 (struct mmc_test_card*,struct mmc_test_multiple_rw*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0,
           struct mmc_test_multiple_rw *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0 ; VAR_3 < VAR_1->len && VAR_2 == 0; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 512 * 1024, VAR_1->size,
        VAR_1->sg_len[VAR_3]);
  if (VAR_2)
   break;
 }
 return VAR_2;
}
