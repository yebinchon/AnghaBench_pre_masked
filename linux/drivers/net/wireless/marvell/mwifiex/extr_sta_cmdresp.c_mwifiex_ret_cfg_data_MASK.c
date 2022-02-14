
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_command {scalar_t__ result; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_2,
    struct host_cmd_ds_command *VAR_3)
{
 if (VAR_3->result != VAR_1) {
  FUNC_0(VAR_2->adapter, VAR_0, "Cal data cmd resp failed\n");
  return -1;
 }

 return 0;
}
