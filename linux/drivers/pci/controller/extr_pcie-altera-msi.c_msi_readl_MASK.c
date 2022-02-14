
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct altera_msi {scalar_t__ const csr_base; } ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static inline u32 FUNC_1(struct altera_msi *VAR_0, const u32 VAR_1)
{
 return FUNC_0(VAR_0->csr_base + VAR_1);
}
