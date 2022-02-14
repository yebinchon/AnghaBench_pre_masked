
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* value; void* addr; } ;
struct bmi_cmd {TYPE_1__ write_soc_reg; void* id; } ;
struct TYPE_4__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_2__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_2 (struct ath10k*,struct bmi_cmd*,int,int *,int *) ;
 int FUNC_3 (struct ath10k*,char*,...) ;

int FUNC_4(struct ath10k *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bmi_cmd VAR_6;
 u32 VAR_7 = sizeof(VAR_6.id) + sizeof(VAR_6.write_soc_reg);
 int VAR_8;

 FUNC_1(VAR_3, VAR_0,
     "bmi write soc register 0x%08x val 0x%08x\n",
     VAR_4, VAR_5);

 if (VAR_3->bmi.done_sent) {
  FUNC_3(VAR_3, "bmi write soc register command in progress\n");
  return -VAR_2;
 }

 VAR_6.id = FUNC_0(VAR_1);
 VAR_6.write_soc_reg.addr = FUNC_0(VAR_4);
 VAR_6.write_soc_reg.value = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_3, &VAR_6, VAR_7, ((void*)0), ((void*)0));
 if (VAR_8) {
  FUNC_3(VAR_3, "Unable to write soc register to device: %d\n",
       VAR_8);
  return VAR_8;
 }

 return 0;
}
