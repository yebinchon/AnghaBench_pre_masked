
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int xdp_ring; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct veth_rq *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_2(FUNC_1(&VAR_2->xdp_ring, VAR_3))) {
  FUNC_0(VAR_3);
  return VAR_0;
 }

 return VAR_1;
}
