
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0, void *VAR_1, int VAR_2,
      int VAR_3)
{
 volatile unsigned char *VAR_4;
 unsigned char *VAR_5 = VAR_1;
 VAR_2 <<= 1;
 VAR_4 = (unsigned char *)(VAR_0->mem_start+VAR_2);

 if (VAR_2 & 2) {
  *VAR_5++ = VAR_4[-1];
  VAR_4 += 2;
  VAR_3--;
 }
 while (VAR_3 >= 2) {
  *(unsigned short *)VAR_5 = *(unsigned short volatile *)VAR_4;
  VAR_4 += 4;
  VAR_5 += 2;
  VAR_3 -= 2;
 }

 if (VAR_3)
  *VAR_5 = *VAR_4;
}
