
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue {struct mmc_blk_data* blkdata; } ;
struct mmc_card {int dummy; } ;
struct TYPE_2__ {struct mmc_card* card; } ;
struct mmc_blk_data {TYPE_1__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct mmc_card*) ;

__attribute__((used)) static void FUNC_2(struct mmc_queue *VAR_2, struct request *VAR_3)
{
 struct mmc_blk_data *VAR_4 = VAR_2->blkdata;
 struct mmc_card *VAR_5 = VAR_4->queue.card;
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_5);
 FUNC_0(VAR_3, VAR_6 ? VAR_0 : VAR_1);
}
