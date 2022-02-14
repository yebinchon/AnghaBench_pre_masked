
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int dummy; } ;
struct netxen_recv_context {int * sds_rings; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct netxen_recv_context *VAR_1, int VAR_2)
{
 int VAR_3 = sizeof(struct nx_host_sds_ring) * VAR_2;

 VAR_1->sds_rings = FUNC_0(VAR_3, VAR_0);

 return VAR_1->sds_rings == ((void*)0);
}
