
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int* resp; } ;
struct mmc_request {int cap_cmd_during_tfr; TYPE_1__* data; int * sbc; } ;
struct mmc_test_req {TYPE_3__ status; int sbc; struct mmc_request mrq; } ;
struct mmc_test_area {int blocks; int max_tfr; int sg_len; int sg; } ;
struct mmc_test_card {TYPE_2__* card; struct mmc_test_area area; } ;
struct mmc_host {int dummy; } ;
struct TYPE_5__ {struct mmc_host* host; } ;
struct TYPE_4__ {scalar_t__ stop; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (struct mmc_test_req*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 scalar_t__ FUNC_4 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_5 (struct mmc_test_card*,struct mmc_request*) ;
 int FUNC_6 (struct mmc_test_card*,struct mmc_request*,int ,int ,unsigned int,int,int,int) ;
 struct mmc_test_req* FUNC_7 () ;
 int FUNC_8 (struct mmc_test_card*,TYPE_3__*) ;
 int FUNC_9 (struct mmc_test_card*,struct mmc_request*,struct mmc_request*) ;
 int FUNC_10 (struct mmc_test_card*) ;
 int FUNC_11 (struct mmc_host*,scalar_t__,int ) ;
 int FUNC_12 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_13 (struct mmc_host*,struct mmc_request*) ;
 unsigned long FUNC_14 (int) ;
 int FUNC_15 (char*,int ,int,...) ;
 int FUNC_16 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct mmc_test_card *VAR_8,
         unsigned int VAR_9, int VAR_10,
         int VAR_11, int VAR_12, int VAR_13)
{
 struct mmc_test_req *VAR_14 = FUNC_7();
 struct mmc_host *VAR_15 = VAR_8->card->host;
 struct mmc_test_area *VAR_16 = &VAR_8->area;
 struct mmc_request *VAR_17;
 unsigned long VAR_18;
 bool VAR_19 = 0;
 int VAR_20 = 0, VAR_21;
 u32 VAR_22 = 0;
 int VAR_23 = 0;

 if (!VAR_14)
  return -VAR_1;

 VAR_17 = &VAR_14->mrq;
 if (VAR_10)
  VAR_17->sbc = &VAR_14->sbc;
 VAR_17->cap_cmd_during_tfr = 1;

 FUNC_6(VAR_8, VAR_17, VAR_16->sg, VAR_16->sg_len, VAR_9, VAR_16->blocks,
        512, VAR_12);

 if (VAR_10 && VAR_16->blocks > 1 && !VAR_17->sbc) {
  VAR_20 = FUNC_2(VAR_15) ?
         VAR_5 :
         VAR_6;
  goto out_free;
 }


 if (VAR_13) {
  VAR_20 = FUNC_9(VAR_8, VAR_17, ((void*)0));
  if (VAR_20)
   goto out_free;
 } else {
  FUNC_12(VAR_15, VAR_17);
 }

 VAR_18 = VAR_7 + FUNC_14(3000);
 do {
  VAR_23 += 1;


  VAR_21 = FUNC_8(VAR_8, &VAR_14->status);
  if (VAR_21)
   break;

  VAR_22 = VAR_14->status.resp[0];
  if (VAR_22 & VAR_3) {
   VAR_21 = -VAR_0;
   break;
  }

  if (FUNC_4(VAR_15, VAR_17))
   break;

  VAR_19 = FUNC_16(VAR_7, VAR_18);
  if (VAR_19) {
   FUNC_15("%s: timeout waiting for Tran state status %#x\n",
    FUNC_3(VAR_15), VAR_22);
   VAR_21 = -VAR_2;
   break;
  }
 } while (VAR_11 && FUNC_0(VAR_22) != VAR_4);


 if (VAR_13) {
  VAR_20 = FUNC_9(VAR_8, ((void*)0), VAR_17);
 } else {
  FUNC_13(VAR_8->card->host, VAR_17);
 }





 if (VAR_17->data->stop && (VAR_17->data->error || !VAR_17->sbc)) {
  if (VAR_20)
   FUNC_11(VAR_15, VAR_17->data->stop, 0);
  else
   VAR_20 = FUNC_11(VAR_15, VAR_17->data->stop, 0);
 }

 if (VAR_20)
  goto out_free;

 if (VAR_21) {
  FUNC_15("%s: Send Status failed: status %#x, error %d\n",
   FUNC_3(VAR_8->card->host), VAR_22, VAR_21);
 }

 VAR_20 = FUNC_5(VAR_8, VAR_17);
 if (VAR_20)
  goto out_free;

 VAR_20 = FUNC_10(VAR_8);
 if (VAR_20)
  goto out_free;

 if (VAR_11 && (VAR_16->blocks + 1) << 9 > VAR_16->max_tfr)
  FUNC_15("%s: %d commands completed during transfer of %u blocks\n",
   FUNC_3(VAR_8->card->host), VAR_23, VAR_16->blocks);

 if (VAR_21)
  VAR_20 = VAR_21;
out_free:
 FUNC_1(VAR_14);

 return VAR_20;
}
