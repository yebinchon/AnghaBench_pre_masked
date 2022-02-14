
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; scalar_t__ width; scalar_t__ height; scalar_t__ sizeimage; scalar_t__ field; scalar_t__ bytesperline; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int private_data; } ;
struct delta_dev {int dev; } ;
struct delta_dec {scalar_t__ max_height; scalar_t__ max_width; } ;
struct TYPE_4__ {int pixelformat; } ;
struct delta_ctx {int name; TYPE_2__ frameinfo; struct delta_dev* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct delta_dec* FUNC_0 (struct delta_ctx*,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 struct delta_ctx* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int ,scalar_t__,int ,scalar_t__*,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_7, void *VAR_8,
    struct v4l2_format *VAR_9)
{
 struct delta_ctx *VAR_10 = FUNC_3(VAR_7->private_data);
 struct delta_dev *VAR_11 = VAR_10->dev;
 struct v4l2_pix_format *VAR_12 = &VAR_9->fmt.pix;
 u32 VAR_13 = VAR_12->pixelformat;
 const struct delta_dec *VAR_14;
 u32 VAR_15, VAR_16;
 u32 VAR_17;

 VAR_14 = FUNC_0(VAR_10, VAR_13, VAR_10->frameinfo.pixelformat);
 if (!VAR_14) {
  FUNC_1(VAR_11->dev,
   "%s V4L2 TRY_FMT (OUTPUT): unsupported format %4.4s\n",
   VAR_10->name, (char *)&VAR_12->pixelformat);
  return -VAR_4;
 }


 VAR_15 = VAR_12->width;
 VAR_16 = VAR_12->height;
 FUNC_4
  (&VAR_12->width,
   VAR_3,
   VAR_14->max_width ? VAR_14->max_width : VAR_1,
   0,
   &VAR_12->height,
   VAR_2,
   VAR_14->max_height ? VAR_14->max_height : VAR_0,
   0, 0);

 if ((VAR_12->width != VAR_15) || (VAR_12->height != VAR_16))
  FUNC_1(VAR_11->dev,
   "%s V4L2 TRY_FMT (OUTPUT): resolution updated %dx%d -> %dx%d to fit min/max/alignment\n",
   VAR_10->name, VAR_15, VAR_16,
   VAR_12->width, VAR_12->height);

 VAR_17 = FUNC_2(VAR_12->width, VAR_12->height);
 if (VAR_12->sizeimage < VAR_17) {
  FUNC_1(VAR_11->dev,
   "%s V4L2 TRY_FMT (OUTPUT): size updated %d -> %d to fit estimated size\n",
   VAR_10->name, VAR_12->sizeimage, VAR_17);
  VAR_12->sizeimage = VAR_17;
 }

 VAR_12->bytesperline = 0;

 if (VAR_12->field == VAR_5)
  VAR_12->field = VAR_6;

 return 0;
}
