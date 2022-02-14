
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct isp_prev_device {TYPE_1__ subdev; int video_out; int video_in; int ctrls; } ;
struct isp_device {struct isp_prev_device isp_prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct isp_device *VAR_0)
{
 struct isp_prev_device *VAR_1 = &VAR_0->isp_prev;

 FUNC_2(&VAR_1->ctrls);
 FUNC_1(&VAR_1->video_in);
 FUNC_1(&VAR_1->video_out);
 FUNC_0(&VAR_1->subdev.entity);
}
