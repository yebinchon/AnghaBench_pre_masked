
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct tsi721_bdma_chan {scalar_t__ wr_count; scalar_t__ wr_count_next; scalar_t__ regs; int id; TYPE_2__ dchan; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tsi721_bdma_chan*) ;
 int FUNC_4 (int ,int *,char*,int ,scalar_t__,int ) ;
 int FUNC_5 (int *,char*,int ,...) ;

__attribute__((used)) static void FUNC_6(struct tsi721_bdma_chan *VAR_3)
{
 if (!FUNC_3(VAR_3)) {
  FUNC_5(&VAR_3->dchan.dev->device,
   "DMAC%d Attempt to start non-idle channel",
   VAR_3->id);
  return;
 }

 if (VAR_3->wr_count == VAR_3->wr_count_next) {
  FUNC_5(&VAR_3->dchan.dev->device,
   "DMAC%d Attempt to start DMA with no BDs ready %d",
   VAR_3->id, FUNC_2(VAR_2));
  return;
 }

 FUNC_4(VAR_0, &VAR_3->dchan.dev->device, "DMAC%d (wrc=%d) %d",
    VAR_3->id, VAR_3->wr_count_next,
    FUNC_2(VAR_2));

 FUNC_1(VAR_3->wr_count_next,
  VAR_3->regs + VAR_1);
 FUNC_0(VAR_3->regs + VAR_1);

 VAR_3->wr_count = VAR_3->wr_count_next;
}
