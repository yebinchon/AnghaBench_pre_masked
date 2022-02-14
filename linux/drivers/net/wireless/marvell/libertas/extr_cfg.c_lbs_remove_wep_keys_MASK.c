
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int wep_tx_key; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_set_wep {void* action; void* keyindex; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_set_wep*) ;
 int FUNC_2 (struct cmd_ds_802_11_set_wep*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_2)
{
 struct cmd_ds_802_11_set_wep VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.hdr.size = FUNC_0(sizeof(VAR_3));
 VAR_3.keyindex = FUNC_0(VAR_2->wep_tx_key);
 VAR_3.action = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_3);

 return VAR_4;
}
