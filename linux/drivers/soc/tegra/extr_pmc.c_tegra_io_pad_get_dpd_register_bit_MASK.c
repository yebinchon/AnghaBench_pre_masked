
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmc {TYPE_2__* soc; int dev; } ;
struct tegra_io_pad_soc {int dpd; } ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {unsigned long dpd_status; unsigned long dpd_req; unsigned long dpd2_status; unsigned long dpd2_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 struct tegra_io_pad_soc* FUNC_2 (struct tegra_pmc*,int) ;

__attribute__((used)) static int FUNC_3(struct tegra_pmc *VAR_3,
          enum tegra_io_pad VAR_4,
          unsigned long *VAR_5,
          unsigned long *VAR_6,
          u32 *VAR_7)
{
 const struct tegra_io_pad_soc *VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_8) {
  FUNC_1(VAR_3->dev, "invalid I/O pad ID %u\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_8->dpd == VAR_2)
  return -VAR_1;

 *VAR_7 = FUNC_0(VAR_8->dpd % 32);

 if (VAR_8->dpd < 32) {
  *VAR_6 = VAR_3->soc->regs->dpd_status;
  *VAR_5 = VAR_3->soc->regs->dpd_req;
 } else {
  *VAR_6 = VAR_3->soc->regs->dpd2_status;
  *VAR_5 = VAR_3->soc->regs->dpd2_req;
 }

 return 0;
}
