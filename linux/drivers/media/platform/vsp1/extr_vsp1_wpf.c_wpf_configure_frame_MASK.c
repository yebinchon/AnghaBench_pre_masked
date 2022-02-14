
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int active; unsigned int const pending; int lock; } ;
struct vsp1_rwpf {int alpha; int outfmt; TYPE_1__ flip; } ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vsp1_rwpf* FUNC_3 (int *) ;
 int FUNC_4 (struct vsp1_rwpf*,struct vsp1_dl_body*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct vsp1_entity *VAR_6,
    struct vsp1_pipeline *VAR_7,
    struct vsp1_dl_list *VAR_8,
    struct vsp1_dl_body *VAR_9)
{
 const unsigned int VAR_10 = FUNC_0(VAR_5)
    | FUNC_0(VAR_4);
 struct vsp1_rwpf *VAR_11 = FUNC_3(&VAR_6->subdev);
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_1(&VAR_11->flip.lock, VAR_12);
 VAR_11->flip.active = (VAR_11->flip.active & ~VAR_10)
    | (VAR_11->flip.pending & VAR_10);
 FUNC_2(&VAR_11->flip.lock, VAR_12);

 VAR_13 = (VAR_11->alpha << VAR_3) | VAR_11->outfmt;

 if (VAR_11->flip.active & FUNC_0(VAR_5))
  VAR_13 |= VAR_1;
 if (VAR_11->flip.active & FUNC_0(VAR_4))
  VAR_13 |= VAR_2;

 FUNC_4(VAR_11, VAR_9, VAR_0, VAR_13);
}
