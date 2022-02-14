
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int dma_start; int dma_end; int p_palette_base; int palette_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 () ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_21, struct da8xx_fb_par *VAR_22)
{
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;


 VAR_25 = FUNC_2(VAR_9);
 VAR_25 &= ~(3 << 20);

 VAR_26 = FUNC_2(VAR_1);

 if (VAR_21 == VAR_17) {
  VAR_23 = VAR_22->dma_start;
  VAR_24 = VAR_22->dma_end;

  VAR_25 |= FUNC_0(VAR_0);
  if (VAR_20 == VAR_16) {
   VAR_26 |= VAR_11;
  } else {
   VAR_27 = FUNC_2(VAR_8) |
    VAR_13 |
    VAR_14 |
    VAR_7 | VAR_10;
   FUNC_3(VAR_27, VAR_8);
  }
  VAR_26 |= VAR_6;

  FUNC_3(VAR_23, VAR_2);
  FUNC_3(VAR_24, VAR_4);
  FUNC_3(VAR_23, VAR_3);
  FUNC_3(VAR_24, VAR_5);
 } else if (VAR_21 == VAR_18) {
  VAR_23 = VAR_22->p_palette_base;
  VAR_24 = VAR_23 + VAR_22->palette_sz - 1;

  VAR_25 |= FUNC_0(VAR_19);

  if (VAR_20 == VAR_16) {
   VAR_25 |= VAR_12;
  } else {
   VAR_27 = FUNC_2(VAR_8) |
    VAR_15;
   FUNC_3(VAR_27, VAR_8);
  }

  FUNC_3(VAR_23, VAR_2);
  FUNC_3(VAR_24, VAR_4);
 }

 FUNC_3(VAR_26, VAR_1);
 FUNC_3(VAR_25, VAR_9);





 FUNC_1();
}
