
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int req; } ;
struct TYPE_5__ {TYPE_1__ req_obj; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;
struct hantro_ctx {TYPE_3__* dev; int ctrl_handler; } ;
struct TYPE_6__ {int watchdog_work; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct hantro_ctx*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct hantro_ctx *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_3(VAR_1->vb2_buf.req_obj.req,
       &VAR_0->ctrl_handler);


 FUNC_2(&VAR_0->dev->watchdog_work,
         FUNC_1(2000));
}
