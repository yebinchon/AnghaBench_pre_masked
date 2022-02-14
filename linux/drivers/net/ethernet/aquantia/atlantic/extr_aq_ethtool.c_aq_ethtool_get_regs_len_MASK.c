
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct aq_nic_s *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_0(VAR_1);

 return VAR_2 * sizeof(u32);
}
