
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_video {int dummy; } ;
struct vsp1_pipeline {int frame_end; } ;


 int FUNC_0 (struct vsp1_pipeline*) ;
 int FUNC_1 (struct vsp1_pipeline*,struct vsp1_video*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct vsp1_pipeline *VAR_1,
        struct vsp1_video *VAR_2)
{
 FUNC_0(VAR_1);

 VAR_1->frame_end = VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
