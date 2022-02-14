
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx18 {TYPE_2__* streams; } ;
struct TYPE_3__ {scalar_t__ v4l2_dev; } ;
struct TYPE_4__ {int out_work_order; TYPE_1__ video_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->streams[VAR_2].video_dev.v4l2_dev)
   FUNC_0(&VAR_1->streams[VAR_2].out_work_order);
}
