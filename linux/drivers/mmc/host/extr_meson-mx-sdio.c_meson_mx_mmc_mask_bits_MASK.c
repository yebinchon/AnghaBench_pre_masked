
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct meson_mx_mmc_host {scalar_t__ base; } ;


 struct meson_mx_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0, char VAR_1, u32 VAR_2,
       u32 VAR_3)
{
 struct meson_mx_mmc_host *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->base + VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= (VAR_3 & VAR_2);

 FUNC_2(VAR_5, VAR_4->base + VAR_1);
}
