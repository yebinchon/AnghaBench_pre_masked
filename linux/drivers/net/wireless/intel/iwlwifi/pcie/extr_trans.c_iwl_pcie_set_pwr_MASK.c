
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int dev; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ apmg_not_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_trans *VAR_5, bool VAR_6)
{
 if (VAR_5->cfg->apmg_not_supported)
  return;

 if (VAR_6 && FUNC_1(FUNC_2(VAR_5->dev), VAR_4))
  FUNC_0(VAR_5, VAR_1,
           VAR_2,
           ~VAR_0);
 else
  FUNC_0(VAR_5, VAR_1,
           VAR_3,
           ~VAR_0);
}
