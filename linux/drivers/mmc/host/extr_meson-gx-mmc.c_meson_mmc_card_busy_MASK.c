
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct meson_host {scalar_t__ regs; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct meson_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_2)
{
 struct meson_host *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_3->regs + VAR_0);


 return !(FUNC_0(VAR_1, VAR_4) & 0xf);
}
