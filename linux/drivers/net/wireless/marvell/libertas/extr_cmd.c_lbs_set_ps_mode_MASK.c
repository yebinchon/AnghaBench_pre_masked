
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_ps_mode {TYPE_1__ hdr; void* multipledtim; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_802_11_ps_mode*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct cmd_ds_802_11_ps_mode*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_4, u16 VAR_5, bool VAR_6)
{
 struct cmd_ds_802_11_ps_mode VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hdr.size = FUNC_0(sizeof(VAR_7));
 VAR_7.action = FUNC_0(VAR_5);

 if (VAR_5 == VAR_2) {
  FUNC_3("PS_MODE: action ENTER_PS\n");
  VAR_7.multipledtim = FUNC_0(1);
 } else if (VAR_5 == VAR_3) {
  FUNC_3("PS_MODE: action EXIT_PS\n");
 } else {



  FUNC_3("PS_MODE: unknown action 0x%X\n", VAR_5);
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_6)
  VAR_8 = FUNC_2(VAR_4, VAR_0, &VAR_7);
 else
  FUNC_1(VAR_4, VAR_0, &VAR_7.hdr, sizeof (VAR_7));

out:
 return VAR_8;
}
