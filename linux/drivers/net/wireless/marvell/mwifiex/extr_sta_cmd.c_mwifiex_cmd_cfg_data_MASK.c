
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct property {int length; int name; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {TYPE_1__* cal_data; int dt_node; } ;
struct host_cmd_ds_command {void* size; void* command; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_3,
    struct host_cmd_ds_command *VAR_4, void *VAR_5)
{
 struct mwifiex_adapter *VAR_6 = VAR_3->adapter;
 struct property *VAR_7 = VAR_5;
 u32 VAR_8;
 u8 *VAR_9 = (u8 *)VAR_4 + VAR_2;
 int VAR_10;

 if (VAR_7) {
  VAR_8 = VAR_7->length;
  VAR_10 = FUNC_3(VAR_6->dt_node, VAR_7->name,
      VAR_9, VAR_8);
  if (VAR_10)
   return VAR_10;
  FUNC_1(VAR_6, VAR_1,
       "download cfg_data from device tree: %s\n",
       VAR_7->name);
 } else if (VAR_6->cal_data->data && VAR_6->cal_data->size > 0) {
  VAR_8 = FUNC_2((u8 *)VAR_6->cal_data->data,
         VAR_6->cal_data->size, VAR_9);
  FUNC_1(VAR_6, VAR_1,
       "download cfg_data from config file\n");
 } else {
  return -1;
 }

 VAR_4->command = FUNC_0(VAR_0);
 VAR_4->size = FUNC_0(VAR_2 + VAR_8);

 return 0;
}
