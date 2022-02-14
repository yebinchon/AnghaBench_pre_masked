
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_bt_timings {unsigned int width; unsigned int height; } ;
struct aspeed_video {TYPE_1__* srcs; int dev; scalar_t__ frame_bottom; scalar_t__ frame_top; scalar_t__ frame_right; scalar_t__ frame_left; struct v4l2_bt_timings active_timings; } ;
struct TYPE_3__ {unsigned int size; int dma; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
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
 int FUNC_1 (struct aspeed_video*,TYPE_1__*,unsigned int) ;
 int FUNC_2 (struct aspeed_video*,unsigned int) ;
 int FUNC_3 (struct aspeed_video*,TYPE_1__*) ;
 int FUNC_4 (struct aspeed_video*,int ,int ,int ) ;
 int FUNC_5 (struct aspeed_video*,int ,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct aspeed_video *VAR_13)
{
 struct v4l2_bt_timings *VAR_14 = &VAR_13->active_timings;
 unsigned int VAR_15 = VAR_14->width * VAR_14->height;


 FUNC_2(VAR_13, VAR_15);

 if (VAR_13->active_timings.width == 1680) {
  FUNC_5(VAR_13, VAR_1,
       1728 << 16 | VAR_14->height);
  VAR_15 += (1728 - 1680) * VAR_13->active_timings.height;
 } else {
  FUNC_5(VAR_13, VAR_1,
       VAR_14->width << 16 | VAR_14->height);
 }
 FUNC_5(VAR_13, VAR_2,
      VAR_14->width << 16 | VAR_14->height);
 FUNC_5(VAR_13, VAR_8, VAR_14->width * 4);


 if (VAR_15 < VAR_0) {
  FUNC_5(VAR_13, VAR_9,
       FUNC_0(VAR_11,
           VAR_13->frame_left - 1) |
       FUNC_0(VAR_12,
           VAR_13->frame_right));
  FUNC_5(VAR_13, VAR_10,
       FUNC_0(VAR_11, VAR_13->frame_top) |
       FUNC_0(VAR_12,
           VAR_13->frame_bottom + 1));
  FUNC_4(VAR_13, VAR_3, 0, VAR_5);
 } else {
  FUNC_4(VAR_13, VAR_3, 0, VAR_4);
 }

 VAR_15 *= 4;

 if (VAR_15 != VAR_13->srcs[0].size) {
  if (VAR_13->srcs[0].size)
   FUNC_3(VAR_13, &VAR_13->srcs[0]);
  if (VAR_13->srcs[1].size)
   FUNC_3(VAR_13, &VAR_13->srcs[1]);

  if (!FUNC_1(VAR_13, &VAR_13->srcs[0], VAR_15))
   goto err_mem;
  if (!FUNC_1(VAR_13, &VAR_13->srcs[1], VAR_15))
   goto err_mem;

  FUNC_5(VAR_13, VAR_6, VAR_13->srcs[0].dma);
  FUNC_5(VAR_13, VAR_7, VAR_13->srcs[1].dma);
 }

 return;

err_mem:
 FUNC_6(VAR_13->dev, "Failed to allocate source buffers\n");

 if (VAR_13->srcs[0].size)
  FUNC_3(VAR_13, &VAR_13->srcs[0]);
}
