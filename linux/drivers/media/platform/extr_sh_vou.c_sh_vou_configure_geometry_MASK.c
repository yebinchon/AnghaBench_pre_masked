
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_rect {int height; int top; int width; int left; } ;
struct v4l2_pix_format {int height; int width; } ;
struct sh_vou_fmt {int pkf; int yf; int rgb; int pfmt; } ;
struct TYPE_2__ {int dev; } ;
struct sh_vou_device {int std; TYPE_1__ v4l2_dev; struct v4l2_pix_format pix; struct v4l2_rect rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (struct sh_vou_device*,int ,int) ;
 struct sh_vou_fmt* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

__attribute__((used)) static void FUNC_2(struct sh_vou_device *VAR_11,
          int VAR_12, int VAR_13, int VAR_14)
{
 struct sh_vou_fmt *VAR_15 = VAR_8 + VAR_12;
 unsigned int VAR_16, VAR_17, VAR_18,
  VAR_19, VAR_20, VAR_21;
 struct v4l2_rect *VAR_22 = &VAR_11->rect;
 struct v4l2_pix_format *VAR_23 = &VAR_11->pix;
 u32 VAR_24 = 0, VAR_25, VAR_26;

 if (VAR_11->std & VAR_0) {
  VAR_18 = 858;

 } else {
  VAR_18 = 864;

 }

 VAR_19 = VAR_23->height / 2;
 VAR_20 = VAR_22->height / 2;
 VAR_21 = VAR_22->top / 2;
 VAR_16 = VAR_18 - VAR_7;
 VAR_17 = 20;

 VAR_25 = VAR_22->width + VAR_22->left;
 VAR_26 = VAR_20 + VAR_21;

 FUNC_0(VAR_11->v4l2_dev.dev,
  "image %ux%u, black %u:%u, offset %u:%u, display %ux%u\n",
  VAR_23->width, VAR_19, VAR_16, VAR_17,
  VAR_22->left, VAR_21, VAR_25, VAR_26);


 FUNC_1(VAR_11, VAR_4, (VAR_23->width << 16) | VAR_19);
 FUNC_1(VAR_11, VAR_6, (VAR_16 << 16) | VAR_17);
 FUNC_1(VAR_11, VAR_2, (VAR_22->left << 16) | VAR_21);
 FUNC_1(VAR_11, VAR_3, (VAR_25 << 16) | VAR_26);






 if (VAR_13)
  VAR_24 |= (1 << 15) | (VAR_9[VAR_13 - 1] << 4);
 if (VAR_14)
  VAR_24 |= (1 << 14) | VAR_10[VAR_14 - 1];

 FUNC_0(VAR_11->v4l2_dev.dev, "0x%08x: scaling 0x%x\n",
  VAR_15->pfmt, VAR_24);


 FUNC_1(VAR_11, VAR_5, VAR_24);
 FUNC_1(VAR_11, VAR_1,
       VAR_15->pkf | (VAR_15->yf << 8) | (VAR_15->rgb << 16));
}
