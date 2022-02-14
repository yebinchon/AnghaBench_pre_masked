
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int blksz; } ;
struct mmc_command {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mmc_command *VAR_1,
 struct mmc_data *VAR_2)
{
 return (VAR_1->opcode == VAR_0) && (VAR_2->blksz == 512);
}
