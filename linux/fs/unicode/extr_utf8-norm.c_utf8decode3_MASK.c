
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(const char *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = *VAR_0++ & 0x0F;
 VAR_1 <<= 6;
 VAR_1 |= *VAR_0++ & 0x3F;
 VAR_1 <<= 6;
 VAR_1 |= *VAR_0++ & 0x3F;

 return VAR_1;
}
