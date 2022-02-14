
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int discard_granularity; scalar_t__ discard_alignment; } ;
struct request_queue {TYPE_1__ limits; } ;
struct nvme_ns {int sws; int sgs; struct nvme_ctrl* ctrl; } ;
struct nvme_dsm_range {int dummy; } ;
struct nvme_ctrl {int oncs; int quirks; scalar_t__ nr_streams; } ;
struct gendisk {struct request_queue* queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct request_queue*) ;
 scalar_t__ FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,int) ;
 int FUNC_5 (struct request_queue*,int ) ;
 int FUNC_6 (struct request_queue*) ;

__attribute__((used)) static void FUNC_7(struct gendisk *VAR_6, struct nvme_ns *VAR_7)
{
 struct nvme_ctrl *VAR_8 = VAR_7->ctrl;
 struct request_queue *VAR_9 = VAR_6->queue;
 u32 VAR_10 = FUNC_6(VAR_9);

 if (!(VAR_8->oncs & VAR_0)) {
  FUNC_1(VAR_4, VAR_9);
  return;
 }

 if (VAR_8->nr_streams && VAR_7->sws && VAR_7->sgs)
  VAR_10 *= VAR_7->sws * VAR_7->sgs;

 FUNC_0(VAR_3 / sizeof(struct nvme_dsm_range) <
   VAR_1);

 VAR_9->limits.discard_alignment = 0;
 VAR_9->limits.discard_granularity = VAR_10;


 if (FUNC_2(VAR_4, VAR_9))
  return;

 FUNC_3(VAR_9, VAR_5);
 FUNC_4(VAR_9, VAR_1);

 if (VAR_8->quirks & VAR_2)
  FUNC_5(VAR_9, VAR_5);
}
