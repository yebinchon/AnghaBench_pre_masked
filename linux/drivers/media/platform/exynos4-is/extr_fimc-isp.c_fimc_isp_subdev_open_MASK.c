
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; int field; int code; int colorspace; } ;
struct TYPE_2__ {int mbus_code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_10,
    struct v4l2_subdev_fh *VAR_11)
{
 struct v4l2_mbus_framefmt *VAR_12;
 struct v4l2_mbus_framefmt VAR_13 = {
  .colorspace = VAR_7,
  .code = VAR_9[0].mbus_code,
  .width = VAR_1 + VAR_3,
  .height = VAR_0 + VAR_2,
  .field = VAR_8,
 };

 VAR_12 = FUNC_0(VAR_10, VAR_11->pad, VAR_4);
 *VAR_12 = VAR_13;

 VAR_12 = FUNC_0(VAR_10, VAR_11->pad, VAR_6);
 VAR_13.width = VAR_1;
 VAR_13.height = VAR_0;
 *VAR_12 = VAR_13;

 VAR_12 = FUNC_0(VAR_10, VAR_11->pad, VAR_5);
 *VAR_12 = VAR_13;

 return 0;
}
