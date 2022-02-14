
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; int width; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct s5p_jpeg_ctx {TYPE_3__* jpeg; } ;
struct TYPE_6__ {TYPE_2__* variant; } ;
struct TYPE_5__ {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct s5p_jpeg_ctx*,int*,int ,int ,int,int*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct s5p_jpeg_ctx *VAR_13,
      struct v4l2_format *VAR_14,
      int VAR_15)
{
 struct v4l2_pix_format *VAR_16 = &VAR_14->fmt.pix;
 u32 VAR_17 = VAR_14->fmt.pix.pixelformat;
 int VAR_18 = VAR_16->width, VAR_19 = VAR_16->height, VAR_20;
 int VAR_21 = 0;

 if (VAR_17 == VAR_10 ||
     VAR_17 == VAR_11 ||
     VAR_17 == VAR_8 ||
     VAR_17 == VAR_9 ||
     VAR_17 == VAR_6 ||
     VAR_17 == VAR_7 ||
     VAR_17 == VAR_12)
  VAR_20 = 4;
 else
  VAR_20 = 1;

 FUNC_0(VAR_13, &VAR_18, VAR_4,
          VAR_2, VAR_20,
          &VAR_19, VAR_3,
          VAR_1, VAR_20);

 if (VAR_13->jpeg->variant->version == VAR_5)
  VAR_21 = VAR_0;

 return (VAR_18 * VAR_19 * VAR_15 >> 3) + VAR_21;
}
