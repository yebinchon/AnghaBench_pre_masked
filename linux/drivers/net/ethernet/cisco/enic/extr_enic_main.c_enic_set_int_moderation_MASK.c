
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vnic_rq {int index; } ;
struct vnic_cq {scalar_t__ tobe_rx_coal_timeval; scalar_t__ cur_rx_coal_timeval; } ;
struct enic {int * intr; struct vnic_cq* cq; } ;


 size_t FUNC_0 (struct enic*,int ) ;
 unsigned int FUNC_1 (struct enic*,int ) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct enic *VAR_0, struct vnic_rq *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_0, VAR_1->index);
 struct vnic_cq *VAR_3 = &VAR_0->cq[FUNC_0(VAR_0, VAR_1->index)];
 u32 VAR_4 = VAR_3->tobe_rx_coal_timeval;

 if (VAR_3->tobe_rx_coal_timeval != VAR_3->cur_rx_coal_timeval) {
  FUNC_2(&VAR_0->intr[VAR_2], VAR_4);
  VAR_3->cur_rx_coal_timeval = VAR_3->tobe_rx_coal_timeval;
 }
}
