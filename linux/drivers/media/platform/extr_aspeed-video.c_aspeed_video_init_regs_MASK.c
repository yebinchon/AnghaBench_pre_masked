
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma; } ;
struct aspeed_video {int jpeg_quality; int frame_rate; TYPE_1__ jpeg; scalar_t__ yuv420; } ;


 int FUNC_0 (int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct aspeed_video*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_video *VAR_23)
{
 u32 VAR_24 = VAR_3 |
  FUNC_0(VAR_2, VAR_23->jpeg_quality) |
  FUNC_0(VAR_1, VAR_23->jpeg_quality | 0x10);
 u32 VAR_25 = VAR_7;
 u32 VAR_26 = VAR_21;

 if (VAR_23->frame_rate)
  VAR_25 |= FUNC_0(VAR_8, VAR_23->frame_rate);

 if (VAR_23->yuv420)
  VAR_26 |= VAR_22;


 FUNC_1(VAR_23, VAR_13, VAR_14);


 FUNC_1(VAR_23, VAR_9, 0);
 FUNC_1(VAR_23, VAR_10, 0xffffffff);


 FUNC_1(VAR_23, VAR_5, 0);
 FUNC_1(VAR_23, VAR_4, 0);

 FUNC_1(VAR_23, VAR_11, VAR_23->jpeg.dma);


 FUNC_1(VAR_23, VAR_20, VAR_26);
 FUNC_1(VAR_23, VAR_6, VAR_25);
 FUNC_1(VAR_23, VAR_0, VAR_24);


 FUNC_1(VAR_23, VAR_15, 0x10001000);
 FUNC_1(VAR_23, VAR_16, 0x00200000);
 FUNC_1(VAR_23, VAR_17, 0x00200000);
 FUNC_1(VAR_23, VAR_18, 0x00200000);
 FUNC_1(VAR_23, VAR_19, 0x00200000);


 FUNC_1(VAR_23, VAR_12, 0x22666500);
}
