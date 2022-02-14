
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int addr; } ;
struct mmc_command {int flags; void** resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sh_mmcif_host *VAR_5,
      struct mmc_command *VAR_6)
{
 if (VAR_6->flags & VAR_4) {
  VAR_6->resp[0] = FUNC_0(VAR_5->addr, VAR_3);
  VAR_6->resp[1] = FUNC_0(VAR_5->addr, VAR_2);
  VAR_6->resp[2] = FUNC_0(VAR_5->addr, VAR_1);
  VAR_6->resp[3] = FUNC_0(VAR_5->addr, VAR_0);
 } else
  VAR_6->resp[0] = FUNC_0(VAR_5->addr, VAR_0);
}
