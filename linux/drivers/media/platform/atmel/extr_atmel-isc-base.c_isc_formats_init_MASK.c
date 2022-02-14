
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_subdev_mbus_code_enum {int code; int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct isc_format {int sd_support; } ;
struct isc_device {unsigned int num_user_formats; struct isc_format** user_formats; int dev; int v4l2_dev; TYPE_1__* current_subdev; } ;
struct TYPE_2__ {struct v4l2_subdev* sd; } ;


 unsigned int FUNC_0 (struct isc_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct isc_format** FUNC_1 (int ,unsigned int,int,int ) ;
 int VAR_4 ;
 struct isc_format* FUNC_2 (int ,unsigned int*) ;
 struct isc_format* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct isc_device *VAR_7)
{
 struct isc_format *VAR_8;
 struct v4l2_subdev *VAR_9 = VAR_7->current_subdev->sd;
 unsigned int VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = FUNC_0(VAR_5);
 struct v4l2_subdev_mbus_code_enum VAR_14 = {
  .which = VAR_3,
 };

 VAR_10 = 0;
 while (!FUNC_3(VAR_9, VAR_6, VAR_4,
        ((void*)0), &VAR_14)) {
  VAR_14.index++;

  VAR_8 = FUNC_2(VAR_14.code, &VAR_11);
  if (!VAR_8) {
   FUNC_4(&VAR_7->v4l2_dev, "Mbus code %x not supported\n",
      VAR_14.code);
   continue;
  }

  VAR_8->sd_support = 1;
  VAR_10++;
 }

 if (!VAR_10)
  return -VAR_1;

 VAR_7->num_user_formats = VAR_10;
 VAR_7->user_formats = FUNC_1(VAR_7->dev,
      VAR_10, sizeof(*VAR_7->user_formats),
      VAR_2);
 if (!VAR_7->user_formats)
  return -VAR_0;

 VAR_8 = &VAR_5[0];
 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_13; VAR_11++) {
  if (VAR_8->sd_support)
   VAR_7->user_formats[VAR_12++] = VAR_8;
  VAR_8++;
 }

 return 0;
}
