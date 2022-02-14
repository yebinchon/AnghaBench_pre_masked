
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct aq_nic_s {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aq_nic_s*,scalar_t__) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct aq_nic_s *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = FUNC_0(VAR_3, VAR_2 + VAR_0);

 if (VAR_4 < 0)
  goto err_exit;
 VAR_1->mtu = VAR_2;

err_exit:
 return VAR_4;
}
