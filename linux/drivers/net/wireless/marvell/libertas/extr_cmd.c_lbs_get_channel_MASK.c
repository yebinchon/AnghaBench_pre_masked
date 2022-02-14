
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_channel {int channel; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rf_channel*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cmd_ds_802_11_rf_channel*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_2)
{
 struct cmd_ds_802_11_rf_channel VAR_3;
 int VAR_4 = 0;

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.hdr.size = FUNC_0(sizeof(VAR_3));
 VAR_3.action = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_3);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(VAR_3.channel);
 FUNC_2("current radio channel is %d\n", VAR_4);

out:
 return VAR_4;
}
