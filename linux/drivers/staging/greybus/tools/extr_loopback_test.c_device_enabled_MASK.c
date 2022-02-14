
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_test {int mask; } ;



__attribute__((used)) static inline int FUNC_0(struct loopback_test *VAR_0, int VAR_1)
{
 if (!VAR_0->mask || (VAR_0->mask & (1 << VAR_1)))
  return 1;

 return 0;
}
