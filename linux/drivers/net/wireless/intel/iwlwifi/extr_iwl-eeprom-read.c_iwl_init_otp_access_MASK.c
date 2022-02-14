
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ shadow_ram_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*,int ,int ) ;
 int FUNC_1 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct iwl_trans *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_4->trans_cfg);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4, VAR_0,
     VAR_1);
 FUNC_4(5);
 FUNC_0(VAR_4, VAR_0,
       VAR_1);





 if (VAR_4->trans_cfg->base_params->shadow_ram_support)
  FUNC_2(VAR_4, VAR_2,
       VAR_3);

 return 0;
}
