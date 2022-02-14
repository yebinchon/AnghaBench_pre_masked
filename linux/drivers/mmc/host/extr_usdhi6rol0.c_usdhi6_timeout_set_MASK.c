
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usdhi6_host {int rate; int mmc; struct mmc_request* mrq; } ;
struct mmc_request {TYPE_2__* data; TYPE_1__* cmd; } ;
struct TYPE_4__ {int timeout_ns; int timeout_clks; } ;
struct TYPE_3__ {int busy_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,unsigned long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct usdhi6_host*,int ) ;
 int FUNC_4 (struct usdhi6_host*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct usdhi6_host *VAR_3)
{
 struct mmc_request *VAR_4 = VAR_3->mrq;
 u32 VAR_5;
 unsigned long VAR_6;

 if (!VAR_4->data)
  VAR_6 = VAR_3->rate / 1000 * VAR_4->cmd->busy_timeout;
 else
  VAR_6 = VAR_3->rate / 1000000 * (VAR_4->data->timeout_ns / 1000) +
   VAR_4->data->timeout_clks;

 if (!VAR_6 || VAR_6 > 1 << 27)

  VAR_5 = 14;
 else if (VAR_6 < 1 << 13)

  VAR_5 = 0;
 else
  VAR_5 = FUNC_2(VAR_6) - 13;

 FUNC_0(FUNC_1(VAR_3->mmc), "Set %s timeout %lu ticks @ %lu Hz\n",
  VAR_4->data ? "data" : "cmd", VAR_6, VAR_3->rate);


 FUNC_4(VAR_3, VAR_0, (VAR_5 << VAR_2) |
       (FUNC_3(VAR_3, VAR_0) & ~VAR_1));
}
