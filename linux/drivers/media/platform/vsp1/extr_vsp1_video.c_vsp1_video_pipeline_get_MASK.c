
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_video {TYPE_2__* rwpf; } ;
struct vsp1_pipeline {int kref; } ;
struct TYPE_3__ {struct vsp1_pipeline* pipe; } ;
struct TYPE_4__ {TYPE_1__ entity; } ;


 int VAR_0 ;
 struct vsp1_pipeline* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct vsp1_pipeline*) ;
 int FUNC_2 (int *) ;
 struct vsp1_pipeline* FUNC_3 (int,int ) ;
 int FUNC_4 (struct vsp1_pipeline*) ;
 int FUNC_5 (struct vsp1_pipeline*,struct vsp1_video*) ;

__attribute__((used)) static struct vsp1_pipeline *FUNC_6(struct vsp1_video *VAR_2)
{
 struct vsp1_pipeline *VAR_3;
 int VAR_4;







 if (!VAR_2->rwpf->entity.pipe) {
  VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
  if (!VAR_3)
   return FUNC_0(-VAR_0);

  VAR_4 = FUNC_5(VAR_3, VAR_2);
  if (VAR_4 < 0) {
   FUNC_4(VAR_3);
   FUNC_1(VAR_3);
   return FUNC_0(VAR_4);
  }
 } else {
  VAR_3 = VAR_2->rwpf->entity.pipe;
  FUNC_2(&VAR_3->kref);
 }

 return VAR_3;
}
