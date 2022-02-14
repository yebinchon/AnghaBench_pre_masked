
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct s5p_jpeg_ctx {TYPE_1__* jpeg; } ;
struct TYPE_2__ {int slock; } ;


 scalar_t__ VAR_0 ;
 struct s5p_jpeg_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct s5p_jpeg_ctx*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_1)
{
 struct s5p_jpeg_ctx *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_2->jpeg->slock, VAR_3);

 if (VAR_1->id == VAR_0)
  VAR_4 = FUNC_1(VAR_2, &VAR_1->val);

 FUNC_3(&VAR_2->jpeg->slock, VAR_3);
 return VAR_4;
}
