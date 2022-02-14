
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_streamparm {int dummy; } ;
struct isc_device {TYPE_1__* current_subdev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sd; } ;


 int FUNC_0 (int ,int ,struct v4l2_streamparm*) ;
 int FUNC_1 (struct file*) ;
 struct isc_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, struct v4l2_streamparm *VAR_2)
{
 struct isc_device *VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(FUNC_1(VAR_0), VAR_3->current_subdev->sd, VAR_2);
}
