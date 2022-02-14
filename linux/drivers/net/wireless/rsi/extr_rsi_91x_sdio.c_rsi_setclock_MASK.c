
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_sdiodev {TYPE_3__* pfunction; } ;
struct TYPE_8__ {int clock; } ;
struct mmc_host {int f_max; TYPE_4__ ios; TYPE_1__* ops; } ;
struct TYPE_7__ {TYPE_2__* card; } ;
struct TYPE_6__ {struct mmc_host* host; } ;
struct TYPE_5__ {int (* set_ios ) (struct mmc_host*,TYPE_4__*) ;} ;


 int FUNC_0 (struct mmc_host*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(struct rsi_hw *VAR_0, u32 VAR_1)
{
 struct rsi_91x_sdiodev *VAR_2 =
  (struct rsi_91x_sdiodev *)VAR_0->rsi_dev;
 struct mmc_host *VAR_3 = VAR_2->pfunction->card->host;
 u32 VAR_4;

 VAR_4 = VAR_1 * 1000;
 if (VAR_4 > VAR_3->f_max)
  VAR_4 = VAR_3->f_max;
 VAR_3->ios.clock = VAR_4;
 VAR_3->ops->set_ios(VAR_3, &VAR_3->ios);
}
