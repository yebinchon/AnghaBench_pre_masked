
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_mmc_host {int ferror; } ;
struct mmc_ios {scalar_t__ timing; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sunxi_mmc_host*,int ) ;
 int FUNC_1 (struct sunxi_mmc_host*,int ,int ) ;
 int FUNC_2 (struct sunxi_mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static void FUNC_3(struct sunxi_mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 u32 VAR_6;


 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5->timing == VAR_1 ||
     VAR_5->timing == VAR_0)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;
 FUNC_1(VAR_4, VAR_2, VAR_6);

 VAR_4->ferror = FUNC_2(VAR_4, VAR_5);

}
