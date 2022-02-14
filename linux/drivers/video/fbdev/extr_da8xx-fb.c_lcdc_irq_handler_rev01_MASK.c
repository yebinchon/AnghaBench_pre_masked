
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int which_dma_channel_done; int dma_start; int dma_end; int vsync_flag; int vsync_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,struct da8xx_fb_par*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_15, void *VAR_16)
{
 struct da8xx_fb_par *VAR_17 = VAR_16;
 u32 VAR_18 = FUNC_3(VAR_11);
 u32 VAR_19;

 if ((VAR_18 & VAR_12) && (VAR_18 & VAR_8)) {
  FUNC_1(VAR_0);
  FUNC_4(VAR_18, VAR_11);
  FUNC_2();
 } else if (VAR_18 & VAR_9) {






  FUNC_1(VAR_0);

  FUNC_4(VAR_18, VAR_11);


  VAR_19 = FUNC_3(VAR_10);
  VAR_19 &= ~VAR_13;
  FUNC_4(VAR_19, VAR_10);


  FUNC_0(VAR_14, VAR_17);
 } else {
  FUNC_4(VAR_18, VAR_11);

  if (VAR_18 & VAR_6) {
   VAR_17->which_dma_channel_done = 0;
   FUNC_4(VAR_17->dma_start,
       VAR_2);
   FUNC_4(VAR_17->dma_end,
       VAR_4);
   VAR_17->vsync_flag = 1;
   FUNC_5(&VAR_17->vsync_wait);
  }

  if (VAR_18 & VAR_7) {
   VAR_17->which_dma_channel_done = 1;
   FUNC_4(VAR_17->dma_start,
       VAR_3);
   FUNC_4(VAR_17->dma_end,
       VAR_5);
   VAR_17->vsync_flag = 1;
   FUNC_5(&VAR_17->vsync_wait);
  }
 }

 return VAR_1;
}
