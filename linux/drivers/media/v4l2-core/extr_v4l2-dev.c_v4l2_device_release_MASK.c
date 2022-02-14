
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct video_device {size_t minor; scalar_t__ vfl_dir; int (* release ) (struct video_device*) ;TYPE_1__ entity; int intf_devnode; int * cdev; struct v4l2_device* v4l2_dev; } ;
struct v4l2_device {int * release; scalar_t__ mdev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct video_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct video_device*) ;
 struct video_device* FUNC_8 (struct device*) ;
 int FUNC_9 (struct v4l2_device*) ;
 struct video_device** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct device *VAR_4)
{
 struct video_device *VAR_5 = FUNC_8(VAR_4);
 struct v4l2_device *VAR_6 = VAR_5->v4l2_dev;

 FUNC_5(&VAR_3);
 if (FUNC_0(VAR_2[VAR_5->minor] != VAR_5)) {

  FUNC_6(&VAR_3);
  return;
 }


 VAR_2[VAR_5->minor] = ((void*)0);


 FUNC_1(VAR_5->cdev);


 VAR_5->cdev = ((void*)0);


 FUNC_2(VAR_5);

 FUNC_6(&VAR_3);
 if (VAR_6->release == ((void*)0))
  VAR_6 = ((void*)0);



 VAR_5->release(VAR_5);


 if (VAR_6)
  FUNC_9(VAR_6);
}
