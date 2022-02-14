
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdio_func {int dummy; } ;
struct ath10k_sdio {struct sdio_func* func; } ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*,int ,int *,int) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ath10k_sdio *VAR_6 = FUNC_1(VAR_3);
 struct sdio_func *VAR_7 = VAR_6->func;
 __le32 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 *VAR_8 = FUNC_3(VAR_5);

 FUNC_6(VAR_7);

 VAR_9 = FUNC_8(VAR_7, VAR_4, VAR_8, sizeof(*VAR_8));
 if (VAR_9) {
  FUNC_2(VAR_3, "failed to write value 0x%x to fixed sb address 0x%x: %d\n",
       VAR_5, VAR_4, VAR_9);
  goto out;
 }

 FUNC_0(VAR_3, VAR_0, "sdio writesb32 addr 0x%x val 0x%x\n",
     VAR_4, VAR_5);

out:
 FUNC_7(VAR_7);

 FUNC_4(VAR_8);

 return VAR_9;
}
