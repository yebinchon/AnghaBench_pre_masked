
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_video {int pipe_index; TYPE_1__* rwpf; } ;
struct vsp1_vb2_buffer {int mem; } ;
struct vsp1_rwpf {struct vsp1_video* video; } ;
struct vsp1_pipeline {int buffers_ready; } ;
struct TYPE_2__ {int mem; } ;


 struct vsp1_vb2_buffer* FUNC_0 (struct vsp1_video*) ;

__attribute__((used)) static void FUNC_1(struct vsp1_pipeline *VAR_0,
     struct vsp1_rwpf *VAR_1)
{
 struct vsp1_video *VAR_2 = VAR_1->video;
 struct vsp1_vb2_buffer *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 VAR_2->rwpf->mem = VAR_3->mem;
 VAR_0->buffers_ready |= 1 << VAR_2->pipe_index;
}
