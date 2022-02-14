
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int * rx_buf_arr; } ;
struct qlcnic_adapter {int max_rds_rings; struct qlcnic_recv_context* recv_ctx; } ;


 int FUNC_0 (struct qlcnic_host_rds_ring*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_recv_context *VAR_1;
 struct qlcnic_host_rds_ring *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->recv_ctx;

 if (VAR_1->rds_rings == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->max_rds_rings; VAR_3++) {
  VAR_2 = &VAR_1->rds_rings[VAR_3];
  FUNC_1(VAR_2->rx_buf_arr);
  VAR_2->rx_buf_arr = ((void*)0);
 }
 FUNC_0(VAR_1->rds_rings);
}
