
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdio_func {int dummy; } ;
struct ath10k_sdio {struct sdio_func* func; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int ,int) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ath10k_sdio *VAR_4 = FUNC_1(VAR_1);
 struct sdio_func *VAR_5 = VAR_4->func;
 int VAR_6;

 FUNC_3(VAR_5);

 FUNC_5(VAR_5, VAR_3, VAR_2, &VAR_6);
 if (VAR_6) {
  FUNC_2(VAR_1, "failed to write 0x%x to address 0x%x: %d\n",
       VAR_3, VAR_2, VAR_6);
  goto out;
 }

 FUNC_0(VAR_1, VAR_0, "sdio write32 addr 0x%x val 0x%x\n",
     VAR_2, VAR_3);

out:
 FUNC_4(VAR_5);

 return VAR_6;
}
