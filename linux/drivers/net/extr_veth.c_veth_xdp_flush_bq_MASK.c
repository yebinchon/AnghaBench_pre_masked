
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_xdp_tx_bq {int count; int * q; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int,int,int) ;
 int FUNC_1 (struct net_device*,int,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct veth_xdp_tx_bq *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1->count, VAR_1->q, 0);
 if (VAR_2 < 0) {
  VAR_4 = VAR_2;
  VAR_2 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
   FUNC_2(VAR_1->q[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_2, VAR_1->count - VAR_2, VAR_4);

 VAR_1->count = 0;
}
