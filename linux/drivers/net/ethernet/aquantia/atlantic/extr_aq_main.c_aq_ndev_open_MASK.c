
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*) ;
 int FUNC_3 (struct aq_nic_s*) ;
 int FUNC_4 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 int VAR_1 = 0;
 struct aq_nic_s *VAR_2 = FUNC_5(VAR_0);

 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1 < 0)
  goto err_exit;

 VAR_1 = FUNC_4(VAR_2);
 if (VAR_1 < 0)
  goto err_exit;

 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 < 0)
  goto err_exit;

 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1 < 0)
  goto err_exit;

err_exit:
 if (VAR_1 < 0)
  FUNC_1(VAR_2);
 return VAR_1;
}
