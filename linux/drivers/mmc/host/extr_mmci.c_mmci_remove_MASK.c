
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variant_data {scalar_t__ mmcimask1; } ;
struct mmci_host {int clk; scalar_t__ base; struct variant_data* variant; } ;
struct mmc_host {int dummy; } ;
struct amba_device {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mmc_host* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mmci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmci_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct amba_device *VAR_4)
{
 struct mmc_host *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5) {
  struct mmci_host *VAR_6 = FUNC_3(VAR_5);
  struct variant_data *VAR_7 = VAR_6->variant;





  FUNC_6(&VAR_4->dev);

  FUNC_4(VAR_5);

  FUNC_7(0, VAR_6->base + VAR_2);

  if (VAR_7->mmcimask1)
   FUNC_7(0, VAR_6->base + VAR_3);

  FUNC_7(0, VAR_6->base + VAR_0);
  FUNC_7(0, VAR_6->base + VAR_1);

  FUNC_5(VAR_6);
  FUNC_1(VAR_6->clk);
  FUNC_2(VAR_5);
 }

 return 0;
}
