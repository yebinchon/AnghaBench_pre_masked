
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int addr; } ;
struct mmc_command {int * resp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sh_mmcif_host *VAR_1,
      struct mmc_command *VAR_2)
{
 VAR_2->resp[0] = FUNC_0(VAR_1->addr, VAR_0);
}
