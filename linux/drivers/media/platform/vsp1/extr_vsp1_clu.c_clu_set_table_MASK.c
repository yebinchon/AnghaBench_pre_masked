
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_body {int dummy; } ;
struct vsp1_clu {int lock; int clu; int pool; } ;
struct TYPE_2__ {int * p_u32; } ;
struct v4l2_ctrl {TYPE_1__ p_new; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct vsp1_dl_body*) ;
 struct vsp1_dl_body* FUNC_3 (int ) ;
 int FUNC_4 (struct vsp1_dl_body*) ;
 int FUNC_5 (struct vsp1_dl_body*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vsp1_clu *VAR_4, struct v4l2_ctrl *VAR_5)
{
 struct vsp1_dl_body *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_3(VAR_4->pool);
 if (!VAR_6)
  return -VAR_1;

 FUNC_5(VAR_6, VAR_2, 0);
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
  FUNC_5(VAR_6, VAR_3, VAR_5->p_new.p_u32[VAR_7]);

 FUNC_0(&VAR_4->lock);
 FUNC_2(VAR_4->clu, VAR_6);
 FUNC_1(&VAR_4->lock);

 FUNC_4(VAR_6);
 return 0;
}
