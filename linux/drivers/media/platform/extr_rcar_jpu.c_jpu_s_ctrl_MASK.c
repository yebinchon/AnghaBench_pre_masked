
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct jpu_ctx {TYPE_1__* jpu; int compr_quality; } ;
struct TYPE_2__ {int lock; } ;


 scalar_t__ VAR_0 ;
 struct jpu_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct jpu_ctx *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->jpu->lock, VAR_3);
 if (VAR_1->id == VAR_0)
  VAR_2->compr_quality = VAR_1->val;
 FUNC_2(&VAR_2->jpu->lock, VAR_3);

 return 0;
}
