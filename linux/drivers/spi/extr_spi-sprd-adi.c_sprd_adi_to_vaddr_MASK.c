
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sprd_adi {unsigned long slave_pbase; unsigned long slave_vbase; } ;



__attribute__((used)) static unsigned long FUNC_0(struct sprd_adi *VAR_0, u32 VAR_1)
{
 return (VAR_1 - VAR_0->slave_pbase + VAR_0->slave_vbase);
}
