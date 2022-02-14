
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_drm_pipeline {int force_brx_release; int wait_queue; int du_private; int (* du_complete ) (int ,unsigned int,int ) ;struct vsp1_entity* uif; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 struct vsp1_drm_pipeline* FUNC_2 (struct vsp1_pipeline*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vsp1_pipeline *VAR_3,
           unsigned int VAR_4)
{
 struct vsp1_drm_pipeline *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5->du_complete) {
  struct vsp1_entity *VAR_6 = VAR_5->uif;
  unsigned int VAR_7 = VAR_4
        & (VAR_1 |
           VAR_2);
  u32 VAR_8;

  VAR_8 = VAR_6 ? FUNC_3(FUNC_1(&VAR_6->subdev)) : 0;
  VAR_5->du_complete(VAR_5->du_private, VAR_7, VAR_8);
 }

 if (VAR_4 & VAR_0) {
  VAR_5->force_brx_release = 0;
  FUNC_4(&VAR_5->wait_queue);
 }
}
