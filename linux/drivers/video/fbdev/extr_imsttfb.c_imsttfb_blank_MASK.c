
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imstt_par {scalar_t__ ramdac; int* cmap_regs; int dc_regs; } ;
struct fb_info {struct imstt_par* par; } ;
typedef int __u32 ;


 void* VAR_0 ;




 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_10, struct fb_info *VAR_11)
{
 struct imstt_par *VAR_12 = VAR_11->par;
 __u32 VAR_13;

 VAR_13 = FUNC_1(VAR_12->dc_regs, VAR_8);
 if (VAR_10 > 0) {
  switch (VAR_10) {
  case 130:
  case 129:
   VAR_13 &= ~0x00000380;
   if (VAR_12->ramdac == VAR_1) {
    VAR_12->cmap_regs[VAR_5] = 0; FUNC_0();
    VAR_12->cmap_regs[VAR_6] = VAR_3; FUNC_0();
    VAR_12->cmap_regs[VAR_4] = 0x55; FUNC_0();
    VAR_12->cmap_regs[VAR_6] = VAR_2; FUNC_0();
    VAR_12->cmap_regs[VAR_4] = 0x11; FUNC_0();
    VAR_12->cmap_regs[VAR_6] = VAR_9; FUNC_0();
    VAR_12->cmap_regs[VAR_4] = 0x0f; FUNC_0();
    VAR_12->cmap_regs[VAR_6] = VAR_7; FUNC_0();
    VAR_12->cmap_regs[VAR_4] = 0x1f; FUNC_0();
    VAR_12->cmap_regs[VAR_6] = VAR_0; FUNC_0();
    VAR_12->cmap_regs[VAR_4] = 0xc0;
   }
   break;
  case 128:
   VAR_13 &= ~0x00000020;
   break;
  case 131:
   VAR_13 &= ~0x00000010;
   break;
  }
 } else {
  if (VAR_12->ramdac == VAR_1) {
   VAR_13 |= 0x000017b0;
   VAR_12->cmap_regs[VAR_5] = 0; FUNC_0();
   VAR_12->cmap_regs[VAR_6] = VAR_0; FUNC_0();
   VAR_12->cmap_regs[VAR_4] = 0x01; FUNC_0();
   VAR_12->cmap_regs[VAR_6] = VAR_7; FUNC_0();
   VAR_12->cmap_regs[VAR_4] = 0x00; FUNC_0();
   VAR_12->cmap_regs[VAR_6] = VAR_9; FUNC_0();
   VAR_12->cmap_regs[VAR_4] = 0x00; FUNC_0();
   VAR_12->cmap_regs[VAR_6] = VAR_2; FUNC_0();
   VAR_12->cmap_regs[VAR_4] = 0x01; FUNC_0();
   VAR_12->cmap_regs[VAR_6] = VAR_3; FUNC_0();
   VAR_12->cmap_regs[VAR_4] = 0x45; FUNC_0();
  } else
   VAR_13 |= 0x00001780;
 }
 FUNC_2(VAR_12->dc_regs, VAR_8, VAR_13);
 return 0;
}
