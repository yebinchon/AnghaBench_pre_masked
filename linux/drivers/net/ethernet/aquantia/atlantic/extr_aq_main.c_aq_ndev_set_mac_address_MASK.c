
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*,struct net_device*) ;
 int FUNC_1 (struct net_device*,void*) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 < 0)
  goto err_exit;
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 < 0)
  goto err_exit;

err_exit:
 return VAR_3;
}
