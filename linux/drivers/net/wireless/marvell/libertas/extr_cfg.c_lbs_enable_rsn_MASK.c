
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_enable_rsn {void* enable; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_enable_rsn*) ;
 int FUNC_2 (struct cmd_ds_802_11_enable_rsn*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_2, int VAR_3)
{
 struct cmd_ds_802_11_enable_rsn VAR_4;
 int VAR_5;
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 VAR_4.action = FUNC_0(VAR_1);
 VAR_4.enable = FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_0, &VAR_4);

 return VAR_5;
}
