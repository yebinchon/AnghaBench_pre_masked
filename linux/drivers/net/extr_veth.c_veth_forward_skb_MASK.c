
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct veth_rq*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct sk_buff *VAR_1,
       struct veth_rq *VAR_2, bool VAR_3)
{
 return FUNC_0(VAR_0, VAR_1) ?: VAR_3 ?
  FUNC_2(VAR_2, VAR_1) :
  FUNC_1(VAR_1);
}
