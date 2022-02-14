
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int code; } ;
struct v4l2_subdev_format {TYPE_2__ format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_6__ {int pixelformat; } ;
struct TYPE_4__ {TYPE_3__ pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct camss_video {int bpl_alignment; int * formats; int type; int nformats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *,int ) ;
 struct v4l2_subdev* FUNC_3 (struct camss_video*,int *) ;

__attribute__((used)) static int FUNC_4(struct camss_video *VAR_3,
       struct v4l2_format *VAR_4)
{
 struct v4l2_subdev_format VAR_5;
 struct v4l2_subdev *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5.pad = VAR_7;
 VAR_5.which = VAR_1;

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_2, ((void*)0), &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_5.format.code,
    VAR_4->fmt.pix_mp.pixelformat,
    VAR_3->formats, VAR_3->nformats);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->type = VAR_3->type;

 return FUNC_2(&VAR_5.format, &VAR_4->fmt.pix_mp,
        &VAR_3->formats[VAR_8], VAR_3->bpl_alignment);
}
