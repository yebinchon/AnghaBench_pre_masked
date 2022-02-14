
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vub300_mmc_host {int* fbs; int bus_width; } ;



__attribute__((used)) static void FUNC_0(struct vub300_mmc_host *VAR_0,
        u32 VAR_1)
{
 if ((0xFBFFFE00 & VAR_1) == 0x80022200)
  VAR_0->fbs[1] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[1]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80022000)
  VAR_0->fbs[1] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[1]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80042200)
  VAR_0->fbs[2] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[2]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80042000)
  VAR_0->fbs[2] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[2]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80062200)
  VAR_0->fbs[3] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[3]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80062000)
  VAR_0->fbs[3] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[3]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80082200)
  VAR_0->fbs[4] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[4]);
 else if ((0xFBFFFE00 & VAR_1) == 0x80082000)
  VAR_0->fbs[4] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[4]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800A2200)
  VAR_0->fbs[5] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[5]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800A2000)
  VAR_0->fbs[5] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[5]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800C2200)
  VAR_0->fbs[6] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[6]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800C2000)
  VAR_0->fbs[6] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[6]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800E2200)
  VAR_0->fbs[7] = (VAR_1 << 8) | (0x00FF & VAR_0->fbs[7]);
 else if ((0xFBFFFE00 & VAR_1) == 0x800E2000)
  VAR_0->fbs[7] = (0xFF & VAR_1) | (0xFF00 & VAR_0->fbs[7]);
 else if ((0xFBFFFE03 & VAR_1) == 0x80000E00)
  VAR_0->bus_width = 1;
 else if ((0xFBFFFE03 & VAR_1) == 0x80000E02)
  VAR_0->bus_width = 4;
}
