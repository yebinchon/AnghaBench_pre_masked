
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct imstt_regvals {int pclk_m; int pclk_n; int pclk_p; } ;
struct imstt_par {int* cmap_regs; struct imstt_regvals init; } ;
typedef int __u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (struct imstt_par *VAR_8, u_int VAR_9)
{
 struct imstt_regvals *VAR_10 = &VAR_8->init;
 __u8 VAR_11 = (VAR_9 >> 3) + 2;

 VAR_8->cmap_regs[VAR_1] = 0; FUNC_0();
 VAR_8->cmap_regs[VAR_2] = VAR_5; FUNC_0();
 VAR_8->cmap_regs[VAR_0] = VAR_10->pclk_m;FUNC_0();
 VAR_8->cmap_regs[VAR_2] = VAR_6; FUNC_0();
 VAR_8->cmap_regs[VAR_0] = VAR_10->pclk_n;FUNC_0();
 VAR_8->cmap_regs[VAR_2] = VAR_7; FUNC_0();
 VAR_8->cmap_regs[VAR_0] = VAR_10->pclk_p;FUNC_0();
 VAR_8->cmap_regs[VAR_2] = VAR_3; FUNC_0();
 VAR_8->cmap_regs[VAR_0] = 0x02; FUNC_0();

 VAR_8->cmap_regs[VAR_2] = VAR_4; FUNC_0();
 VAR_8->cmap_regs[VAR_0] = VAR_11; FUNC_0();
}
