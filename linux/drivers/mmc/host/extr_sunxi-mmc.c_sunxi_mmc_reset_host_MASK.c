
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_mmc_host {int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sunxi_mmc_host*,int ) ;
 int FUNC_3 (struct sunxi_mmc_host*,int ,int) ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct sunxi_mmc_host *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + FUNC_4(250);
 u32 VAR_6;

 FUNC_3(VAR_4, VAR_1, VAR_2);
 do {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
 } while (FUNC_5(VAR_3, VAR_5) && (VAR_6 & VAR_2));

 if (VAR_6 & VAR_2) {
  FUNC_0(FUNC_1(VAR_4->mmc), "fatal err reset timeout\n");
  return -VAR_0;
 }

 return 0;
}
