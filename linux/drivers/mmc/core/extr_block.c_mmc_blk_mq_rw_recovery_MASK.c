
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct request {TYPE_1__* rq_disk; } ;
struct TYPE_8__ {int bytes_xfered; int blocks; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {scalar_t__ error; } ;
struct mmc_blk_request {TYPE_4__ data; TYPE_3__ cmd; TYPE_2__ sbc; } ;
struct mmc_queue_req {scalar_t__ retries; struct mmc_blk_request brq; } ;
struct mmc_queue {struct mmc_card* card; struct mmc_blk_data* blkdata; } ;
struct mmc_card {int host; } ;
struct mmc_blk_data {int dummy; } ;
struct TYPE_5__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mmc_card*,int*,int ) ;
 scalar_t__ FUNC_1 (struct mmc_blk_request*) ;
 int FUNC_2 (struct mmc_card*,struct request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mmc_queue*,struct request*) ;
 scalar_t__ FUNC_5 (struct mmc_blk_data*,int ,int) ;
 scalar_t__ FUNC_6 (struct request*,int) ;
 scalar_t__ FUNC_7 (struct mmc_card*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mmc_card*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct mmc_card*,int*) ;
 int FUNC_13 (char*,int ) ;
 struct mmc_queue_req* FUNC_14 (struct request*) ;
 scalar_t__ FUNC_15 (struct request*) ;

__attribute__((used)) static void FUNC_16(struct mmc_queue *VAR_7, struct request *VAR_8)
{
 int VAR_9 = FUNC_15(VAR_8) == VAR_5 ? VAR_0 : VAR_1;
 struct mmc_queue_req *VAR_10 = FUNC_14(VAR_8);
 struct mmc_blk_request *VAR_11 = &VAR_10->brq;
 struct mmc_blk_data *VAR_12 = VAR_7->blkdata;
 struct mmc_card *VAR_13 = VAR_7->card;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;





 VAR_16 = FUNC_0(VAR_13, &VAR_14, 0);
 if (VAR_16 || FUNC_6(VAR_8, VAR_14))
  VAR_11->data.bytes_xfered = 0;

 FUNC_11(VAR_13->host);





 if (VAR_16)
  VAR_16 = FUNC_0(VAR_13, &VAR_14, 0);





 if (VAR_16 && FUNC_8(VAR_13->host))
  return;


 if (!FUNC_9(VAR_7->card->host) &&
     (VAR_16 || !FUNC_3(VAR_14)))
  VAR_16 = FUNC_2(VAR_7->card, VAR_8);





 if (!VAR_16 && FUNC_1(VAR_11) && FUNC_7(VAR_13) &&
     FUNC_15(VAR_8) == VAR_6) {
  if (FUNC_12(VAR_13, &VAR_15))
   VAR_11->data.bytes_xfered = 0;
  else
   VAR_11->data.bytes_xfered = VAR_15 << 9;
 }


 if (!FUNC_9(VAR_7->card->host) &&
     VAR_16 && FUNC_5(VAR_12, VAR_13->host, VAR_9)) {
  FUNC_13("%s: recovery failed!\n", VAR_8->rq_disk->disk_name);
  VAR_10->retries = VAR_4;
  return;
 }





 if (VAR_11->data.bytes_xfered)
  return;


 if (VAR_10->retries + 1 == VAR_3)
  FUNC_5(VAR_12, VAR_13->host, VAR_9);


 if (VAR_11->sbc.error || VAR_11->cmd.error)
  return;


 if (VAR_10->retries < VAR_3 - VAR_2) {
  VAR_10->retries = VAR_3 - VAR_2;
  return;
 }


 if (!FUNC_10(VAR_13) && FUNC_15(VAR_8) == VAR_5 &&
     VAR_11->data.blocks > 1) {

  FUNC_4(VAR_7, VAR_8);
  return;
 }
}
