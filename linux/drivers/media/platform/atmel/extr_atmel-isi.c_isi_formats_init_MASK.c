
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_mbus_code_enum {scalar_t__ code; int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct isi_format {scalar_t__ mbus_code; scalar_t__ fourcc; } ;
struct TYPE_2__ {struct v4l2_subdev* subdev; } ;
struct atmel_isi {unsigned int num_user_formats; int * user_formats; int current_fmt; int dev; TYPE_1__ entity; } ;


 unsigned int FUNC_0 (struct isi_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,unsigned int,int,int ) ;
 int VAR_4 ;
 struct isi_format* VAR_5 ;
 int FUNC_2 (int *,struct isi_format const**,unsigned int) ;
 int VAR_6 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;

__attribute__((used)) static int FUNC_4(struct atmel_isi *VAR_7)
{
 const struct isi_format *VAR_8[FUNC_0(VAR_5)];
 unsigned int VAR_9 = 0, VAR_10, VAR_11;
 struct v4l2_subdev *VAR_12 = VAR_7->entity.subdev;
 struct v4l2_subdev_mbus_code_enum VAR_13 = {
  .which = VAR_3,
 };

 while (!FUNC_3(VAR_12, VAR_6, VAR_4,
     ((void*)0), &VAR_13)) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
   if (VAR_5[VAR_10].mbus_code != VAR_13.code)
    continue;


   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    if (VAR_8[VAR_11]->fourcc == VAR_5[VAR_10].fourcc)

     break;
   if (VAR_11 == VAR_9)

    VAR_8[VAR_9++] = VAR_5 + VAR_10;
  }
  VAR_13.index++;
 }

 if (!VAR_9)
  return -VAR_1;

 VAR_7->num_user_formats = VAR_9;
 VAR_7->user_formats = FUNC_1(VAR_7->dev,
      VAR_9, sizeof(struct isi_format *),
      VAR_2);
 if (!VAR_7->user_formats)
  return -VAR_0;

 FUNC_2(VAR_7->user_formats, VAR_8,
        VAR_9 * sizeof(struct isi_format *));
 VAR_7->current_fmt = VAR_7->user_formats[0];

 return 0;
}
