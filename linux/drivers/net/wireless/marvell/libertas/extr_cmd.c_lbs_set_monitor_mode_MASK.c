
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {TYPE_1__* dev; } ;
struct TYPE_4__ {void* size; } ;
struct cmd_ds_802_11_monitor_mode {void* mode; void* action; TYPE_2__ hdr; } ;
typedef int cmd ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_monitor_mode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct cmd_ds_802_11_monitor_mode*,int ,int) ;

int FUNC_4(struct lbs_private *VAR_4, int VAR_5)
{
 struct cmd_ds_802_11_monitor_mode VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_3);
 if (VAR_5)
  VAR_6.mode = FUNC_0(0x1);

 FUNC_2("SET_MONITOR_MODE: %d\n", VAR_5);

 VAR_7 = FUNC_1(VAR_4, VAR_2, &VAR_6);
 if (VAR_7 == 0) {
  VAR_4->dev->type = VAR_5 ? VAR_1 :
      VAR_0;
 }

 return VAR_7;
}
