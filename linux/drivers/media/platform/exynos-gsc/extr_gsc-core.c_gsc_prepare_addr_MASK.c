
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct gsc_frame {int f_width; int f_height; TYPE_1__* fmt; } ;
struct gsc_ctx {int dummy; } ;
struct gsc_addr {int cb; void* cr; void* y; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int num_planes; int num_comp; scalar_t__ pixelformat; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,void*) ;
 void* FUNC_3 (struct vb2_buffer*,int) ;

int FUNC_4(struct gsc_ctx *VAR_6, struct vb2_buffer *VAR_7,
   struct gsc_frame *VAR_8, struct gsc_addr *VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11;

 if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)))
  return -VAR_0;

 VAR_11 = VAR_8->f_width * VAR_8->f_height;

 FUNC_0("num_planes= %d, num_comp= %d, pix_size= %d",
  VAR_8->fmt->num_planes, VAR_8->fmt->num_comp, VAR_11);

 VAR_9->y = FUNC_3(VAR_7, 0);

 if (VAR_8->fmt->num_planes == 1) {
  switch (VAR_8->fmt->num_comp) {
  case 1:
   VAR_9->cb = 0;
   VAR_9->cr = 0;
   break;
  case 2:

   VAR_9->cb = (dma_addr_t)(VAR_9->y + VAR_11);
   VAR_9->cr = 0;
   break;
  case 3:

   VAR_9->cb = (dma_addr_t)(VAR_9->y + VAR_11);
   if (VAR_1 == VAR_8->fmt->color)
    VAR_9->cr = (dma_addr_t)(VAR_9->cb
      + (VAR_11 >> 2));
   else
    VAR_9->cr = (dma_addr_t)(VAR_9->cb
      + (VAR_11 >> 1));
   break;
  default:
   FUNC_1("Invalid the number of color planes");
   return -VAR_0;
  }
 } else {
  if (VAR_8->fmt->num_planes >= 2)
   VAR_9->cb = FUNC_3(VAR_7, 1);

  if (VAR_8->fmt->num_planes == 3)
   VAR_9->cr = FUNC_3(VAR_7, 2);
 }

 if ((VAR_8->fmt->pixelformat == VAR_2) ||
  (VAR_8->fmt->pixelformat == VAR_5) ||
  (VAR_8->fmt->pixelformat == VAR_3) ||
  (VAR_8->fmt->pixelformat == VAR_4))
  FUNC_2(VAR_9->cb, VAR_9->cr);

 FUNC_0("ADDR: y= %pad  cb= %pad cr= %pad ret= %d",
  &VAR_9->y, &VAR_9->cb, &VAR_9->cr, VAR_10);

 return VAR_10;
}
