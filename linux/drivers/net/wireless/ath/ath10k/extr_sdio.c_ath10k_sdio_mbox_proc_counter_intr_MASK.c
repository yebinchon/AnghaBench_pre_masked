
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_sdio_irq_data {int mtx; TYPE_2__* irq_en_reg; TYPE_1__* irq_proc_reg; } ;
struct ath10k_sdio {struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {int cntr_int_status_en; } ;
struct TYPE_3__ {int counter_int_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_1(VAR_1);
 struct ath10k_sdio_irq_data *VAR_3 = &VAR_2->irq_data;
 u8 VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->mtx);
 VAR_4 = VAR_3->irq_proc_reg->counter_int_status &
        VAR_3->irq_en_reg->cntr_int_status_en;





 if (VAR_4 & VAR_0)
  VAR_5 = FUNC_0(VAR_1);
 else
  VAR_5 = 0;

 FUNC_3(&VAR_3->mtx);

 return VAR_5;
}
