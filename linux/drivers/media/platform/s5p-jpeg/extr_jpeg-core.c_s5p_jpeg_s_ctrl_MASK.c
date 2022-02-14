
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; } ;
struct s5p_jpeg_ctx {TYPE_1__* jpeg; int subsampling; int restart_interval; int compr_quality; } ;
struct TYPE_2__ {int slock; } ;





 struct s5p_jpeg_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_0)
{
 struct s5p_jpeg_ctx *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 FUNC_1(&VAR_1->jpeg->slock, VAR_2);

 switch (VAR_0->id) {
 case 129:
  VAR_1->compr_quality = VAR_0->val;
  break;
 case 128:
  VAR_1->restart_interval = VAR_0->val;
  break;
 case 130:
  VAR_1->subsampling = VAR_0->val;
  break;
 }

 FUNC_2(&VAR_1->jpeg->slock, VAR_2);
 return 0;
}
