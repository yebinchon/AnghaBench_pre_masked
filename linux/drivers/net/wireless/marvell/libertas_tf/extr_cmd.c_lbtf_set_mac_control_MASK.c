
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {int mac_control; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_mac_control {TYPE_1__ hdr; scalar_t__ reserved; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct lbtf_private *VAR_2)
{
 struct cmd_ds_mac_control VAR_3;
 FUNC_2(VAR_1);

 VAR_3.hdr.size = FUNC_0(sizeof(VAR_3));
 VAR_3.action = FUNC_0(VAR_2->mac_control);
 VAR_3.reserved = 0;

 FUNC_1(VAR_2, VAR_0,
  &VAR_3.hdr, sizeof(VAR_3));

 FUNC_3(VAR_1);
}
