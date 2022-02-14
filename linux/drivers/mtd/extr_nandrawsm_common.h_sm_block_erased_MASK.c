
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sm_oob {int dummy; } ;


 int FUNC_0 (struct sm_oob*,int const*,int) ;

__attribute__((used)) static inline int FUNC_1(struct sm_oob *VAR_0)
{
 static const uint32_t VAR_1[4] = {
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };


 if (!FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0)))
  return 1;
 return 0;
}
