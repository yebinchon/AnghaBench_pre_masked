
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tx_packet {int queue; } ;
struct ipw_hardware {int lock; int tx_queued; int * tx_queue; } ;


 int FUNC_0 (struct ipw_hardware*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipw_hardware *VAR_0, int VAR_1,
   struct ipw_tx_packet *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);
 FUNC_1(&VAR_2->queue, &VAR_0->tx_queue[VAR_1]);
 VAR_0->tx_queued++;
 FUNC_3(&VAR_0->lock, VAR_3);

 FUNC_0(VAR_0);
}
