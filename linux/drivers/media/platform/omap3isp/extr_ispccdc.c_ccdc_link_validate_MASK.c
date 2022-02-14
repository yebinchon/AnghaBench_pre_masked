
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct media_link {TYPE_1__* source; } ;
struct isp_ccdc_device {scalar_t__ input; } ;
struct TYPE_6__ {unsigned long data_lane_shift; } ;
struct TYPE_7__ {TYPE_2__ parallel; } ;
struct isp_bus_cfg {TYPE_3__ bus; } ;
struct TYPE_5__ {int entity; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 struct v4l2_subdev* FUNC_1 (int ) ;
 struct isp_ccdc_device* FUNC_2 (struct v4l2_subdev*) ;
 struct isp_bus_cfg* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
         struct media_link *VAR_3,
         struct v4l2_subdev_format *VAR_4,
         struct v4l2_subdev_format *VAR_5)
{
 struct isp_ccdc_device *VAR_6 = FUNC_2(VAR_2);
 unsigned long VAR_7;


 if (VAR_4->format.width != VAR_5->format.width ||
     VAR_4->format.height != VAR_5->format.height)
  return -VAR_1;


 if (VAR_6->input == VAR_0) {
  struct v4l2_subdev *VAR_8 =
   FUNC_1(VAR_3->source->entity);
  struct isp_bus_cfg *VAR_9 = FUNC_3(VAR_8);

  VAR_7 = VAR_9->bus.parallel.data_lane_shift;
 } else {
  VAR_7 = 0;
 }


 if (!FUNC_0(VAR_4->format.code,
          VAR_5->format.code, VAR_7))
  return -VAR_1;

 return 0;
}
