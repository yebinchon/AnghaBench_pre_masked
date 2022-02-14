
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct s3cmci_host {int real_rate; int bus_width; scalar_t__ base; TYPE_3__* pdata; int is2440; TYPE_2__* pdev; } ;
struct mmc_ios {int power_mode; int clock; int bus_width; int vdd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_6__ {int (* set_power ) (int,int ) ;} ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;





 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct s3cmci_host*,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 struct s3cmci_host* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (struct s3cmci_host*,struct mmc_ios*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_6, struct mmc_ios *VAR_7)
{
 struct s3cmci_host *VAR_8 = FUNC_4(VAR_6);
 u32 VAR_9;



 VAR_9 = FUNC_5(VAR_8->base + VAR_0);

 switch (VAR_7->power_mode) {
 case 129:
 case 128:

  if (!VAR_8->pdev->dev.of_node)
   FUNC_6(FUNC_0(5), 6, FUNC_1(2),
           VAR_4);

  if (VAR_8->pdata->set_power)
   VAR_8->pdata->set_power(VAR_7->power_mode, VAR_7->vdd);

  if (!VAR_8->is2440)
   VAR_9 |= VAR_2;

  break;

 case 130:
 default:
  if (!VAR_8->pdev->dev.of_node)
   FUNC_3(FUNC_0(5), 0);

  if (VAR_8->is2440)
   VAR_9 |= VAR_3;

  if (VAR_8->pdata->set_power)
   VAR_8->pdata->set_power(VAR_7->power_mode, VAR_7->vdd);

  break;
 }

 FUNC_7(VAR_8, VAR_7);


 if (VAR_7->clock)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;

 FUNC_10(VAR_9, VAR_8->base + VAR_0);

 if ((VAR_7->power_mode == 129) ||
     (VAR_7->power_mode == 128)) {
  FUNC_2(VAR_8, VAR_5, "running at %lukHz (requested: %ukHz).\n",
   VAR_8->real_rate/1000, VAR_7->clock/1000);
 } else {
  FUNC_2(VAR_8, VAR_5, "powered down.\n");
 }

 VAR_8->bus_width = VAR_7->bus_width;
}
