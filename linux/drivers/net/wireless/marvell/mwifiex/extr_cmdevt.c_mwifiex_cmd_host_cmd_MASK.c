
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int adapter; } ;
struct mwifiex_ds_misc_cmd {int len; int cmd; } ;
struct host_cmd_ds_command {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct host_cmd_ds_command*,int ,int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_1,
    struct host_cmd_ds_command *VAR_2,
    struct mwifiex_ds_misc_cmd *VAR_3)
{

 FUNC_0(VAR_2, VAR_3->cmd, VAR_3->len);
 FUNC_1(VAR_1->adapter, VAR_0,
      "cmd: host cmd size = %d\n", VAR_3->len);
 return 0;
}
