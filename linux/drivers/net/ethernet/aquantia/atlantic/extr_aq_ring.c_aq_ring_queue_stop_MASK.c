
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aq_ring_s {int idx; int aq_nic; } ;


 int FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;

void FUNC_3(struct aq_ring_s *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0->aq_nic);

 if (!FUNC_0(VAR_1, VAR_0->idx))
  FUNC_2(VAR_1, VAR_0->idx);
}
