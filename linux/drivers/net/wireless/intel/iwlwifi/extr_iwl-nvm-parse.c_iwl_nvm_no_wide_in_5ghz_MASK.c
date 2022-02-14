
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_trans {int dev; TYPE_1__* trans_cfg; } ;
struct iwl_cfg {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static bool
FUNC_2(struct iwl_trans *VAR_2, const struct iwl_cfg *VAR_3,
   const __be16 *VAR_4)
{
 if (VAR_2->trans_cfg->device_family == VAR_0) {




  u16 VAR_5 = FUNC_1(VAR_4 + VAR_1);
  u8 VAR_6 = (VAR_5 & 0x1e) >> 1;

  if (VAR_6 == 5 || VAR_6 == 9) {
   FUNC_0(VAR_2->dev,
      "disabling wide channels in 5GHz (0x%0x %d)\n",
      VAR_5, VAR_6);
   return 1;
  }
 }

 return 0;
}
