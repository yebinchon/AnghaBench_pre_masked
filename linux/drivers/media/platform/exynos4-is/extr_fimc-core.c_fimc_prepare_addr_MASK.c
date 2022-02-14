
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct fimc_frame {int width; int height; TYPE_1__* fmt; } ;
struct fimc_ctx {int dummy; } ;
struct fimc_addr {int cb; int cr; void* y; } ;
struct TYPE_2__ {int memplanes; int colplanes; int mdataplanes; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,...) ;
 void* FUNC_1 (struct vb2_buffer*,int) ;

int FUNC_2(struct fimc_ctx *VAR_2, struct vb2_buffer *VAR_3,
        struct fimc_frame *VAR_4, struct fimc_addr *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_7 = VAR_4->width * VAR_4->height;

 FUNC_0("memplanes= %d, colplanes= %d, pix_size= %d",
  VAR_4->fmt->memplanes, VAR_4->fmt->colplanes, VAR_7);

 VAR_5->y = FUNC_1(VAR_3, 0);

 if (VAR_4->fmt->memplanes == 1) {
  switch (VAR_4->fmt->colplanes) {
  case 1:
   VAR_5->cb = 0;
   VAR_5->cr = 0;
   break;
  case 2:

   VAR_5->cb = (u32)(VAR_5->y + VAR_7);
   VAR_5->cr = 0;
   break;
  case 3:
   VAR_5->cb = (u32)(VAR_5->y + VAR_7);

   if (VAR_1 == VAR_4->fmt->color)
    VAR_5->cr = (u32)(VAR_5->cb
      + (VAR_7 >> 2));
   else
    VAR_5->cr = (u32)(VAR_5->cb
      + (VAR_7 >> 1));
   break;
  default:
   return -VAR_0;
  }
 } else if (!VAR_4->fmt->mdataplanes) {
  if (VAR_4->fmt->memplanes >= 2)
   VAR_5->cb = FUNC_1(VAR_3, 1);

  if (VAR_4->fmt->memplanes == 3)
   VAR_5->cr = FUNC_1(VAR_3, 2);
 }

 FUNC_0("PHYS_ADDR: y= 0x%X  cb= 0x%X cr= 0x%X ret= %d",
     VAR_5->y, VAR_5->cb, VAR_5->cr, VAR_6);

 return VAR_6;
}
