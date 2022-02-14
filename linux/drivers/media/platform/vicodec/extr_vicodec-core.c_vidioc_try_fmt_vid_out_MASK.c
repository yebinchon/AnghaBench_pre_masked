
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vicodec_ctx {int is_stateless; int is_enc; } ;
struct v4l2_pix_format_mplane {void* colorspace; void* pixelformat; } ;
struct v4l2_pix_format {void* colorspace; void* pixelformat; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {void* id; } ;


 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct vicodec_ctx* FUNC_0 (struct file*) ;
 TYPE_2__* FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (struct vicodec_ctx*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
      struct v4l2_format *VAR_7)
{
 struct vicodec_ctx *VAR_8 = FUNC_0(VAR_5);
 struct v4l2_pix_format_mplane *VAR_9;
 struct v4l2_pix_format *VAR_10;

 switch (VAR_7->type) {
 case 129:
  if (VAR_4)
   return -VAR_0;
  VAR_10 = &VAR_7->fmt.pix;
  if (VAR_8->is_enc)
   VAR_10->pixelformat = FUNC_1(VAR_10->pixelformat)->id;
  else if (VAR_8->is_stateless)
   VAR_10->pixelformat = VAR_3;
  else
   VAR_10->pixelformat = VAR_2;
  if (!VAR_10->colorspace)
   VAR_10->colorspace = VAR_1;
  break;
 case 128:
  if (!VAR_4)
   return -VAR_0;
  VAR_9 = &VAR_7->fmt.pix_mp;
  if (VAR_8->is_enc)
   VAR_9->pixelformat = FUNC_1(VAR_9->pixelformat)->id;
  else if (VAR_8->is_stateless)
   VAR_9->pixelformat = VAR_3;
  else
   VAR_9->pixelformat = VAR_2;
  if (!VAR_9->colorspace)
   VAR_9->colorspace = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_8, VAR_7);
}
