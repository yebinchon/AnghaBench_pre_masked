
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, unsigned int VAR_1)
{
 VAR_0[2] = (VAR_1 & 0x3F) | 0x80;
 VAR_1 >>= 6;
 VAR_0[1] = (VAR_1 & 0x3F) | 0x80;
 VAR_1 >>= 6;
 VAR_0[0] = VAR_1 | 0xE0;

 return 3;
}
