
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct igc_ring {int dummy; } ;


 int FUNC_0 (struct igc_ring*,scalar_t__ const) ;
 scalar_t__ const FUNC_1 (struct igc_ring*) ;

__attribute__((used)) static inline int FUNC_2(struct igc_ring *VAR_0, const u16 VAR_1)
{
 if (FUNC_1(VAR_0) >= VAR_1)
  return 0;
 return FUNC_0(VAR_0, VAR_1);
}
