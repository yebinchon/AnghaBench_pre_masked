
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {scalar_t__ afreg_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_1(struct rvu *VAR_0, u64 VAR_1, u64 VAR_2)
{
 return FUNC_0(VAR_0->afreg_base + ((VAR_1 << 28) | VAR_2));
}
