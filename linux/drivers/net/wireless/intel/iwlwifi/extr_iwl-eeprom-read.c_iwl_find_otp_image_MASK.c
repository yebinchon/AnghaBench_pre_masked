
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iwl_trans {int dev; TYPE_1__* trans_cfg; } ;
typedef scalar_t__ __le16 ;
struct TYPE_4__ {int max_ll_items; } ;
struct TYPE_3__ {TYPE_2__* base_params; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (struct iwl_trans*,int,scalar_t__*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iwl_trans *VAR_1,
     u16 *VAR_2)
{
 u16 VAR_3 = 0, VAR_4;
 __le16 VAR_5 = 0;
 int VAR_6 = 0;


 FUNC_3(VAR_1);


 if (FUNC_1(VAR_1))
  return -VAR_0;






 do {



  VAR_4 = VAR_3;
  VAR_3 = FUNC_4(VAR_5) * sizeof(u16);
  FUNC_0(VAR_1->dev, "OTP blocks %d addr 0x%x\n",
     VAR_6, VAR_3);
  if (FUNC_2(VAR_1, VAR_3, &VAR_5))
   return -VAR_0;
  if (!VAR_5) {





   *VAR_2 = VAR_4;

   *VAR_2 += 2;
   return 0;
  }

  VAR_6++;
 } while (VAR_6 <= VAR_1->trans_cfg->base_params->max_ll_items);


 FUNC_0(VAR_1->dev, "OTP has no valid blocks\n");
 return -VAR_0;
}
