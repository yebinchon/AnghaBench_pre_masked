
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int configured; int * part_table; int * stream_config; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vsp1_pipeline *VAR_0)
{
 FUNC_1(&VAR_0->lock);


 FUNC_2(VAR_0->stream_config);
 VAR_0->stream_config = ((void*)0);
 VAR_0->configured = 0;


 FUNC_0(VAR_0->part_table);
 VAR_0->part_table = ((void*)0);
}
