
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ftm_rtc {scalar_t__ base; scalar_t__ big_endian; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct ftm_rtc *VAR_0, u32 VAR_1)
{
 if (VAR_0->big_endian)
  return FUNC_1(VAR_0->base + VAR_1);
 else
  return FUNC_0(VAR_0->base + VAR_1);
}
