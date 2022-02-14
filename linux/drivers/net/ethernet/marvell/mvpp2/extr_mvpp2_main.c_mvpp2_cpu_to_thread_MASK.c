
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2 {int nthreads; } ;



__attribute__((used)) static inline u32 FUNC_0(struct mvpp2 *VAR_0, int VAR_1)
{
 return VAR_1 % VAR_0->nthreads;
}
