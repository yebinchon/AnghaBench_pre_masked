
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_pipeline {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct vsp1_clu {scalar_t__ mode; int lock; struct vsp1_dl_body* clu; scalar_t__ yuv_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vsp1_clu* FUNC_2 (int *) ;
 int FUNC_3 (struct vsp1_clu*,struct vsp1_dl_body*,int ,int) ;
 int FUNC_4 (struct vsp1_dl_body*) ;
 int FUNC_5 (struct vsp1_dl_list*,struct vsp1_dl_body*) ;

__attribute__((used)) static void FUNC_6(struct vsp1_entity *VAR_11,
    struct vsp1_pipeline *VAR_12,
    struct vsp1_dl_list *VAR_13,
    struct vsp1_dl_body *VAR_14)
{
 struct vsp1_clu *VAR_15 = FUNC_2(&VAR_11->subdev);
 struct vsp1_dl_body *VAR_16;
 unsigned long VAR_17;
 u32 VAR_18 = VAR_2 | VAR_7 | VAR_5;


 if (VAR_15->mode == VAR_0 && VAR_15->yuv_mode)
  VAR_18 |= VAR_3 | VAR_4
       | VAR_8 | VAR_9
       | VAR_10 | VAR_6;

 FUNC_3(VAR_15, VAR_14, VAR_1, VAR_18);

 FUNC_0(&VAR_15->lock, VAR_17);
 VAR_16 = VAR_15->clu;
 VAR_15->clu = ((void*)0);
 FUNC_1(&VAR_15->lock, VAR_17);

 if (VAR_16) {
  FUNC_5(VAR_13, VAR_16);


  FUNC_4(VAR_16);
 }
}
