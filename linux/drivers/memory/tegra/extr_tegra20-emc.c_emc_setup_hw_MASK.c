
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_emc {scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct tegra_emc *VAR_9)
{
 u32 VAR_10 = VAR_8 | VAR_2;
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_9->regs + VAR_1);





 if (!(VAR_11 & VAR_3) &&
     !(VAR_11 & VAR_5)) {
  FUNC_0(VAR_9->dev,
   "bootloader didn't specify DRAM auto-suspend mode\n");
  return -VAR_0;
 }


 VAR_11 |= VAR_4;
 FUNC_2(VAR_11, VAR_9->regs + VAR_1);


 FUNC_2(VAR_10, VAR_9->regs + VAR_6);
 FUNC_2(VAR_10, VAR_9->regs + VAR_7);

 return 0;
}
