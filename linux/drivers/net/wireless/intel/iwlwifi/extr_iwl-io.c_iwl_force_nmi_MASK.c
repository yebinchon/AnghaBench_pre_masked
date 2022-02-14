
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwl_trans*,int ,int ) ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;

void FUNC_2(struct iwl_trans *VAR_8)
{
 if (VAR_8->trans_cfg->device_family < VAR_2)
  FUNC_0(VAR_8, VAR_0,
          VAR_1);
 else if (VAR_8->trans_cfg->device_family < VAR_3)
  FUNC_1(VAR_8, VAR_6,
    VAR_7);
 else
  FUNC_1(VAR_8, VAR_4,
        VAR_5);
}
