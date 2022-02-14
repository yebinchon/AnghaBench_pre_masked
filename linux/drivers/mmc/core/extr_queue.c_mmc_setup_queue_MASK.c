
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mmc_queue {int wait; int complete_lock; int complete_work; int recovery_work; int queue; } ;
struct mmc_host {int max_req_size; int max_seg_size; scalar_t__ can_dma_map_merge; int max_blk_count; } ;
struct TYPE_5__ {unsigned int data_sector_size; } ;
struct mmc_card {TYPE_1__ ext_csd; struct mmc_host* host; } ;
struct TYPE_6__ {int * dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (struct mmc_card*) ;
 scalar_t__ FUNC_14 (struct mmc_card*) ;
 TYPE_2__* FUNC_15 (struct mmc_host*) ;
 int FUNC_16 (struct mmc_host*) ;
 int VAR_4 ;
 int FUNC_17 (int ,struct mmc_card*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_21(struct mmc_queue *VAR_5, struct mmc_card *VAR_6)
{
 struct mmc_host *VAR_7 = VAR_6->host;
 unsigned VAR_8 = 512;

 FUNC_5(VAR_2, VAR_5->queue);
 FUNC_4(VAR_1, VAR_5->queue);
 if (FUNC_13(VAR_6))
  FUNC_17(VAR_5->queue, VAR_6);

 if (!FUNC_15(VAR_7)->dma_mask || !*FUNC_15(VAR_7)->dma_mask)
  FUNC_2(VAR_5->queue, VAR_0);
 FUNC_7(VAR_5->queue,
  FUNC_12(VAR_7->max_blk_count, VAR_7->max_req_size / 512));
 if (VAR_7->can_dma_map_merge)
  FUNC_1(!FUNC_3(VAR_5->queue,
       FUNC_15(VAR_7)),
       "merging was advertised but not possible");
 FUNC_9(VAR_5->queue, FUNC_16(VAR_7));

 if (FUNC_14(VAR_6))
  VAR_8 = VAR_6->ext_csd.data_sector_size;

 FUNC_6(VAR_5->queue, VAR_8);





 if (!VAR_7->can_dma_map_merge)
  FUNC_8(VAR_5->queue,
   FUNC_20(VAR_7->max_seg_size, VAR_8));

 FUNC_10(FUNC_15(VAR_7), FUNC_19(VAR_5->queue));

 FUNC_0(&VAR_5->recovery_work, VAR_4);
 FUNC_0(&VAR_5->complete_work, VAR_3);

 FUNC_18(&VAR_5->complete_lock);

 FUNC_11(&VAR_5->wait);
}
