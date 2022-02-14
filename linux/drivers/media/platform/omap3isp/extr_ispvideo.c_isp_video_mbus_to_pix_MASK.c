
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {unsigned int bytesperline; unsigned int width; int height; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct v4l2_mbus_framefmt {unsigned int width; int height; scalar_t__ code; int field; int colorspace; } ;
struct isp_video {int bpl_alignment; int bpl_zero_padding; int bpl_max; } ;
struct TYPE_3__ {scalar_t__ code; unsigned int bpp; int pixelformat; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct v4l2_pix_format*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_5(const struct isp_video *VAR_1,
       const struct v4l2_mbus_framefmt *VAR_2,
       struct v4l2_pix_format *VAR_3)
{
 unsigned int VAR_4 = VAR_3->bytesperline;
 unsigned int VAR_5;
 unsigned int VAR_6;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->width = VAR_2->width;
 VAR_3->height = VAR_2->height;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_0); ++VAR_6) {
  if (VAR_0[VAR_6].code == VAR_2->code)
   break;
 }

 if (FUNC_2(VAR_6 == FUNC_1(VAR_0)))
  return 0;

 VAR_5 = VAR_3->width * VAR_0[VAR_6].bpp;





 if (VAR_1->bpl_max)
  VAR_4 = FUNC_3(VAR_4, VAR_5, VAR_1->bpl_max);
 else
  VAR_4 = VAR_5;

 if (!VAR_1->bpl_zero_padding || VAR_4 != VAR_5)
  VAR_4 = FUNC_0(VAR_4, VAR_1->bpl_alignment);

 VAR_3->pixelformat = VAR_0[VAR_6].pixelformat;
 VAR_3->bytesperline = VAR_4;
 VAR_3->sizeimage = VAR_3->bytesperline * VAR_3->height;
 VAR_3->colorspace = VAR_2->colorspace;
 VAR_3->field = VAR_2->field;

 return VAR_4 - VAR_5;
}
