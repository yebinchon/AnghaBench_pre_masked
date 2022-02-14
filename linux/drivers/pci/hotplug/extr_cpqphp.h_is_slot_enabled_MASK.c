
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct controller {scalar_t__ hpc_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct controller *VAR_1, u8 VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_1->hpc_reg + VAR_0);
 VAR_3 &= (0x01 << VAR_2);
 return VAR_3 ? 1 : 0;
}
