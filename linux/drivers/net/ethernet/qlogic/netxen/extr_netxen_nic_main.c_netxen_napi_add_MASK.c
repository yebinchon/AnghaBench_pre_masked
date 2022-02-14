
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int napi; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; } ;
struct netxen_adapter {int max_sds_rings; struct netxen_recv_context recv_ctx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct netxen_recv_context*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct netxen_adapter *VAR_3, struct net_device *VAR_4)
{
 int VAR_5;
 struct nx_host_sds_ring *VAR_6;
 struct netxen_recv_context *VAR_7 = &VAR_3->recv_ctx;

 if (FUNC_1(VAR_7, VAR_3->max_sds_rings))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->max_sds_rings; VAR_5++) {
  VAR_6 = &VAR_7->sds_rings[VAR_5];
  FUNC_0(VAR_4, &VAR_6->napi,
    VAR_2, VAR_1);
 }

 return 0;
}
