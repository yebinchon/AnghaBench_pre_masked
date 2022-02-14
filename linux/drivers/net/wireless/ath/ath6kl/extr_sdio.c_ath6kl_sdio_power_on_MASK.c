
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ath6kl_sdio {int is_disabled; struct sdio_func* func; } ;
struct ath6kl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ath6kl*) ;
 struct ath6kl_sdio* FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_8(struct ath6kl *VAR_1)
{
 struct ath6kl_sdio *VAR_2 = FUNC_3(VAR_1);
 struct sdio_func *VAR_3 = VAR_2->func;
 int VAR_4 = 0;

 if (!VAR_2->is_disabled)
  return 0;

 FUNC_0(VAR_0, "sdio power on\n");

 FUNC_5(VAR_3);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {
  FUNC_1("Unable to enable sdio func: %d)\n", VAR_4);
  FUNC_7(VAR_3);
  return VAR_4;
 }

 FUNC_7(VAR_3);





 FUNC_4(10);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_1("Failed to config sdio: %d\n", VAR_4);
  goto out;
 }

 VAR_2->is_disabled = 0;

out:
 return VAR_4;
}
