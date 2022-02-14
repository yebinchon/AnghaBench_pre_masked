
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {TYPE_3__* trans; int fwrt; } ;
struct TYPE_7__ {TYPE_2__* cfg; TYPE_1__* trans_cfg; int hw_rev; } ;
struct TYPE_6__ {int apmg_not_supported; } ;
struct TYPE_5__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct iwl_mvm*,char*,int,int,int) ;
 scalar_t__ VAR_22 ;
 struct iwl_mvm* FUNC_3 (struct iwl_op_mode*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct iwl_op_mode *VAR_23)
{
 struct iwl_mvm *VAR_24 = FUNC_3(VAR_23);
 u8 VAR_25, VAR_26, VAR_27;
 u32 VAR_28 = 0;
 u32 VAR_29 = FUNC_6(VAR_24);

 VAR_25 = (VAR_29 & VAR_20) >>
    VAR_21;
 VAR_26 = (VAR_29 & VAR_18) >>
    VAR_19;
 VAR_27 = (VAR_29 & VAR_16) >>
    VAR_17;


 VAR_28 |= FUNC_1(VAR_24->trans->hw_rev) <<
    VAR_12;
 VAR_28 |= FUNC_0(VAR_24->trans->hw_rev) <<
    VAR_11;


 VAR_28 |= VAR_25 << VAR_15;
 VAR_28 |= VAR_26 << VAR_14;
 VAR_28 |= VAR_27 << VAR_13;

 FUNC_4((VAR_25 << VAR_15) &
   ~VAR_10);
 if (VAR_24->trans->trans_cfg->device_family < VAR_22)
  VAR_28 |= VAR_4;

 if (FUNC_5(&VAR_24->fwrt))
  VAR_28 |= VAR_5;

 FUNC_8(VAR_24->trans, VAR_2,
    VAR_6 |
    VAR_7 |
    VAR_10 |
    VAR_9 |
    VAR_8 |
    VAR_4 |
    VAR_3 |
    VAR_5,
    VAR_28);

 FUNC_2(VAR_24, "Radio type=0x%x-0x%x-0x%x\n", VAR_25,
         VAR_26, VAR_27);






 if (!VAR_24->trans->cfg->apmg_not_supported)
  FUNC_7(VAR_24->trans, VAR_1,
           VAR_0,
           ~VAR_0);
}
