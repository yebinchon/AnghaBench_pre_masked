
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 return ((VAR_0 & 0x1) << 4) |
        ((VAR_0 & 0x2) << 3) |
        (VAR_0 & 0x4) |
        ((VAR_0 & 0x8) >> 3) |
        ((VAR_0 & 0x10) >> 4);
}
