
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qede_rx_queue {int rcv_pkts; scalar_t__ filled_buffers; scalar_t__ num_rx_buffers; int rx_comp_ring; int * hw_cons_ptr; } ;
struct qede_fastpath {struct qede_dev* edev; struct qede_rx_queue* rxq; } ;
struct qede_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct qede_rx_queue*,int) ;
 scalar_t__ FUNC_4 (struct qede_dev*,struct qede_fastpath*,struct qede_rx_queue*) ;
 int FUNC_5 (struct qede_dev*,struct qede_rx_queue*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct qede_fastpath *VAR_0, int VAR_1)
{
 struct qede_rx_queue *VAR_2 = VAR_0->rxq;
 struct qede_dev *VAR_3 = VAR_0->edev;
 int VAR_4 = 0, VAR_5 = 0;
 u16 VAR_6, VAR_7;

 VAR_6 = FUNC_0(*VAR_2->hw_cons_ptr);
 VAR_7 = FUNC_1(&VAR_2->rx_comp_ring);






 FUNC_6();


 while ((VAR_7 != VAR_6) && (VAR_4 < VAR_1)) {
  VAR_5 += FUNC_4(VAR_3, VAR_0, VAR_2);
  FUNC_2(&VAR_2->rx_comp_ring);
  VAR_7 = FUNC_1(&VAR_2->rx_comp_ring);
  VAR_4++;
 }

 VAR_2->rcv_pkts += VAR_5;


 while (VAR_2->num_rx_buffers - VAR_2->filled_buffers)
  if (FUNC_3(VAR_2, 0))
   break;


 FUNC_5(VAR_3, VAR_2);

 return VAR_4;
}
