
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1362_hcd {int stat1; int stat2; int stat4; int stat8; int stat16; } ;



__attribute__((used)) static inline void FUNC_0(struct isp1362_hcd *VAR_0, void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;
 if (!(VAR_2 & 0xf))
  VAR_0->stat16++;
 else if (!(VAR_2 & 0x7))
  VAR_0->stat8++;
 else if (!(VAR_2 & 0x3))
  VAR_0->stat4++;
 else if (!(VAR_2 & 0x1))
  VAR_0->stat2++;
 else
  VAR_0->stat1++;
}
