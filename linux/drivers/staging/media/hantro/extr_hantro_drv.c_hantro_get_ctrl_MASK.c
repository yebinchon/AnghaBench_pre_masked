
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* p; } ;
struct v4l2_ctrl {TYPE_1__ p_cur; } ;
struct hantro_ctx {int ctrl_handler; } ;


 struct v4l2_ctrl* FUNC_0 (int *,int ) ;

void *FUNC_1(struct hantro_ctx *VAR_0, u32 VAR_1)
{
 struct v4l2_ctrl *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->ctrl_handler, VAR_1);
 return VAR_2 ? VAR_2->p_cur.p : ((void*)0);
}
