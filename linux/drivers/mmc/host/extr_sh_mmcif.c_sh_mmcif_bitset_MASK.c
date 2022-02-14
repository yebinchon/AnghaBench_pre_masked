
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mmcif_host {scalar_t__ addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sh_mmcif_host *VAR_0,
     unsigned int VAR_1, u32 VAR_2)
{
 FUNC_1(VAR_2 | FUNC_0(VAR_0->addr + VAR_1), VAR_0->addr + VAR_1);
}
