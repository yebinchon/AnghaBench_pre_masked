
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmaqueue_flags; } ;
struct isp_res_device {scalar_t__ state; TYPE_1__ video_out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct isp_res_device*) ;

void FUNC_2(struct isp_res_device *VAR_2)
{






 if (VAR_2->state == VAR_0 &&
     VAR_2->video_out.dmaqueue_flags & VAR_1) {
  FUNC_1(VAR_2);
  FUNC_0(&VAR_2->video_out);
 }
}
