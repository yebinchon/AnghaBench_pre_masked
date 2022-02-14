
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_2__ {int aq_hw_caps; } ;


 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,int ) ;

__attribute__((used)) static int FUNC_2(struct aq_hw_s *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0, VAR_0->aq_nic_cfg->aq_hw_caps);
 if (VAR_1 < 0)
  goto err_exit;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  goto err_exit;

err_exit:
 return VAR_1;
}
