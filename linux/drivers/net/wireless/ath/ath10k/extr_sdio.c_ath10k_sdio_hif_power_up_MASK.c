
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ath10k_sdio {int is_disabled; struct sdio_func* func; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 struct ath10k_sdio* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_10(struct ath10k *VAR_1,
        enum ath10k_firmware_mode VAR_2)
{
 struct ath10k_sdio *VAR_3 = FUNC_4(VAR_1);
 struct sdio_func *VAR_4 = VAR_3->func;
 int VAR_5;

 if (!VAR_3->is_disabled)
  return 0;

 FUNC_0(VAR_1, VAR_0, "sdio power on\n");

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_1, "failed to config sdio: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_7(VAR_4);

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5) {
  FUNC_5(VAR_1, "unable to enable sdio function: %d)\n", VAR_5);
  FUNC_9(VAR_4);
  return VAR_5;
 }

 FUNC_9(VAR_4);




 FUNC_6(20);

 VAR_3->is_disabled = 0;

 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
