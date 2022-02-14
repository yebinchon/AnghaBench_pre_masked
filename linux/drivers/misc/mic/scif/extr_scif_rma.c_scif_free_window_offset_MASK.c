
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_window {int offset_freed; } ;
struct TYPE_2__ {int iovad; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct scif_endpt *VAR_1,
        struct scif_window *VAR_2, s64 VAR_3)
{
 if ((VAR_2 && !VAR_2->offset_freed) || !VAR_2) {
  FUNC_0(&VAR_1->rma_info.iovad, VAR_3 >> VAR_0);
  if (VAR_2)
   VAR_2->offset_freed = 1;
 }
}
