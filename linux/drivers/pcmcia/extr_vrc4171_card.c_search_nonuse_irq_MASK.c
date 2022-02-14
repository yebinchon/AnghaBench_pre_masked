
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  if (VAR_0 & (1 << VAR_1)) {
   VAR_0 &= ~(1 << VAR_1);
   return VAR_1;
  }
 }

 return -1;
}
