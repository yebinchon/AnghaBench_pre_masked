
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct imstt_regvals {int pclk_m; int pclk_n; int pclk_p; void** lckl_p; void** mlc; } ;
struct imstt_par {int* cmap_regs; struct imstt_regvals init; } ;
typedef void* __u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (struct imstt_par *VAR_9, u_int VAR_10)
{
 struct imstt_regvals *VAR_11 = &VAR_9->init;
 __u8 VAR_12, VAR_13, VAR_14, VAR_15;
 __u8 VAR_16, VAR_17;

 switch (VAR_10) {
  default:
  case 8:
   VAR_12 = 0x80;
   VAR_13 = 0x4d;
   VAR_14 = 0xc1;
   VAR_16 = VAR_11->mlc[0];
   VAR_17 = VAR_11->lckl_p[0];
   break;
  case 16:
   VAR_12 = 0x44;
   VAR_13 = 0x55;
   VAR_14 = 0xe1;
   VAR_16 = VAR_11->mlc[1];
   VAR_17 = VAR_11->lckl_p[1];
   break;
  case 24:
   VAR_12 = 0x5e;
   VAR_13 = 0x5d;
   VAR_14 = 0xf1;
   VAR_16 = VAR_11->mlc[2];
   VAR_17 = VAR_11->lckl_p[2];
   break;
  case 32:
   VAR_12 = 0x46;
   VAR_13 = 0x5d;
   VAR_14 = 0xf1;
   VAR_16 = VAR_11->mlc[2];
   VAR_17 = VAR_11->lckl_p[2];
   break;
 }
 VAR_15 = 0x08;

 VAR_9->cmap_regs[VAR_0] = VAR_6; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = 0x00; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_7; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_11->pclk_m; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_7; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_11->pclk_n; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_7; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_11->pclk_p; FUNC_0();

 VAR_9->cmap_regs[VAR_0] = VAR_8; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_12; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_5; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_13; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_3; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_15; FUNC_0();

 VAR_9->cmap_regs[VAR_0] = VAR_6; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = 0x00; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_2; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_14; FUNC_0();

 VAR_9->cmap_regs[VAR_0] = VAR_6; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = 0x15; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_4; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_16; FUNC_0();

 VAR_9->cmap_regs[VAR_0] = VAR_6; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = 0x2a; FUNC_0();
 VAR_9->cmap_regs[VAR_0] = VAR_2; FUNC_0();
 VAR_9->cmap_regs[VAR_1] = VAR_17; FUNC_0();
}
