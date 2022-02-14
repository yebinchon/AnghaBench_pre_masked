
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath6kl_irq_proc_registers {int host_int_status; int rx_lkahd_valid; int * rx_lkahd; } ;
struct TYPE_4__ {int int_status_en; } ;
struct ath6kl_device {TYPE_2__* htc_cnxt; struct ath6kl_irq_proc_registers irq_proc_reg; TYPE_1__ irq_en_reg; int ar; } ;
struct TYPE_5__ {scalar_t__ chk_irq_status_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ath6kl_device*,struct ath6kl_irq_proc_registers*,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ath6kl_device*) ;
 int FUNC_5 (struct ath6kl_device*) ;
 int FUNC_6 (struct ath6kl_device*) ;
 int FUNC_7 (TYPE_2__*,int ,int*) ;
 int FUNC_8 (int ,int ,int*,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_11(struct ath6kl_device *VAR_7, bool *VAR_8)
{
 struct ath6kl_irq_proc_registers *VAR_9;
 int VAR_10 = 0;
 u8 VAR_11 = 0;
 u32 VAR_12 = 0;
 u8 VAR_13 = 1 << VAR_6;

 FUNC_1(VAR_0, "proc_pending_irqs: (dev: 0x%p)\n", VAR_7);
 if (VAR_7->irq_en_reg.int_status_en) {
  VAR_10 = FUNC_8(VAR_7->ar, VAR_2,
          (u8 *) &VAR_7->irq_proc_reg,
          sizeof(VAR_7->irq_proc_reg),
          VAR_1);
  if (VAR_10)
   goto out;

  FUNC_2(VAR_7, &VAR_7->irq_proc_reg,
          &VAR_7->irq_en_reg);
  FUNC_10(&VAR_7->irq_en_reg,
          sizeof(VAR_7->irq_en_reg));


  VAR_11 = VAR_7->irq_proc_reg.host_int_status &
      VAR_7->irq_en_reg.int_status_en;


  if (VAR_11 & VAR_13) {




   VAR_11 &= ~VAR_13;
   if (VAR_7->irq_proc_reg.rx_lkahd_valid &
       VAR_13) {
    VAR_9 = &VAR_7->irq_proc_reg;
    VAR_12 = FUNC_9(VAR_9->rx_lkahd[VAR_6]);
    if (!VAR_12)
     FUNC_3("lookAhead is zero!\n");
   }
  }
 }

 if (!VAR_11 && !VAR_12) {
  *VAR_8 = 1;
  goto out;
 }

 if (VAR_12) {
  int VAR_14 = 0;

  FUNC_1(VAR_0,
      "pending mailbox msg, lk_ahd: 0x%X\n", VAR_12);
  VAR_10 = FUNC_7(VAR_7->htc_cnxt,
         VAR_12, &VAR_14);
  if (VAR_10)
   goto out;

  if (!VAR_14)




   VAR_7->htc_cnxt->chk_irq_status_cnt = 0;
 }


 FUNC_1(VAR_0,
     "valid interrupt source(s) for other interrupts: 0x%x\n",
     VAR_11);

 if (FUNC_0(VAR_4, VAR_11)) {

  VAR_10 = FUNC_5(VAR_7);
  if (VAR_10)
   goto out;
 }

 if (FUNC_0(VAR_5, VAR_11)) {

  VAR_10 = FUNC_6(VAR_7);
  if (VAR_10)
   goto out;
 }

 if (FUNC_0(VAR_3, VAR_11))

  VAR_10 = FUNC_4(VAR_7);

out:
 FUNC_1(VAR_0,
     "bypassing irq status re-check, forcing done\n");

 if (!VAR_7->htc_cnxt->chk_irq_status_cnt)
  *VAR_8 = 1;

 FUNC_1(VAR_0,
     "proc_pending_irqs: (done:%d, status=%d\n", *VAR_8, VAR_10);

 return VAR_10;
}
