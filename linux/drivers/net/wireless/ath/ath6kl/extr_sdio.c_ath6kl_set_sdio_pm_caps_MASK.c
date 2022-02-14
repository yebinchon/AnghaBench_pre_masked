
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ath6kl_sdio {struct sdio_func* func; } ;
struct ath6kl {int dummy; } ;
typedef int mmc_pm_flag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 struct ath6kl_sdio* FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int) ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_4)
{
 struct ath6kl_sdio *VAR_5 = FUNC_2(VAR_4);
 struct sdio_func *VAR_6 = VAR_5->func;
 mmc_pm_flag_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6);

 FUNC_0(VAR_0, "sdio suspend pm_caps 0x%x\n", VAR_7);

 if (!(VAR_7 & VAR_3) ||
     !(VAR_7 & VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (VAR_8) {
  FUNC_1("set sdio keep pwr flag failed: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_4(VAR_6, VAR_3);
 if (VAR_8)
  FUNC_1("set sdio wake irq flag failed: %d\n", VAR_8);

 return VAR_8;
}
