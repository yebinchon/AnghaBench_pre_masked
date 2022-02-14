
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {int dev; scalar_t__ clk; } ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;


 unsigned long FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct tegra_pmc*,int,unsigned long*,unsigned long*,int *) ;
 int FUNC_4 (struct tegra_pmc*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(struct tegra_pmc *VAR_4, enum tegra_io_pad VAR_5,
    unsigned long *VAR_6, unsigned long *VAR_7,
    u32 *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_4->clk) {
  VAR_9 = FUNC_1(VAR_4->clk);
  if (!VAR_9) {
   FUNC_2(VAR_4->dev, "failed to get clock rate\n");
   return -VAR_2;
  }

  FUNC_4(VAR_4, VAR_1, VAR_0);


  VAR_10 = FUNC_0(1000000000, VAR_9);
  VAR_10 = FUNC_0(200, VAR_10);
  FUNC_4(VAR_4, VAR_10, VAR_3);
 }

 return 0;
}
