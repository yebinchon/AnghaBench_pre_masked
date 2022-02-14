
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_irq_proc_registers {int host_int_status; int rx_lkahd_valid; int counter_int_status; int * rx_lkahd; } ;
struct ath6kl_device {struct ath6kl_irq_proc_registers irq_proc_reg; int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ath6kl_device*) ;
 int FUNC_3 (int ,int ,int*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct ath6kl_device *VAR_7, u32 *VAR_8,
         int VAR_9)
{
 struct ath6kl_irq_proc_registers *VAR_10;
 int VAR_11 = 0, VAR_12;
 u8 VAR_13 = 1 << VAR_6;

 for (VAR_12 = VAR_9 / VAR_2; VAR_12 > 0; VAR_12--) {

  VAR_11 = FUNC_3(VAR_7->ar, VAR_5,
          (u8 *) &VAR_7->irq_proc_reg,
          sizeof(VAR_7->irq_proc_reg),
          VAR_4);

  if (VAR_11) {
   FUNC_1("failed to read reg table\n");
   return VAR_11;
  }


  if (VAR_7->irq_proc_reg.host_int_status & VAR_13) {
   if (VAR_7->irq_proc_reg.rx_lkahd_valid &
       VAR_13) {




    VAR_10 = &VAR_7->irq_proc_reg;
    *VAR_8 =
     FUNC_4(VAR_10->rx_lkahd[VAR_6]);
    break;
   }
  }


  FUNC_5(VAR_2);
  FUNC_0(VAR_0, "hif retry mbox poll try %d\n", VAR_12);
 }

 if (VAR_12 == 0) {
  FUNC_1("timeout waiting for recv message\n");
  VAR_11 = -VAR_3;

  if (VAR_7->irq_proc_reg.counter_int_status &
      VAR_1)




   FUNC_2(VAR_7);
 }

 return VAR_11;
}
