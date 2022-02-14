
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ width; scalar_t__ height; int colorspace; int field; } ;
struct ov7670_win_size {scalar_t__ width; scalar_t__ height; } ;
struct ov7670_info {scalar_t__ min_width; scalar_t__ min_height; struct v4l2_mbus_framefmt format; TYPE_1__* devtype; } ;
struct ov7670_format_struct {scalar_t__ mbus_code; int colorspace; } ;
struct TYPE_2__ {unsigned int n_win_sizes; struct ov7670_win_size* win_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ov7670_format_struct* VAR_2 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
  struct v4l2_mbus_framefmt *VAR_4,
  struct ov7670_format_struct **VAR_5,
  struct ov7670_win_size **VAR_6)
{
 int VAR_7, VAR_8;
 struct ov7670_win_size *VAR_9;
 struct ov7670_info *VAR_10 = FUNC_0(VAR_3);
 unsigned int VAR_11 = VAR_10->devtype->n_win_sizes;
 unsigned int VAR_12 = VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_2[VAR_7].mbus_code == VAR_4->code)
   break;
 if (VAR_7 >= VAR_0) {

  VAR_7 = 0;
  VAR_4->code = VAR_2[0].mbus_code;
 }
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_2 + VAR_7;



 VAR_4->field = VAR_1;





 if (VAR_10->min_width || VAR_10->min_height)
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   VAR_9 = VAR_10->devtype->win_sizes + VAR_8;

   if (VAR_9->width < VAR_10->min_width ||
    VAR_9->height < VAR_10->min_height) {
    VAR_12 = VAR_8;
    break;
   }
  }




 for (VAR_9 = VAR_10->devtype->win_sizes;
      VAR_9 < VAR_10->devtype->win_sizes + VAR_12; VAR_9++)
  if (VAR_4->width >= VAR_9->width && VAR_4->height >= VAR_9->height)
   break;
 if (VAR_9 >= VAR_10->devtype->win_sizes + VAR_12)
  VAR_9--;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;



 VAR_4->width = VAR_9->width;
 VAR_4->height = VAR_9->height;
 VAR_4->colorspace = VAR_2[VAR_7].colorspace;

 VAR_10->format = *VAR_4;

 return 0;
}
