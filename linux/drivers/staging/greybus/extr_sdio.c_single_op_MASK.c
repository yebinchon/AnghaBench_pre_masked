
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmc_command {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct mmc_command *VAR_2)
{
 u32 VAR_3 = VAR_2->opcode;

 return VAR_3 == VAR_1 ||
        VAR_3 == VAR_0;
}
