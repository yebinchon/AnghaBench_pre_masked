
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_lut {int lock; int lut; int pool; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_2__ {int * p_u32; } ;
struct v4l2_ctrl {TYPE_1__ p_new; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct vsp1_dl_body*) ;
 struct vsp1_dl_body* FUNC_3 (int ) ;
 int FUNC_4 (struct vsp1_dl_body*) ;
 int FUNC_5 (struct vsp1_dl_body*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct vsp1_lut *VAR_3, struct v4l2_ctrl *VAR_4)
{
 struct vsp1_dl_body *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_3(VAR_3->pool);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  FUNC_5(VAR_5, VAR_2 + 4 * VAR_6,
           VAR_4->p_new.p_u32[VAR_6]);

 FUNC_0(&VAR_3->lock);
 FUNC_2(VAR_3->lut, VAR_5);
 FUNC_1(&VAR_3->lock);

 FUNC_4(VAR_5);
 return 0;
}
