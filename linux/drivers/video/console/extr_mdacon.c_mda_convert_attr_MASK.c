
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(u16 VAR_0)
{
 u16 VAR_1 = 0x0700;






 if (VAR_0 & 0x0800) VAR_1 = 0x7000;
 else if (VAR_0 & 0x0400) VAR_1 = 0x0100;

 return ((VAR_0 & 0x0200) << 2) |
  (VAR_0 & 0x8000) |
  (VAR_0 & 0x00ff) | VAR_1;
}
