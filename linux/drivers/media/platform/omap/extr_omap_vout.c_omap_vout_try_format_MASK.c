
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format {int height; int width; scalar_t__ pixelformat; int bytesperline; int sizeimage; void* colorspace; int field; } ;
struct TYPE_2__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;







 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int,int ,int ) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_1(struct v4l2_pix_format *VAR_12)
{
 int VAR_13, VAR_14 = 0;

 VAR_12->height = FUNC_0(VAR_12->height, (u32)VAR_8,
      (u32)VAR_6);
 VAR_12->width = FUNC_0(VAR_12->width, (u32)VAR_9, (u32)VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_12->pixelformat == VAR_11[VAR_13].pixelformat)
   break;
 }

 if (VAR_13 == VAR_0)
  VAR_13 = 0;

 VAR_12->pixelformat = VAR_11[VAR_13].pixelformat;
 VAR_12->field = VAR_5;

 switch (VAR_12->pixelformat) {
 case 128:
 case 129:
 default:
  VAR_12->colorspace = VAR_4;
  VAR_14 = VAR_10;
  break;
 case 131:
 case 130:
  VAR_12->colorspace = VAR_4;
  VAR_14 = VAR_3;
  break;
 case 133:
  VAR_12->colorspace = VAR_4;
  VAR_14 = VAR_1;
  break;
 case 132:
 case 134:
  VAR_12->colorspace = VAR_4;
  VAR_14 = VAR_2;
  break;
 }
 VAR_12->bytesperline = VAR_12->width * VAR_14;
 VAR_12->sizeimage = VAR_12->bytesperline * VAR_12->height;

 return VAR_14;
}
