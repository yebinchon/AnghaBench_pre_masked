
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {unsigned int bytesperline; int width; int height; int sizeimage; int pixelformat; int field; int colorspace; } ;
struct v4l2_mbus_framefmt {int width; int height; scalar_t__ code; int field; int colorspace; } ;
struct iss_video {int bpl_alignment; int bpl_zero_padding; int bpl_max; } ;
struct TYPE_3__ {scalar_t__ code; unsigned int bpp; int pixelformat; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int FUNC_2 (unsigned int,unsigned int,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct v4l2_pix_format*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_4(const struct iss_video *VAR_2,
       const struct v4l2_mbus_framefmt *VAR_3,
       struct v4l2_pix_format *VAR_4)
{
 unsigned int VAR_5 = VAR_4->bytesperline;
 unsigned int VAR_6;
 unsigned int VAR_7;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->width = VAR_3->width;
 VAR_4->height = VAR_3->height;





 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_1) - 1; ++VAR_7) {
  if (VAR_1[VAR_7].code == VAR_3->code)
   break;
 }

 VAR_6 = VAR_4->width * FUNC_0(VAR_1[VAR_7].bpp, 8) / 8;






 if (VAR_2->bpl_max)
  VAR_5 = FUNC_2(VAR_5, VAR_6, VAR_2->bpl_max);
 else
  VAR_5 = VAR_6;

 if (!VAR_2->bpl_zero_padding || VAR_5 != VAR_6)
  VAR_5 = FUNC_0(VAR_5, VAR_2->bpl_alignment);

 VAR_4->pixelformat = VAR_1[VAR_7].pixelformat;
 VAR_4->bytesperline = VAR_5;
 VAR_4->sizeimage = VAR_4->bytesperline * VAR_4->height;
 VAR_4->colorspace = VAR_3->colorspace;
 VAR_4->field = VAR_3->field;


 if (VAR_4->pixelformat == VAR_0)
  VAR_4->sizeimage += (VAR_4->bytesperline * VAR_4->height) / 2;

 return VAR_5 - VAR_6;
}
