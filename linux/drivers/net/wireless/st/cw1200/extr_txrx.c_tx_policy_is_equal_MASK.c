
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_policy {int defined; int* raw; } ;


 scalar_t__ FUNC_0 (int*,int*,size_t) ;

__attribute__((used)) static inline bool FUNC_1(const struct tx_policy *VAR_0,
     const struct tx_policy *VAR_1)
{
 size_t VAR_2 = VAR_0->defined >> 1;
 if (VAR_0->defined > VAR_1->defined)
  return 0;
 if (VAR_2) {
  if (FUNC_0(VAR_0->raw, VAR_1->raw, VAR_2))
   return 0;
 }
 if (VAR_0->defined & 1) {
  if ((VAR_0->raw[VAR_2] & 0x0F) != (VAR_1->raw[VAR_2] & 0x0F))
   return 0;
 }
 return 1;
}
