
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_sdio_irq_data {TYPE_1__* irq_proc_reg; } ;
struct ath10k_sdio {struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int error_int_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath10k*,int ,char*,...) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ,int) ;
 int FUNC_4 (struct ath10k*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_6)
{
 struct ath10k_sdio *VAR_7 = FUNC_2(VAR_6);
 struct ath10k_sdio_irq_data *VAR_8 = &VAR_7->irq_data;
 u8 VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, VAR_0, "sdio error interrupt\n");

 VAR_9 = VAR_8->irq_proc_reg->error_int_status & 0x0F;
 if (!VAR_9) {
  FUNC_4(VAR_6, "invalid error interrupt status: 0x%x\n",
       VAR_9);
  return -VAR_1;
 }

 FUNC_1(VAR_6, VAR_0,
     "sdio error_int_status 0x%x\n", VAR_9);

 if (FUNC_0(VAR_5,
        VAR_9))
  FUNC_1(VAR_6, VAR_0, "sdio interrupt error wakeup\n");

 if (FUNC_0(VAR_3,
        VAR_9))
  FUNC_4(VAR_6, "rx underflow interrupt error\n");

 if (FUNC_0(VAR_4,
        VAR_9))
  FUNC_4(VAR_6, "tx overflow interrupt error\n");


 VAR_8->irq_proc_reg->error_int_status &= ~VAR_9;


 VAR_10 = FUNC_3(VAR_6, VAR_2,
        VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_6, "unable to write to error int status address: %d\n",
       VAR_10);
  return VAR_10;
 }

 return 0;
}
