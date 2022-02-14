
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_command {int flags; void** resp; } ;
struct meson_host {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct meson_host* FUNC_0 (struct mmc_host*) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_6, struct mmc_command *VAR_7)
{
 struct meson_host *VAR_8 = FUNC_0(VAR_6);

 if (VAR_7->flags & VAR_0) {
  VAR_7->resp[0] = FUNC_1(VAR_8->regs + VAR_5);
  VAR_7->resp[1] = FUNC_1(VAR_8->regs + VAR_4);
  VAR_7->resp[2] = FUNC_1(VAR_8->regs + VAR_3);
  VAR_7->resp[3] = FUNC_1(VAR_8->regs + VAR_2);
 } else if (VAR_7->flags & VAR_1) {
  VAR_7->resp[0] = FUNC_1(VAR_8->regs + VAR_2);
 }
}
