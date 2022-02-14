
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aspeed_video {scalar_t__ flags; int v4l2_input_status; TYPE_1__* srcs; int res_work; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_video*,TYPE_1__*) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct aspeed_video *VAR_2)
{
 FUNC_3(VAR_1, &VAR_2->flags);
 FUNC_2(&VAR_2->res_work);

 FUNC_1(VAR_2);

 if (VAR_2->srcs[0].size)
  FUNC_0(VAR_2, &VAR_2->srcs[0]);

 if (VAR_2->srcs[1].size)
  FUNC_0(VAR_2, &VAR_2->srcs[1]);

 VAR_2->v4l2_input_status = VAR_0;
 VAR_2->flags = 0;
}
