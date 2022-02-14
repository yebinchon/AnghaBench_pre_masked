
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, __u8 *VAR_1)
{
 if (VAR_1[VAR_0 / 8] & (1 << (VAR_0 % 8)))
  return 1;
 return 0;
}
