
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ intr_type; } ;
struct vxgedev {int no_of_vpath; TYPE_3__* vpaths; int napi; TYPE_1__ config; } ;
struct TYPE_5__ {int napi; } ;
struct TYPE_6__ {TYPE_2__ ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vxgedev *VAR_1)
{
 int VAR_2;
 if (VAR_1->config.intr_type != VAR_0)
  FUNC_0(&VAR_1->napi);
 else {
  for (VAR_2 = 0; VAR_2 < VAR_1->no_of_vpath; VAR_2++)
   FUNC_0(&VAR_1->vpaths[VAR_2].ring.napi);
 }
}
