
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_blk_ioc_data {int dummy; } ;
typedef struct mmc_blk_ioc_data u8 ;
typedef int u32 ;
struct request {int dummy; } ;
struct mmc_queue_req {int drv_op; int ioc_count; int drv_op_result; struct mmc_blk_ioc_data** drv_op_data; } ;
struct mmc_queue {struct mmc_blk_data* blkdata; struct mmc_card* card; } ;
struct TYPE_3__ {int boot_ro_lock; int part_time; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;
struct mmc_blk_data {TYPE_2__* disk; } ;
struct TYPE_4__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct mmc_card*,struct mmc_blk_data*,struct mmc_blk_ioc_data*) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct mmc_card*,int ) ;
 int FUNC_3 (struct mmc_card*,struct mmc_blk_ioc_data**) ;
 int FUNC_4 (struct mmc_card*,int*) ;
 int FUNC_5 (struct mmc_card*,int ,int ,int,int ) ;
 int FUNC_6 (char*,int ,...) ;
 struct mmc_queue_req* FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct mmc_queue *VAR_6, struct request *VAR_7)
{
 struct mmc_queue_req *VAR_8;
 struct mmc_card *VAR_9 = VAR_6->card;
 struct mmc_blk_data *VAR_10 = VAR_6->blkdata;
 struct mmc_blk_ioc_data **VAR_11;
 bool VAR_12;
 u8 **VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_8 = FUNC_7(VAR_7);
 VAR_12 = (VAR_8->drv_op == 128);

 switch (VAR_8->drv_op) {
 case 129:
 case 128:
  VAR_11 = VAR_8->drv_op_data;
  for (VAR_16 = 0, VAR_15 = 0; VAR_16 < VAR_8->ioc_count; VAR_16++) {
   VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_11[VAR_16]);
   if (VAR_15)
    break;
  }

  if (VAR_12)
   FUNC_2(VAR_9, 0);
  break;
 case 132:
  VAR_15 = FUNC_5(VAR_9, VAR_5, VAR_3,
     VAR_9->ext_csd.boot_ro_lock |
     VAR_4,
     VAR_9->ext_csd.part_time);
  if (VAR_15)
   FUNC_6("%s: Locking boot partition ro until next power on failed: %d\n",
          VAR_10->disk->disk_name, VAR_15);
  else
   VAR_9->ext_csd.boot_ro_lock |=
    VAR_4;
  break;
 case 131:
  VAR_15 = FUNC_4(VAR_9, &VAR_14);
  if (!VAR_15)
   VAR_15 = VAR_14;
  break;
 case 130:
  VAR_13 = VAR_8->drv_op_data;
  VAR_15 = FUNC_3(VAR_9, VAR_13);
  break;
 default:
  FUNC_6("%s: unknown driver specific operation\n",
         VAR_10->disk->disk_name);
  VAR_15 = -VAR_2;
  break;
 }
 VAR_8->drv_op_result = VAR_15;
 FUNC_1(VAR_7, VAR_15 ? VAR_0 : VAR_1);
}
