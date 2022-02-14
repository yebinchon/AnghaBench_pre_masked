
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t cpu; } ;
struct dpaa2_io {int node; TYPE_1__ dpio_desc; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpaa2_io*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dpaa2_io *VAR_2)
{
 FUNC_2(&VAR_1);
 VAR_0[VAR_2->dpio_desc.cpu] = ((void*)0);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_1);

 FUNC_0(VAR_2);
}
