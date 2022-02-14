
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct sdio_func {int num; TYPE_2__ dev; TYPE_1__* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_3__ {struct mmc_host* host; } ;


 int FUNC_0 (struct mmc_host*,int ) ;

__attribute__((used)) static void FUNC_1(struct sdio_func *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->card->host;

 VAR_0->dev.of_node = FUNC_0(VAR_1, VAR_0->num);
}
