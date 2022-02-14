
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_long ;



__attribute__((used)) static int FUNC_0(u_long VAR_0, u_long VAR_1)
{
 if ((VAR_0<<16L) < VAR_0)
  VAR_0 = 0xffff0000L ;
 else
  VAR_0 <<= 16L ;
 if (!VAR_1)
  return 0;
 return (int)(VAR_0/VAR_1) ;
}
