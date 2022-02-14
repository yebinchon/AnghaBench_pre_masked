
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int result; } ;
union bmi_resp {TYPE_3__ execute; } ;
typedef int u32 ;
struct TYPE_5__ {void* param; void* addr; } ;
struct bmi_cmd {TYPE_2__ execute; void* id; } ;
struct TYPE_4__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,...) ;
 int FUNC_3 (struct ath10k*,struct bmi_cmd*,int,union bmi_resp*,int*) ;
 int FUNC_4 (struct ath10k*,char*,...) ;

int FUNC_5(struct ath10k *VAR_4, u32 VAR_5, u32 VAR_6, u32 *VAR_7)
{
 struct bmi_cmd VAR_8;
 union bmi_resp VAR_9;
 u32 VAR_10 = sizeof(VAR_8.id) + sizeof(VAR_8.execute);
 u32 VAR_11 = sizeof(VAR_9.execute);
 int VAR_12;

 FUNC_2(VAR_4, VAR_0, "bmi execute address 0x%x param 0x%x\n",
     VAR_5, VAR_6);

 if (VAR_4->bmi.done_sent) {
  FUNC_4(VAR_4, "command disallowed\n");
  return -VAR_2;
 }

 VAR_8.id = FUNC_0(VAR_1);
 VAR_8.execute.addr = FUNC_0(VAR_5);
 VAR_8.execute.param = FUNC_0(VAR_6);

 VAR_12 = FUNC_3(VAR_4, &VAR_8, VAR_10, &VAR_9, &VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_4, "unable to read from the device\n");
  return VAR_12;
 }

 if (VAR_11 < sizeof(VAR_9.execute)) {
  FUNC_4(VAR_4, "invalid execute response length (%d)\n",
       VAR_11);
  return -VAR_3;
 }

 *VAR_7 = FUNC_1(VAR_9.execute.result);

 FUNC_2(VAR_4, VAR_0, "bmi execute result 0x%x\n", *VAR_7);

 return 0;
}
