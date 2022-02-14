
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int code; } ;
struct TYPE_2__ {int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_8, struct v4l2_subdev_fh *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10;
 const struct v4l2_mbus_framefmt VAR_11 = {
  .width = 1936,
  .height = 1096,
  .code = VAR_7[0].mbus_code,
  .field = VAR_3,
  .colorspace = VAR_2,
  .ycbcr_enc = VAR_6,
  .quantization = VAR_4,
  .xfer_func = VAR_5,
 };


 VAR_10 = FUNC_0(VAR_8, VAR_9->pad, VAR_0);
 *VAR_10 = VAR_11;


 VAR_10 = FUNC_0(VAR_8, VAR_9->pad, VAR_1);
 *VAR_10 = VAR_11;

 return 0;
}
