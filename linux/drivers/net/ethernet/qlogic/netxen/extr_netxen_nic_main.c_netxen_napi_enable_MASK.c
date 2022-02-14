
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int napi; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; } ;
struct netxen_adapter {int max_sds_rings; struct netxen_recv_context recv_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nx_host_sds_ring*) ;

__attribute__((used)) static void
FUNC_2(struct netxen_adapter *VAR_0)
{
 int VAR_1;
 struct nx_host_sds_ring *VAR_2;
 struct netxen_recv_context *VAR_3 = &VAR_0->recv_ctx;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_sds_rings; VAR_1++) {
  VAR_2 = &VAR_3->sds_rings[VAR_1];
  FUNC_0(&VAR_2->napi);
  FUNC_1(VAR_2);
 }
}
