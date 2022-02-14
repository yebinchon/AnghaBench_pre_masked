
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmc {TYPE_1__* soc; } ;
struct tegra_io_pad_soc {scalar_t__ voltage; } ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;
struct TYPE_2__ {scalar_t__ has_impl_33v_pwr; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct tegra_io_pad_soc* FUNC_1 (struct tegra_pmc*,int) ;
 int FUNC_2 (struct tegra_pmc*,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_pmc *VAR_7, enum tegra_io_pad VAR_8)
{
 const struct tegra_io_pad_soc *VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_9->voltage == VAR_6)
  return -VAR_1;

 if (VAR_7->soc->has_impl_33v_pwr)
  VAR_10 = FUNC_2(VAR_7, VAR_2);
 else
  VAR_10 = FUNC_2(VAR_7, VAR_3);

 if ((VAR_10 & FUNC_0(VAR_9->voltage)) == 0)
  return VAR_4;

 return VAR_5;
}
