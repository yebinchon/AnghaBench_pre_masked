
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int enable_timeout; int card; } ;
struct TYPE_2__ {int block_size; } ;
struct ath10k_sdio {TYPE_1__ mbox_info; struct sdio_func* func; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char FUNC_0 (unsigned char,unsigned char) ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (int ,int ,unsigned char*) ;
 int FUNC_3 (int ,int ,unsigned char) ;
 struct ath10k_sdio* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,char*,int,...) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*,int ) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_12)
{
 struct ath10k_sdio *VAR_13 = FUNC_4(VAR_12);
 struct sdio_func *VAR_14 = VAR_13->func;
 unsigned char VAR_15, VAR_16 = 2;
 int VAR_17;

 FUNC_1(VAR_12, VAR_0, "sdio configuration\n");

 FUNC_6(VAR_14);

 VAR_15 = 0;
 VAR_17 = FUNC_2(VAR_14->card,
           VAR_10,
           &VAR_15);

 VAR_15 &= ~VAR_1;
 VAR_15 |= FUNC_0(VAR_1,
      VAR_2);

 VAR_17 = FUNC_3(VAR_14->card,
           VAR_10,
           VAR_15);

 VAR_15 = 0;
 VAR_17 = FUNC_2(
  VAR_14->card,
  VAR_6,
  &VAR_15);

 VAR_15 |= (VAR_5 |
   VAR_7 |
   VAR_8);

 VAR_17 = FUNC_3(VAR_14->card,
           VAR_6,
           VAR_15);
 if (VAR_17) {
  FUNC_5(VAR_12, "failed to enable driver strength: %d\n", VAR_17);
  goto out;
 }

 VAR_15 = 0;
 VAR_17 = FUNC_2(VAR_14->card,
           VAR_9,
           &VAR_15);

 VAR_15 |= VAR_11;

 VAR_17 = FUNC_3(VAR_14->card,
           VAR_9,
           VAR_15);
 if (VAR_17) {
  FUNC_5(VAR_12, "failed to enable 4-bit async irq mode: %d\n",
       VAR_17);
  goto out;
 }

 VAR_15 = 0;
 VAR_17 = FUNC_2(VAR_14->card,
           VAR_3,
           &VAR_15);

 VAR_15 &= ~VAR_4;
 VAR_15 |= FUNC_0(VAR_4, VAR_16);

 VAR_17 = FUNC_3(VAR_14->card,
           VAR_3,
           VAR_15);


 VAR_14->enable_timeout = 100;

 VAR_17 = FUNC_8(VAR_14, VAR_13->mbox_info.block_size);
 if (VAR_17) {
  FUNC_5(VAR_12, "failed to set sdio block size to %d: %d\n",
       VAR_13->mbox_info.block_size, VAR_17);
  goto out;
 }

out:
 FUNC_7(VAR_14);
 return VAR_17;
}
