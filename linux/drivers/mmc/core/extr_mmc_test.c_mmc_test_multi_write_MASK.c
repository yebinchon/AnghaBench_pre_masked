
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmc_test_card {int buffer; TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int max_blk_count; int max_req_size; int max_seg_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct mmc_test_card*,struct scatterlist*,int,int ,unsigned int,int,int) ;
 int FUNC_2 (struct scatterlist*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mmc_test_card *VAR_2)
{
 unsigned int VAR_3;
 struct scatterlist VAR_4;

 if (VAR_2->card->host->max_blk_count == 1)
  return VAR_1;

 VAR_3 = VAR_0 * 2;
 VAR_3 = FUNC_0(VAR_3, VAR_2->card->host->max_req_size);
 VAR_3 = FUNC_0(VAR_3, VAR_2->card->host->max_seg_size);
 VAR_3 = FUNC_0(VAR_3, VAR_2->card->host->max_blk_count * 512);

 if (VAR_3 < 1024)
  return VAR_1;

 FUNC_2(&VAR_4, VAR_2->buffer, VAR_3);

 return FUNC_1(VAR_2, &VAR_4, 1, 0, VAR_3 / 512, 512, 1);
}
