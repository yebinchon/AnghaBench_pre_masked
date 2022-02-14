
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_inst {int dummy; } ;
struct venus_format {int num_planes; } ;
struct v4l2_plane_pix_format {void* bytesperline; void* sizeimage; int reserved; } ;
struct v4l2_pix_format_mplane {scalar_t__ field; void* width; void* height; int pixelformat; scalar_t__ flags; int num_planes; int reserved; struct v4l2_plane_pix_format* plane_fmt; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,int ,int ) ;
 struct venus_format* FUNC_2 (struct venus_inst*,int ,int ) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_inst*) ;
 void* FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,void*,void*) ;

__attribute__((used)) static const struct venus_format *
FUNC_10(struct venus_inst *VAR_7, struct v4l2_format *VAR_8)
{
 struct v4l2_pix_format_mplane *VAR_9 = &VAR_8->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_10 = VAR_9->plane_fmt;
 const struct venus_format *VAR_11;
 u32 VAR_12;

 FUNC_8(VAR_10[0].reserved, 0, sizeof(VAR_10[0].reserved));
 FUNC_8(VAR_9->reserved, 0, sizeof(VAR_9->reserved));

 VAR_11 = FUNC_2(VAR_7, VAR_9->pixelformat, VAR_8->type);
 if (!VAR_11) {
  if (VAR_8->type == VAR_1)
   VAR_9->pixelformat = VAR_5;
  else if (VAR_8->type == VAR_2)
   VAR_9->pixelformat = VAR_6;
  else
   return ((void*)0);
  VAR_11 = FUNC_2(VAR_7, VAR_9->pixelformat, VAR_8->type);
 }

 VAR_9->width = FUNC_1(VAR_9->width, FUNC_6(VAR_7),
        FUNC_5(VAR_7));
 VAR_9->height = FUNC_1(VAR_9->height, FUNC_4(VAR_7),
         FUNC_3(VAR_7));

 if (VAR_8->type == VAR_2)
  VAR_9->height = FUNC_0(VAR_9->height, 32);

 VAR_9->width = FUNC_0(VAR_9->width, 2);
 VAR_9->height = FUNC_0(VAR_9->height, 2);

 if (VAR_9->field == VAR_3)
  VAR_9->field = VAR_4;
 VAR_9->num_planes = VAR_11->num_planes;
 VAR_9->flags = 0;

 VAR_12 = FUNC_9(VAR_9->pixelformat,
          VAR_9->width,
          VAR_9->height);
 VAR_10[0].sizeimage = FUNC_7(FUNC_0(VAR_10[0].sizeimage, VAR_0), VAR_12);

 if (VAR_8->type == VAR_2)
  VAR_10[0].bytesperline = FUNC_0(VAR_9->width, 128);
 else
  VAR_10[0].bytesperline = 0;

 return VAR_11;
}
