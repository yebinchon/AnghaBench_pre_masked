
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ftm_rtc {scalar_t__ base; scalar_t__ big_endian; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ftm_rtc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->big_endian)
  FUNC_1(VAR_2, VAR_0->base + VAR_1);
 else
  FUNC_0(VAR_2, VAR_0->base + VAR_1);
}
