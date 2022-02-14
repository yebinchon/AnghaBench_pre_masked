
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int mac_control; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_mac_control {TYPE_1__ hdr; scalar_t__ reserved; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,TYPE_1__*,int) ;

void FUNC_2(struct lbs_private *VAR_1)
{
 struct cmd_ds_mac_control VAR_2;

 VAR_2.hdr.size = FUNC_0(sizeof(VAR_2));
 VAR_2.action = FUNC_0(VAR_1->mac_control);
 VAR_2.reserved = 0;

 FUNC_1(VAR_1, VAR_0, &VAR_2.hdr, sizeof(VAR_2));
}
