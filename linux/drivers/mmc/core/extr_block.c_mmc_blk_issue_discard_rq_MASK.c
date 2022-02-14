
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue {struct mmc_blk_data* blkdata; } ;
struct mmc_card {int quirks; scalar_t__ erase_arg; int host; } ;
struct TYPE_2__ {struct mmc_card* card; } ;
struct mmc_blk_data {TYPE_1__ queue; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct request*,int ) ;
 unsigned int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (struct mmc_blk_data*,int ,int) ;
 int FUNC_4 (struct mmc_blk_data*,int) ;
 int FUNC_5 (struct mmc_card*) ;
 int FUNC_6 (struct mmc_card*,unsigned int,unsigned int,scalar_t__) ;
 int FUNC_7 (struct mmc_card*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct mmc_queue *VAR_11, struct request *VAR_12)
{
 struct mmc_blk_data *VAR_13 = VAR_11->blkdata;
 struct mmc_card *VAR_14 = VAR_13->queue.card;
 unsigned int VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = VAR_8;
 blk_status_t VAR_19 = VAR_2;

 if (!FUNC_5(VAR_14)) {
  VAR_19 = VAR_1;
  goto fail;
 }

 VAR_15 = FUNC_1(VAR_12);
 VAR_16 = FUNC_2(VAR_12);

 do {
  VAR_17 = 0;
  if (VAR_14->quirks & VAR_9) {
   VAR_17 = FUNC_7(VAR_14, VAR_4,
      VAR_6,
      VAR_14->erase_arg == VAR_10 ?
      VAR_7 :
      VAR_5,
      0);
  }
  if (!VAR_17)
   VAR_17 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_14->erase_arg);
 } while (VAR_17 == -VAR_3 && !FUNC_3(VAR_13, VAR_14->host, VAR_18));
 if (VAR_17)
  VAR_19 = VAR_0;
 else
  FUNC_4(VAR_13, VAR_18);
fail:
 FUNC_0(VAR_12, VAR_19);
}
