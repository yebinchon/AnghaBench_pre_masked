
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ie_types_robust_coex {int mode; } ;
struct host_cmd_ds_robust_coex {int action; } ;
struct TYPE_2__ {struct host_cmd_ds_robust_coex coex; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_2,
       struct host_cmd_ds_command *VAR_3,
       bool *VAR_4)
{
 struct host_cmd_ds_robust_coex *VAR_5 = &VAR_3->params.coex;
 struct mwifiex_ie_types_robust_coex *VAR_6;
 u16 VAR_7 = FUNC_0(VAR_5->action);
 u32 VAR_8;

 VAR_6 = (struct mwifiex_ie_types_robust_coex
      *)((u8 *)VAR_5 + sizeof(struct host_cmd_ds_robust_coex));
 if (VAR_7 == VAR_0) {
  VAR_8 = FUNC_1(VAR_6->mode);
  if (VAR_8 == VAR_1)
   *VAR_4 = 1;
  else
   *VAR_4 = 0;
 }

 return 0;
}
