
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char FUNC_0(unsigned short VAR_0)
{
 unsigned char VAR_1;

 __asm__ __volatile__ ("inb %w1,%b0" : "=a" (VAR_1) : "d" (VAR_0));
 return VAR_1;
}
