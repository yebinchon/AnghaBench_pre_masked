
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int dummy; } ;
struct vsp1_partition_window {int dummy; } ;
struct vsp1_partition {struct vsp1_partition_window rpf; } ;
struct vsp1_entity {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct vsp1_entity *VAR_0,
     struct vsp1_pipeline *VAR_1,
     struct vsp1_partition *VAR_2,
     unsigned int VAR_3,
     struct vsp1_partition_window *VAR_4)
{
 VAR_2->rpf = *VAR_4;
}
