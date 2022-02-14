
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mmc_request {int dummy; } ;
struct mmc_omap_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct mmc_omap_host *VAR_2, struct mmc_request *VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 &= ~(1 << 5);
 FUNC_1(VAR_2, VAR_1, VAR_4);

 FUNC_1(VAR_2, VAR_0, 0xfd);
}
