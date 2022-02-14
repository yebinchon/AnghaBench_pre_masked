
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * qp; } ;
struct scif_endpt {size_t state; int backlog; int list; TYPE_2__ qp_info; int lock; int li_accept; int conwq; int conlist; scalar_t__ acceptcnt; scalar_t__ conreqcnt; } ;
typedef scalar_t__ scif_epd_t ;
struct TYPE_4__ {int this_device; } ;
struct TYPE_6__ {int eplock; int listen; TYPE_1__ mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct scif_endpt*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (struct scif_endpt*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(scif_epd_t VAR_4, int VAR_5)
{
 struct scif_endpt *VAR_6 = (struct scif_endpt *)VAR_4;

 FUNC_1(VAR_3.mdev.this_device,
  "SCIFAPI listen: ep %p %s\n", VAR_6, VAR_2[VAR_6->state]);
 FUNC_7(&VAR_6->lock);
 switch (VAR_6->state) {
 case 128:
 case 135:
 case 136:
 case 129:
 case 132:
  FUNC_8(&VAR_6->lock);
  return -VAR_0;
 case 131:
 case 134:
 case 133:
 case 130:
  FUNC_8(&VAR_6->lock);
  return -VAR_1;
 case 137:
  break;
 }

 VAR_6->state = 131;
 VAR_6->backlog = VAR_5;

 VAR_6->conreqcnt = 0;
 VAR_6->acceptcnt = 0;
 FUNC_0(&VAR_6->conlist);
 FUNC_2(&VAR_6->conwq);
 FUNC_0(&VAR_6->li_accept);
 FUNC_8(&VAR_6->lock);





 FUNC_6(VAR_6);
 VAR_6->qp_info.qp = ((void*)0);

 FUNC_4(&VAR_3.eplock);
 FUNC_3(&VAR_6->list, &VAR_3.listen);
 FUNC_5(&VAR_3.eplock);
 return 0;
}
