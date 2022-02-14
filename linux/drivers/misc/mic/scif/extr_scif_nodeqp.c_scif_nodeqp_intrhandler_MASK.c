
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__ uop; } ;
struct scif_qp {int inbound_q; } ;
struct scif_dev {int dummy; } ;
typedef int msg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scif_dev*,struct scif_qp*,struct scifmsg*) ;
 int FUNC_1 (int *,struct scifmsg*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct scif_dev *VAR_1, struct scif_qp *VAR_2)
{
 struct scifmsg VAR_3;
 int VAR_4;

 do {
  VAR_4 = FUNC_1(&VAR_2->inbound_q, &VAR_3, sizeof(VAR_3));
  if (!VAR_4)
   break;
  FUNC_0(VAR_1, VAR_2, &VAR_3);




  if (VAR_0 == VAR_3.uop)
   break;
  FUNC_2(&VAR_2->inbound_q);
 } while (1);
}
