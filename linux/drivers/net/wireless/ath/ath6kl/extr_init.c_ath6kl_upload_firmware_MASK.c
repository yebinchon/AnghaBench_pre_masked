
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int app_start_override_addr; int app_load_addr; } ;
struct ath6kl {scalar_t__ target_type; TYPE_1__ hw; int fw_len; int * fw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath6kl*,int ,int *,int ) ;
 int FUNC_2 (struct ath6kl*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2->fw == ((void*)0)))
  return 0;

 VAR_3 = VAR_2->hw.app_load_addr;

 FUNC_3(VAR_0, "writing firmware to 0x%x (%zd B)\n",
     VAR_3, VAR_2->fw_len);

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_2->fw, VAR_2->fw_len);

 if (VAR_4) {
  FUNC_4("Failed to write firmware: %d\n", VAR_4);
  return VAR_4;
 }





 if (VAR_2->target_type != VAR_1) {
  VAR_3 = VAR_2->hw.app_start_override_addr;
  FUNC_2(VAR_2, VAR_3);
 }
 return VAR_4;
}
