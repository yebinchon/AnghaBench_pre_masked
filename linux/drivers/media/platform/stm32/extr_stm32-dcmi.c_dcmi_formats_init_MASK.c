
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_mbus_code_enum {scalar_t__ code; int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* source; } ;
struct stm32_dcmi {unsigned int num_of_sd_formats; int * sd_formats; int sd_format; int dev; TYPE_1__ entity; } ;
struct dcmi_format {scalar_t__ mbus_code; scalar_t__ fourcc; } ;


 unsigned int FUNC_0 (struct dcmi_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dcmi_format* VAR_4 ;
 int FUNC_1 (int ,char*,char*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,unsigned int,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,struct dcmi_format const**,unsigned int) ;
 int VAR_6 ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;

__attribute__((used)) static int FUNC_6(struct stm32_dcmi *VAR_7)
{
 const struct dcmi_format *VAR_8[FUNC_0(VAR_4)];
 unsigned int VAR_9 = 0, VAR_10, VAR_11;
 struct v4l2_subdev *VAR_12 = VAR_7->entity.source;
 struct v4l2_subdev_mbus_code_enum VAR_13 = {
  .which = VAR_3,
 };

 while (!FUNC_5(VAR_12, VAR_6, VAR_5,
     ((void*)0), &VAR_13)) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   if (VAR_4[VAR_10].mbus_code != VAR_13.code)
    continue;


   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    if (VAR_8[VAR_11]->fourcc ==
      VAR_4[VAR_10].fourcc) {

     FUNC_1(VAR_7->dev, "Skipping fourcc/code: %4.4s/0x%x\n",
      (char *)&VAR_8[VAR_11]->fourcc,
      VAR_13.code);
     break;
    }
   if (VAR_11 == VAR_9) {

    VAR_8[VAR_9++] = VAR_4 + VAR_10;
    FUNC_1(VAR_7->dev, "Supported fourcc/code: %4.4s/0x%x\n",
     (char *)&VAR_8[VAR_9 - 1]->fourcc,
     VAR_8[VAR_9 - 1]->mbus_code);
   }
  }
  VAR_13.index++;
 }

 if (!VAR_9)
  return -VAR_1;

 VAR_7->num_of_sd_formats = VAR_9;
 VAR_7->sd_formats = FUNC_3(VAR_7->dev,
     VAR_9, sizeof(struct dcmi_format *),
     VAR_2);
 if (!VAR_7->sd_formats) {
  FUNC_2(VAR_7->dev, "Could not allocate memory\n");
  return -VAR_0;
 }

 FUNC_4(VAR_7->sd_formats, VAR_8,
        VAR_9 * sizeof(struct dcmi_format *));
 VAR_7->sd_format = VAR_7->sd_formats[0];

 return 0;
}
