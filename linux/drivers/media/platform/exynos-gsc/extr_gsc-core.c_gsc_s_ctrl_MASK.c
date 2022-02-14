
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int dummy; } ;
struct gsc_ctx {TYPE_1__* gsc_dev; } ;
struct TYPE_2__ {int slock; } ;


 int FUNC_0 (struct gsc_ctx*,struct v4l2_ctrl*) ;
 struct gsc_ctx* FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_0)
{
 struct gsc_ctx *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->gsc_dev->slock, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_3(&VAR_1->gsc_dev->slock, VAR_2);

 return VAR_3;
}
