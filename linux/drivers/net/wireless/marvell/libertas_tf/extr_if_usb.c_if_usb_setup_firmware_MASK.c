
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {struct if_usb_card* card; } ;
struct if_usb_card {int boot2_version; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_set_boot2_ver {int version; scalar_t__ action; TYPE_1__ hdr; } ;
typedef int b2_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct if_usb_card*) ;
 scalar_t__ FUNC_2 (struct lbtf_private*,int ,struct cmd_ds_set_boot2_ver*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct lbtf_private *VAR_2)
{
 struct if_usb_card *VAR_3 = VAR_2->card;
 struct cmd_ds_set_boot2_ver VAR_4;

 FUNC_3(VAR_1);

 FUNC_1(VAR_3);
 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 VAR_4.action = 0;
 VAR_4.version = VAR_3->boot2_version;

 if (FUNC_2(VAR_2, VAR_0, &VAR_4))
  FUNC_5("Setting boot2 version failed\n");

 FUNC_4(VAR_1);
}
