
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__* payload; } ;
struct scif_endpt {scalar_t__ state; int lock; int conwq; } ;
struct scif_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_2, struct scifmsg *VAR_3)
{
 struct scif_endpt *VAR_4 = (struct scif_endpt *)VAR_3->payload[0];

 FUNC_0(&VAR_4->lock);
 if (VAR_1 == VAR_4->state) {
  VAR_4->state = VAR_0;
  FUNC_2(&VAR_4->conwq);
 }
 FUNC_1(&VAR_4->lock);
}
