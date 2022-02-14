
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct stfsm *VAR_1)
{
 return (FUNC_0(VAR_1->base + VAR_0) >> 5) & 0x7f;
}
