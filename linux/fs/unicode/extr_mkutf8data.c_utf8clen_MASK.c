
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char *VAR_0)
{
 unsigned char VAR_1 = *VAR_0;
 return 1 + (VAR_1 >= 0xC0) + (VAR_1 >= 0xE0) + (VAR_1 >= 0xF0);
}
