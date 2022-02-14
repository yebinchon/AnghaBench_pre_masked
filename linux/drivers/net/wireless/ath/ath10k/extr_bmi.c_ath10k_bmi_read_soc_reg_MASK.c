
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
union bmi_resp {TYPE_3__ read_soc_reg; } ;
typedef int u32 ;
struct TYPE_5__ {void* addr; } ;
struct bmi_cmd {TYPE_2__ read_soc_reg; void* id; } ;
struct TYPE_4__ {scalar_t__ done_sent; } ;
struct ath10k {TYPE_1__ bmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 int FUNC_3 (struct ath10k*,struct bmi_cmd*,int,union bmi_resp*,int*) ;
 int FUNC_4 (struct ath10k*,char*,...) ;

int FUNC_5(struct ath10k *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct bmi_cmd VAR_6;
 union bmi_resp VAR_7;
 u32 VAR_8 = sizeof(VAR_6.id) + sizeof(VAR_6.read_soc_reg);
 u32 VAR_9 = sizeof(VAR_7.read_soc_reg);
 int VAR_10;

 FUNC_2(VAR_3, VAR_0, "bmi read soc register 0x%08x\n",
     VAR_4);

 if (VAR_3->bmi.done_sent) {
  FUNC_4(VAR_3, "bmi read soc register command in progress\n");
  return -VAR_2;
 }

 VAR_6.id = FUNC_0(VAR_1);
 VAR_6.read_soc_reg.addr = FUNC_0(VAR_4);

 VAR_10 = FUNC_3(VAR_3, &VAR_6, VAR_8, &VAR_7, &VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_3, "Unable to read soc register from device: %d\n",
       VAR_10);
  return VAR_10;
 }

 *VAR_5 = FUNC_1(VAR_7.read_soc_reg.value);

 FUNC_2(VAR_3, VAR_0, "bmi read soc register value 0x%08x\n",
     *VAR_5);

 return 0;
}
