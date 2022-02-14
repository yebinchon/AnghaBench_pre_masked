
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {TYPE_1__* adapter; } ;
struct host_cmd_ds_command {int dummy; } ;
struct TYPE_2__ {scalar_t__ key_api_major_ver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_1 (struct mwifiex_private*,struct host_cmd_ds_command*) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_1,
        struct host_cmd_ds_command *VAR_2)
{
 if (VAR_1->adapter->key_api_major_ver == VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
