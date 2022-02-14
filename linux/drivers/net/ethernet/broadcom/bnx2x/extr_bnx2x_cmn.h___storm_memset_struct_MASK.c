
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_0,
      u32 VAR_1, size_t VAR_2, u32 *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2/4; VAR_4++)
  FUNC_0(VAR_0, VAR_1 + (VAR_4 * 4), VAR_3[VAR_4]);
}
