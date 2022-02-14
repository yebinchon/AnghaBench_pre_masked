
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_sdio_irq_data {int mtx; TYPE_2__* irq_proc_reg; TYPE_1__* irq_en_reg; } ;
struct ath10k_sdio {struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int restart_work; int workqueue; } ;
struct TYPE_4__ {int cpu_int_status; } ;
struct TYPE_3__ {int cpu_int_status_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,int) ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_3)
{
 struct ath10k_sdio *VAR_4 = FUNC_1(VAR_3);
 struct ath10k_sdio_irq_data *VAR_5 = &VAR_4->irq_data;
 u8 VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->mtx);
 VAR_6 = VAR_5->irq_proc_reg->cpu_int_status &
    VAR_5->irq_en_reg->cpu_int_status_en;
 if (!VAR_6) {
  FUNC_3(VAR_3, "CPU interrupt status is zero\n");
  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_5->irq_proc_reg->cpu_int_status &= ~VAR_6;
 VAR_7 = FUNC_2(VAR_3, VAR_1,
        VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_3, "unable to write to cpu interrupt status address: %d\n",
       VAR_7);
  goto out;
 }

out:
 FUNC_5(&VAR_5->mtx);
 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_3, "firmware crashed!\n");
  FUNC_6(VAR_3->workqueue, &VAR_3->restart_work);
 }
 return VAR_7;
}
