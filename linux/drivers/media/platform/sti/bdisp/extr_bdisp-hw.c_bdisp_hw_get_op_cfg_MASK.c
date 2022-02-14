
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bdisp_op_cfg {int wide; int src_interlaced; int src_yuv; int src_420; int dst_yuv; int dst_420; int cconv; int h_inc; int v_inc; int scale; int dst_nbp; int src_nbp; int vflip; int hflip; } ;
struct bdisp_frame {int width; scalar_t__ field; TYPE_2__* fmt; } ;
struct bdisp_ctx {int vflip; int hflip; struct bdisp_frame dst; struct bdisp_frame src; TYPE_1__* bdisp_dev; } ;
struct TYPE_4__ {scalar_t__ pixelformat; int nb_planes; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct bdisp_ctx*,int*,int*) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static int FUNC_2(struct bdisp_ctx *VAR_6, struct bdisp_op_cfg *VAR_7)
{
 struct device *VAR_8 = VAR_6->bdisp_dev->dev;
 struct bdisp_frame *VAR_9 = &VAR_6->src;
 struct bdisp_frame *VAR_10 = &VAR_6->dst;

 if (VAR_9->width > VAR_1 * VAR_2) {
  FUNC_1(VAR_8, "Image width out of HW caps\n");
  return -VAR_0;
 }

 VAR_7->wide = VAR_9->width > VAR_1;

 VAR_7->hflip = VAR_6->hflip;
 VAR_7->vflip = VAR_6->vflip;

 VAR_7->src_interlaced = (VAR_9->field == VAR_3);

 VAR_7->src_nbp = VAR_9->fmt->nb_planes;
 VAR_7->src_yuv = (VAR_9->fmt->pixelformat == VAR_4) ||
   (VAR_9->fmt->pixelformat == VAR_5);
 VAR_7->src_420 = VAR_7->src_yuv;

 VAR_7->dst_nbp = VAR_10->fmt->nb_planes;
 VAR_7->dst_yuv = (VAR_10->fmt->pixelformat == VAR_4) ||
   (VAR_10->fmt->pixelformat == VAR_5);
 VAR_7->dst_420 = VAR_7->dst_yuv;

 VAR_7->cconv = (VAR_7->src_yuv != VAR_7->dst_yuv);

 if (FUNC_0(VAR_6, &VAR_7->h_inc, &VAR_7->v_inc)) {
  FUNC_1(VAR_8, "Scale factor out of HW caps\n");
  return -VAR_0;
 }


 if (VAR_7->src_interlaced)
  VAR_7->v_inc /= 2;

 if ((VAR_7->h_inc != (1 << 10)) || (VAR_7->v_inc != (1 << 10)))
  VAR_7->scale = 1;
 else
  VAR_7->scale = 0;

 return 0;
}
