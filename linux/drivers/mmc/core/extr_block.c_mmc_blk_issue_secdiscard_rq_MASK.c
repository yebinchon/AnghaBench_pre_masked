
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue {struct mmc_blk_data* blkdata; } ;
struct mmc_card {int quirks; int host; } ;
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
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct request*,int ) ;
 unsigned int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (struct mmc_blk_data*,int ,int) ;
 int FUNC_4 (struct mmc_blk_data*,int) ;
 int FUNC_5 (struct mmc_card*) ;
 scalar_t__ FUNC_6 (struct mmc_card*) ;
 int FUNC_7 (struct mmc_card*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct mmc_card*,unsigned int,unsigned int) ;
 int FUNC_9 (struct mmc_card*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct mmc_queue *VAR_14,
           struct request *VAR_15)
{
 struct mmc_blk_data *VAR_16 = VAR_14->blkdata;
 struct mmc_card *VAR_17 = VAR_16->queue.card;
 unsigned int VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0, VAR_22 = VAR_9;
 blk_status_t VAR_23 = VAR_2;

 if (!(FUNC_5(VAR_17))) {
  VAR_23 = VAR_1;
  goto out;
 }

 VAR_18 = FUNC_1(VAR_15);
 VAR_19 = FUNC_2(VAR_15);

 if (FUNC_6(VAR_17) && !FUNC_8(VAR_17, VAR_18, VAR_19))
  VAR_20 = VAR_12;
 else
  VAR_20 = VAR_11;

retry:
 if (VAR_17->quirks & VAR_10) {
  VAR_21 = FUNC_9(VAR_17, VAR_4,
     VAR_5,
     VAR_20 == VAR_12 ?
     VAR_7 :
     VAR_6,
     0);
  if (VAR_21)
   goto out_retry;
 }

 VAR_21 = FUNC_7(VAR_17, VAR_18, VAR_19, VAR_20);
 if (VAR_21 == -VAR_3)
  goto out_retry;
 if (VAR_21) {
  VAR_23 = VAR_0;
  goto out;
 }

 if (VAR_20 == VAR_12) {
  if (VAR_17->quirks & VAR_10) {
   VAR_21 = FUNC_9(VAR_17, VAR_4,
      VAR_5,
      VAR_8,
      0);
   if (VAR_21)
    goto out_retry;
  }

  VAR_21 = FUNC_7(VAR_17, VAR_18, VAR_19, VAR_13);
  if (VAR_21 == -VAR_3)
   goto out_retry;
  if (VAR_21) {
   VAR_23 = VAR_0;
   goto out;
  }
 }

out_retry:
 if (VAR_21 && !FUNC_3(VAR_16, VAR_17->host, VAR_22))
  goto retry;
 if (!VAR_21)
  FUNC_4(VAR_16, VAR_22);
out:
 FUNC_0(VAR_15, VAR_23);
}
