
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {void* which; int format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; void* width; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_pix_format {int field; int height; void* width; int pixelformat; } ;
struct rvin_dev {int mbus_code; TYPE_1__* parallel; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {int source_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rvin_dev*,struct v4l2_pix_format*) ;
 int FUNC_1 (struct rvin_dev*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_3 (struct v4l2_pix_format*,int *) ;
 struct v4l2_subdev_pad_config* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_6 (struct v4l2_subdev_pad_config*) ;
 struct v4l2_subdev* FUNC_7 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_8(struct rvin_dev *VAR_7, u32 VAR_8,
      struct v4l2_pix_format *VAR_9,
      struct v4l2_rect *VAR_10, struct v4l2_rect *VAR_11)
{
 struct v4l2_subdev *VAR_12 = FUNC_7(VAR_7);
 struct v4l2_subdev_pad_config *VAR_13;
 struct v4l2_subdev_format VAR_14 = {
  .which = VAR_8,
  .pad = VAR_7->parallel->source_pad,
 };
 enum v4l2_field VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 if (!FUNC_1(VAR_7, VAR_9->pixelformat))
  VAR_9->pixelformat = VAR_2;

 FUNC_2(&VAR_14.format, VAR_9, VAR_7->mbus_code);


 VAR_15 = VAR_9->field;
 VAR_16 = VAR_9->width;
 VAR_17 = VAR_9->height;

 VAR_18 = FUNC_5(VAR_12, VAR_5, VAR_6, VAR_13, &VAR_14);
 if (VAR_18 < 0 && VAR_18 != -VAR_0)
  goto done;

 FUNC_3(VAR_9, &VAR_14.format);

 if (VAR_10) {
  VAR_10->top = 0;
  VAR_10->left = 0;
  VAR_10->width = VAR_9->width;
  VAR_10->height = VAR_9->height;





  if (VAR_9->field == VAR_3)
   VAR_10->height *= 2;
 }

 if (VAR_15 != VAR_4)
  VAR_9->field = VAR_15;

 VAR_9->width = VAR_16;
 VAR_9->height = VAR_17;

 FUNC_0(VAR_7, VAR_9);

 if (VAR_11) {
  VAR_11->top = 0;
  VAR_11->left = 0;
  VAR_11->width = VAR_9->width;
  VAR_11->height = VAR_9->height;
 }
done:
 FUNC_6(VAR_13);

 return 0;
}
