
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct da8xx_fb_par {int which_dma_channel_done; int dma_start; int dma_end; int vsync_flag; int vsync_wait; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,struct da8xx_fb_par*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_18, void *VAR_19)
{
 struct da8xx_fb_par *VAR_20 = VAR_19;
 u32 VAR_21 = FUNC_4(VAR_11);

 if ((VAR_21 & VAR_13) && (VAR_21 & VAR_9)) {
  FUNC_2(VAR_0);
  FUNC_5(VAR_21, VAR_11);
  FUNC_3();
 } else if (VAR_21 & VAR_12) {






  FUNC_2(VAR_0);

  FUNC_5(VAR_21, VAR_11);


  FUNC_5(VAR_14, VAR_10);


  FUNC_1(VAR_15, VAR_20);
 } else {
  FUNC_5(VAR_21, VAR_11);

  if (VAR_21 & VAR_6) {
   VAR_20->which_dma_channel_done = 0;
   FUNC_5(VAR_20->dma_start,
       VAR_2);
   FUNC_5(VAR_20->dma_end,
       VAR_4);
   VAR_20->vsync_flag = 1;
   FUNC_6(&VAR_20->vsync_wait);
  }

  if (VAR_21 & VAR_7) {
   VAR_20->which_dma_channel_done = 1;
   FUNC_5(VAR_20->dma_start,
       VAR_3);
   FUNC_5(VAR_20->dma_end,
       VAR_5);
   VAR_20->vsync_flag = 1;
   FUNC_6(&VAR_20->vsync_wait);
  }




  if (VAR_21 & FUNC_0(0)) {
   VAR_16 = 1;
   FUNC_6(&VAR_17);
  }
 }

 FUNC_5(0, VAR_8);
 return VAR_1;
}
