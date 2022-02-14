
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_sequence; } ;
struct TYPE_5__ {TYPE_1__ frame_sync; } ;
struct v4l2_event {TYPE_2__ u; int type; } ;
struct TYPE_6__ {int devnode; } ;
struct cio2_queue {TYPE_3__ subdev; int frame_sequence; } ;
struct cio2_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct v4l2_event*) ;

__attribute__((used)) static void FUNC_2(struct cio2_device *VAR_1, struct cio2_queue *VAR_2)
{





 struct v4l2_event VAR_3 = {
  .type = VAR_0,
  .u.frame_sync.frame_sequence = FUNC_0(&VAR_2->frame_sequence),
 };

 FUNC_1(VAR_2->subdev.devnode, &VAR_3);
}
