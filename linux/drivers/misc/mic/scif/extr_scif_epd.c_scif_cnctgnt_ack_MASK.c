
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scifmsg {scalar_t__* payload; } ;
struct scif_endpt {int lock; int conwq; int list; int state; } ;
struct scif_dev {int dummy; } ;
struct TYPE_2__ {int connlock; int connected; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct scif_dev *VAR_2, struct scifmsg *VAR_3)
{
 struct scif_endpt *VAR_4 = (struct scif_endpt *)VAR_3->payload[0];

 FUNC_1(&VAR_1.connlock);
 FUNC_3(&VAR_4->lock);

 VAR_4->state = VAR_0;
 FUNC_0(&VAR_4->list, &VAR_1.connected);
 FUNC_5(&VAR_4->conwq);
 FUNC_4(&VAR_4->lock);
 FUNC_2(&VAR_1.connlock);
}
