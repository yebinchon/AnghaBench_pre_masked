
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {void* colorspace; int field; void* height; void* width; int code; } ;
struct ispif_line {unsigned int nformats; int * formats; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;


 void* VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct ispif_line*,struct v4l2_subdev_pad_config*,int const,int) ;
 void* FUNC_1 (int ,void*,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ispif_line *VAR_4,
        struct v4l2_subdev_pad_config *VAR_5,
        unsigned int VAR_6,
        struct v4l2_mbus_framefmt *VAR_7,
        enum v4l2_subdev_format_whence VAR_8)
{
 unsigned int VAR_9;

 switch (VAR_6) {
 case 129:


  for (VAR_9 = 0; VAR_9 < VAR_4->nformats; VAR_9++)
   if (VAR_7->code == VAR_4->formats[VAR_9])
    break;


  if (VAR_9 >= VAR_4->nformats)
   VAR_7->code = VAR_0;

  VAR_7->width = FUNC_1(VAR_3, VAR_7->width, 1, 8191);
  VAR_7->height = FUNC_1(VAR_3, VAR_7->height, 1, 8191);

  VAR_7->field = VAR_2;
  VAR_7->colorspace = VAR_1;

  break;

 case 128:


  *VAR_7 = *FUNC_0(VAR_4, VAR_5, 129,
        VAR_8);

  break;
 }

 VAR_7->colorspace = VAR_1;
}
