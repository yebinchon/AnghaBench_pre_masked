
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int cntr_int_status_en; } ;
struct TYPE_3__ {int counter_int_status; } ;
struct ath6kl_device {TYPE_2__ irq_en_reg; TYPE_1__ irq_proc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ath6kl_device*) ;

__attribute__((used)) static int FUNC_2(struct ath6kl_device *VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_0, "counter interrupt\n");

 VAR_3 = VAR_2->irq_proc_reg.counter_int_status &
        VAR_2->irq_en_reg.cntr_int_status_en;

 FUNC_0(VAR_0,
     "valid interrupt source(s) in COUNTER_INT_STATUS: 0x%x\n",
  VAR_3);






 if (VAR_3 & VAR_1)
  return FUNC_1(VAR_2);

 return 0;
}
