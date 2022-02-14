
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_802_11_subsc_evt {int events; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_subsc_evt subsc_evt; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_1,
     struct host_cmd_ds_command *VAR_2)
{
 struct host_cmd_ds_802_11_subsc_evt *VAR_3 =
  &VAR_2->params.subsc_evt;



 FUNC_1(VAR_1->adapter, VAR_0,
      "Bitmap of currently subscribed events: %16x\n",
      FUNC_0(VAR_3->events));

 return 0;
}
