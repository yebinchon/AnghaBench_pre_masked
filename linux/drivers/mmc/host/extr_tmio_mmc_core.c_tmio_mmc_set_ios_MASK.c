
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tmio_mmc_host {int ios_lock; int clk_cache; TYPE_5__* mrq; TYPE_2__* pdev; int (* set_clock ) (struct tmio_mmc_host*,int ) ;int lock; int last_req_ts; } ;
struct mmc_ios {int power_mode; int clock; int bus_width; int vdd; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_10__ {TYPE_1__* cmd; } ;
struct TYPE_9__ {int comm; } ;
struct TYPE_8__ {struct device dev; } ;
struct TYPE_7__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;



 int FUNC_2 (TYPE_5__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct device*,char*,int ,int ,int ,int,...) ;
 int VAR_3 ;
 struct tmio_mmc_host* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct tmio_mmc_host*,int ) ;
 int FUNC_10 (struct tmio_mmc_host*,int ) ;
 int FUNC_11 (struct tmio_mmc_host*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct tmio_mmc_host*) ;
 int FUNC_14 (struct tmio_mmc_host*,int ) ;
 int FUNC_15 (struct tmio_mmc_host*,int ) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct tmio_mmc_host *VAR_6 = FUNC_4(VAR_4);
 struct device *VAR_7 = &VAR_6->pdev->dev;
 unsigned long VAR_8;

 FUNC_5(&VAR_6->ios_lock);

 FUNC_7(&VAR_6->lock, VAR_8);
 if (VAR_6->mrq) {
  if (FUNC_1(VAR_6->mrq)) {
   FUNC_3(VAR_7,
    "%s.%d: concurrent .set_ios(), clk %u, mode %u\n",
    VAR_2->comm, FUNC_12(VAR_2),
    VAR_5->clock, VAR_5->power_mode);
   VAR_6->mrq = FUNC_0(-VAR_1);
  } else {
   FUNC_3(VAR_7,
    "%s.%d: CMD%u active since %lu, now %lu!\n",
    VAR_2->comm, FUNC_12(VAR_2),
    VAR_6->mrq->cmd->opcode, VAR_6->last_req_ts,
    VAR_3);
  }
  FUNC_8(&VAR_6->lock, VAR_8);

  FUNC_6(&VAR_6->ios_lock);
  return;
 }

 VAR_6->mrq = FUNC_0(-VAR_0);

 FUNC_8(&VAR_6->lock, VAR_8);

 switch (VAR_5->power_mode) {
 case 130:
  FUNC_13(VAR_6);
  VAR_6->set_clock(VAR_6, 0);
  break;
 case 128:
  FUNC_14(VAR_6, VAR_5->vdd);
  VAR_6->set_clock(VAR_6, VAR_5->clock);
  FUNC_15(VAR_6, VAR_5->bus_width);
  break;
 case 129:
  VAR_6->set_clock(VAR_6, VAR_5->clock);
  FUNC_15(VAR_6, VAR_5->bus_width);
  break;
 }


 FUNC_16(140, 200);
 if (FUNC_2(VAR_6->mrq) == -VAR_1)
  FUNC_3(&VAR_6->pdev->dev,
   "%s.%d: IOS interrupted: clk %u, mode %u",
   VAR_2->comm, FUNC_12(VAR_2),
   VAR_5->clock, VAR_5->power_mode);
 VAR_6->mrq = ((void*)0);

 VAR_6->clk_cache = VAR_5->clock;

 FUNC_6(&VAR_6->ios_lock);
}
