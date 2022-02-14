
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int adapter_id; unsigned short address; } ;
struct TYPE_4__ {TYPE_1__ i2c; } ;
struct v4l2_async_subdev {TYPE_2__ match; int match_type; } ;
struct v4l2_async_notifier {int dummy; } ;


 int VAR_0 ;
 struct v4l2_async_subdev* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct v4l2_async_subdev*) ;
 struct v4l2_async_subdev* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct v4l2_async_notifier*,struct v4l2_async_subdev*) ;

struct v4l2_async_subdev *
FUNC_4(struct v4l2_async_notifier *VAR_3,
       int VAR_4, unsigned short VAR_5,
       unsigned int VAR_6)
{
 struct v4l2_async_subdev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->match_type = VAR_2;
 VAR_7->match.i2c.adapter_id = VAR_4;
 VAR_7->match.i2c.address = VAR_5;

 VAR_8 = FUNC_3(VAR_3, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
