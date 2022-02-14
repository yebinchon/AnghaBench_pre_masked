
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int version_str; } ;
struct host_cmd_ds_version_ext {int version_str; int version_str_sel; } ;
struct TYPE_2__ {struct host_cmd_ds_version_ext verext; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0,
          struct host_cmd_ds_command *VAR_1,
          struct host_cmd_ds_version_ext *VAR_2)
{
 struct host_cmd_ds_version_ext *VAR_3 = &VAR_1->params.verext;

 if (VAR_2) {
  VAR_2->version_str_sel = VAR_3->version_str_sel;
  FUNC_0(VAR_2->version_str, VAR_3->version_str,
         sizeof(char) * 128);
  FUNC_0(VAR_0->version_str, VAR_3->version_str, 128);
 }
 return 0;
}
