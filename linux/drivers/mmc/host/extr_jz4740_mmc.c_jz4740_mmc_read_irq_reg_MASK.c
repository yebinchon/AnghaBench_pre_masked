
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_mmc_host {scalar_t__ version; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_2(struct jz4740_mmc_host *VAR_2)
{
 if (VAR_2->version >= VAR_0)
  return FUNC_0(VAR_2->base + VAR_1);
 else
  return FUNC_1(VAR_2->base + VAR_1);
}
