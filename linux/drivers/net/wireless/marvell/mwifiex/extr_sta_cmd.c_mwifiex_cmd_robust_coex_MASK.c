
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct TYPE_4__ {void* len; void* type; } ;
struct mwifiex_ie_types_robust_coex {void* mode; TYPE_2__ header; } ;
struct host_cmd_ds_robust_coex {scalar_t__ action; } ;
struct TYPE_3__ {struct host_cmd_ds_robust_coex coex; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_6,
       struct host_cmd_ds_command *VAR_7,
       u16 VAR_8, bool *VAR_9)
{
 struct host_cmd_ds_robust_coex *VAR_10 = &VAR_7->params.coex;
 struct mwifiex_ie_types_robust_coex *VAR_11;

 VAR_7->command = FUNC_0(VAR_1);
 VAR_7->size = FUNC_0(sizeof(*VAR_10) + sizeof(*VAR_11) + VAR_4);

 VAR_10->action = FUNC_0(VAR_8);
 VAR_11 = (struct mwifiex_ie_types_robust_coex *)
    ((u8 *)VAR_10 + sizeof(*VAR_10));
 VAR_11->header.type = FUNC_0(VAR_5);
 VAR_11->header.len = FUNC_0(sizeof(VAR_11->mode));

 if (VAR_10->action == VAR_0)
  return 0;

 if (*VAR_9)
  VAR_11->mode = FUNC_1(VAR_3);
 else
  VAR_11->mode = FUNC_1(VAR_2);

 return 0;
}
