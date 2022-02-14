
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fimc_md {int v4l2_dev; TYPE_6__* fimc_is; TYPE_4__* csis; struct fimc_lite** fimc_lite; struct fimc_dev** fimc; } ;
struct TYPE_9__ {int * pipe; } ;
struct fimc_lite {TYPE_3__ ve; int subdev; } ;
struct TYPE_7__ {int * pipe; } ;
struct TYPE_8__ {TYPE_1__ ve; int subdev; } ;
struct fimc_dev {TYPE_2__ vid_cap; } ;
struct TYPE_11__ {int subdev; } ;
struct TYPE_12__ {TYPE_5__ isp; } ;
struct TYPE_10__ {int * sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct fimc_md *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct fimc_dev *VAR_5 = VAR_3->fimc[VAR_4];
  if (VAR_5 == ((void*)0))
   continue;
  FUNC_0(&VAR_5->vid_cap.subdev);
  VAR_5->vid_cap.ve.pipe = ((void*)0);
  VAR_3->fimc[VAR_4] = ((void*)0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct fimc_lite *VAR_6 = VAR_3->fimc_lite[VAR_4];
  if (VAR_6 == ((void*)0))
   continue;
  FUNC_0(&VAR_6->subdev);
  VAR_6->ve.pipe = ((void*)0);
  VAR_3->fimc_lite[VAR_4] = ((void*)0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->csis[VAR_4].sd == ((void*)0))
   continue;
  FUNC_0(VAR_3->csis[VAR_4].sd);
  VAR_3->csis[VAR_4].sd = ((void*)0);
 }

 if (VAR_3->fimc_is)
  FUNC_0(&VAR_3->fimc_is->isp.subdev);

 FUNC_1(&VAR_3->v4l2_dev, "Unregistered all entities\n");
}
