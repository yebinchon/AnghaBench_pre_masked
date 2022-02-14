
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct lbs_private {int dummy; } ;
struct TYPE_4__ {int mac; int bbp_rf; } ;
struct TYPE_3__ {void* size; } ;
struct cmd_ds_reg_access {TYPE_2__ value; void* offset; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct lbs_private*,scalar_t__,struct cmd_ds_reg_access*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cmd_ds_reg_access*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_5, u16 VAR_6, u16 VAR_7, u32 *VAR_8)
{
 struct cmd_ds_reg_access VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_8 == ((void*)0));

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.hdr.size = FUNC_1(sizeof(VAR_9));
 VAR_9.action = FUNC_1(VAR_0);
 VAR_9.offset = FUNC_1(VAR_7);

 if (VAR_6 != VAR_2 &&
     VAR_6 != VAR_1 &&
     VAR_6 != VAR_3) {
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_9);
 if (!VAR_10) {
  if (VAR_6 == VAR_1 || VAR_6 == VAR_3)
   *VAR_8 = VAR_9.value.bbp_rf;
  else if (VAR_6 == VAR_2)
   *VAR_8 = FUNC_3(VAR_9.value.mac);
 }

out:
 return VAR_10;
}
