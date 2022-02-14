
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct lbtf_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_mac_address {TYPE_1__ hdr; int macadd; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;

int FUNC_5(struct lbtf_private *VAR_4, uint8_t *VAR_5)
{
 struct cmd_ds_802_11_mac_address VAR_6;
 FUNC_2(VAR_3);

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_1);

 FUNC_4(VAR_6.macadd, VAR_5, VAR_2);

 FUNC_1(VAR_4, VAR_0, &VAR_6.hdr, sizeof(VAR_6));
 FUNC_3(VAR_3);
 return 0;
}
