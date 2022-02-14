
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct mmc_command *VAR_2)
{
 return FUNC_0(VAR_2->opcode) ||
  (VAR_2->opcode == VAR_0) ||
  (VAR_2->opcode == VAR_1);
}
