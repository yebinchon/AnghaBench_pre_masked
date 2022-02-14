
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdio_func {int dummy; } ;
struct TYPE_2__ {int block_size; } ;
struct ath10k_sdio {TYPE_1__ mbox_info; struct sdio_func* func; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,void*,size_t) ;
 int FUNC_1 (struct ath10k*,int ,int *,char*,void*,size_t) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*,void*,int ,size_t) ;
 int FUNC_7 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_2, u32 VAR_3, void *VAR_4, size_t VAR_5)
{
 struct ath10k_sdio *VAR_6 = FUNC_2(VAR_2);
 struct sdio_func *VAR_7 = VAR_6->func;
 int VAR_8;

 FUNC_5(VAR_7);

 VAR_5 = FUNC_4(VAR_5, VAR_6->mbox_info.block_size);

 VAR_8 = FUNC_6(VAR_7, VAR_4, VAR_3, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_2, "failed to read from fixed (sb) address 0x%x: %d\n",
       VAR_3, VAR_8);
  goto out;
 }

 FUNC_0(VAR_2, VAR_0, "sdio readsb addr 0x%x buf 0x%p len %zu\n",
     VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_2, VAR_1, ((void*)0), "sdio readsb ", VAR_4, VAR_5);

out:
 FUNC_7(VAR_7);

 return VAR_8;
}
