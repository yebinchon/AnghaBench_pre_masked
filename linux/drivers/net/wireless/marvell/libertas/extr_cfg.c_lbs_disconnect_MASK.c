
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lbs_private {int connect_status; int dev; int assoc_bss; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_deauthenticate {void* reasoncode; int macaddr; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *,int ,int,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_802_11_deauthenticate*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct cmd_ds_802_11_deauthenticate*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_4, u16 VAR_5)
{
 struct cmd_ds_802_11_deauthenticate VAR_6;
 int VAR_7;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_1(sizeof(VAR_6));

 FUNC_3(VAR_6.macaddr, &VAR_4->assoc_bss, VAR_1);
 VAR_6.reasoncode = FUNC_1(VAR_5);

 VAR_7 = FUNC_2(VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4->dev,
   VAR_5,
   ((void*)0), 0, 1,
   VAR_2);
 VAR_4->connect_status = VAR_3;

 return 0;
}
