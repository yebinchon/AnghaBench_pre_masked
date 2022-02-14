
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int baid; } ;
struct TYPE_3__ {int sync; int type; } ;
struct iwl_mvm_rss_sync_notif {TYPE_2__ delba; TYPE_1__ metadata; } ;
struct iwl_mvm {int dummy; } ;
typedef int notif ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,void*,int) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_1, u8 VAR_2)
{
 struct iwl_mvm_rss_sync_notif VAR_3 = {
  .metadata.type = VAR_0,
  .metadata.sync = 1,
  .delba.baid = VAR_2,
 };
 FUNC_0(VAR_1, (void *)&VAR_3, sizeof(VAR_3));
}
