
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__* payload; } ;
struct scif_endpt {int discon; int lock; int state; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_1, struct scifmsg *VAR_2)
{
 struct scif_endpt *VAR_3 = (struct scif_endpt *)VAR_2->payload[0];

 FUNC_1(&VAR_3->lock);
 VAR_3->state = VAR_0;
 FUNC_2(&VAR_3->lock);
 FUNC_0(&VAR_3->discon);
}
