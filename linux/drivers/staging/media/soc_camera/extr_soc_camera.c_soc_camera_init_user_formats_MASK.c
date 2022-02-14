
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_subdev_mbus_code_enum {unsigned int index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_format_xlate {int dummy; } ;
struct soc_camera_device {unsigned int num_user_formats; TYPE_2__* user_formats; TYPE_2__* current_fmt; int pdev; int parent; } ;
struct TYPE_7__ {int code; scalar_t__ host_fmt; } ;
struct TYPE_6__ {int (* get_formats ) (struct soc_camera_device*,unsigned int,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_2 (struct soc_camera_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct soc_camera_device*,unsigned int,TYPE_2__*) ;
 int FUNC_5 (struct soc_camera_device*,unsigned int,TYPE_2__*) ;
 struct soc_camera_host* FUNC_6 (int ) ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct soc_camera_device *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_2(VAR_5);
 struct soc_camera_host *VAR_7 = FUNC_6(VAR_5->parent);
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 struct v4l2_subdev_mbus_code_enum VAR_12 = {
  .which = VAR_2,
 };

 while (!FUNC_7(VAR_6, VAR_4, VAR_3, ((void*)0), &VAR_12)) {
  VAR_10++;
  VAR_12.index++;
 }

 if (!VAR_7->ops->get_formats)




  VAR_9 = VAR_10;
 else




  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   VAR_11 = VAR_7->ops->get_formats(VAR_5, VAR_8, ((void*)0));
   if (VAR_11 < 0)
    return VAR_11;
   VAR_9 += VAR_11;
  }

 if (!VAR_9)
  return -VAR_1;

 VAR_5->user_formats =
  FUNC_9(FUNC_0(VAR_9,
       sizeof(struct soc_camera_format_xlate)));
 if (!VAR_5->user_formats)
  return -VAR_0;

 FUNC_1(VAR_5->pdev, "Found %d supported formats.\n", VAR_9);


 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
  if (!VAR_7->ops->get_formats) {
   VAR_12.index = VAR_8;
   FUNC_7(VAR_6, VAR_4, VAR_3, ((void*)0), &VAR_12);
   VAR_5->user_formats[VAR_9].host_fmt =
    FUNC_3(VAR_12.code);
   if (VAR_5->user_formats[VAR_9].host_fmt)
    VAR_5->user_formats[VAR_9++].code = VAR_12.code;
  } else {
   VAR_11 = VAR_7->ops->get_formats(VAR_5, VAR_8,
          &VAR_5->user_formats[VAR_9]);
   if (VAR_11 < 0)
    goto egfmt;
   VAR_9 += VAR_11;
  }

 VAR_5->num_user_formats = VAR_9;
 VAR_5->current_fmt = &VAR_5->user_formats[0];

 return 0;

egfmt:
 FUNC_8(VAR_5->user_formats);
 return VAR_11;
}
