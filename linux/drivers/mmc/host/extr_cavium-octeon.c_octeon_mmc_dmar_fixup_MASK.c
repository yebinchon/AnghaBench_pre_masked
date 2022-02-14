
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mmc_data {int blksz; int blocks; } ;
struct mmc_command {scalar_t__ opcode; } ;
struct cvm_mmc_host {scalar_t__ n_minus_one; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct cvm_mmc_host *VAR_1,
      struct mmc_command *VAR_2,
      struct mmc_data *VAR_3,
      u64 VAR_4)
{
 if (VAR_2->opcode != VAR_0)
  return;
 if (VAR_3->blksz * VAR_3->blocks <= 1024)
  return;

 VAR_1->n_minus_one = VAR_4 + (VAR_3->blksz * VAR_3->blocks) - 1024;
 FUNC_0(VAR_1->n_minus_one, 512);
}
