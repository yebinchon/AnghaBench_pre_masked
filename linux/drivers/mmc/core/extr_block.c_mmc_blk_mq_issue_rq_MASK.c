
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue {int use_cqe; struct mmc_blk_data* blkdata; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {struct mmc_host* host; } ;
struct TYPE_2__ {struct mmc_card* card; } ;
struct mmc_blk_data {int part_type; TYPE_1__ queue; } ;
typedef enum mmc_issued { ____Placeholder_mmc_issued } mmc_issued ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;
 int FUNC_2 (struct mmc_queue*,struct request*) ;
 int FUNC_3 (struct mmc_queue*,struct request*) ;
 int FUNC_4 (struct mmc_queue*,struct request*) ;
 int FUNC_5 (struct mmc_queue*,struct request*) ;
 int FUNC_6 (struct mmc_queue*,struct request*) ;
 int FUNC_7 (struct mmc_queue*,struct request*) ;
 int FUNC_8 (struct mmc_card*,int ) ;
 int FUNC_9 (struct mmc_queue*,struct mmc_host*) ;
 int FUNC_10 (struct mmc_queue*,struct request*) ;
 int FUNC_11 (struct request*) ;

enum mmc_issued FUNC_12(struct mmc_queue *VAR_6, struct request *VAR_7)
{
 struct mmc_blk_data *VAR_8 = VAR_6->blkdata;
 struct mmc_card *VAR_9 = VAR_8->queue.card;
 struct mmc_host *VAR_10 = VAR_9->host;
 int VAR_11;

 VAR_11 = FUNC_8(VAR_9, VAR_8->part_type);
 if (VAR_11)
  return VAR_3;

 switch (FUNC_10(VAR_6, VAR_7)) {
 case 135:
  VAR_11 = FUNC_9(VAR_6, VAR_10);
  if (VAR_11)
   return VAR_2;
  switch (FUNC_11(VAR_7)) {
  case 133:
  case 132:
   FUNC_4(VAR_6, VAR_7);
   break;
  case 134:
   FUNC_3(VAR_6, VAR_7);
   break;
  case 129:
   FUNC_6(VAR_6, VAR_7);
   break;
  case 131:
   FUNC_5(VAR_6, VAR_7);
   break;
  default:
   FUNC_0(1);
   return VAR_3;
  }
  return VAR_4;
 case 136:
 case 137:
  switch (FUNC_11(VAR_7)) {
  case 131:
   VAR_11 = FUNC_1(VAR_6, VAR_7);
   break;
  case 130:
  case 128:
   if (VAR_6->use_cqe)
    VAR_11 = FUNC_2(VAR_6, VAR_7);
   else
    VAR_11 = FUNC_7(VAR_6, VAR_7);
   break;
  default:
   FUNC_0(1);
   VAR_11 = -VAR_1;
  }
  if (!VAR_11)
   return VAR_5;
  return VAR_11 == -VAR_0 ? VAR_2 : VAR_3;
 default:
  FUNC_0(1);
  return VAR_3;
 }
}
