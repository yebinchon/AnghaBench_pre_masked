
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int error_int_status; } ;
struct ath6kl_device {int ar; TYPE_1__ irq_proc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_device *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10[4];

 FUNC_2(VAR_0, "error interrupt\n");

 VAR_9 = VAR_7->irq_proc_reg.error_int_status & 0x0F;
 if (!VAR_9) {
  FUNC_1(1);
  return -VAR_1;
 }

 FUNC_2(VAR_0,
     "valid interrupt source(s) in ERROR_INT_STATUS: 0x%x\n",
     VAR_9);

 if (FUNC_0(VAR_5, VAR_9))
  FUNC_2(VAR_0, "error : wakeup\n");

 if (FUNC_0(VAR_3, VAR_9))
  FUNC_3("rx underflow\n");

 if (FUNC_0(VAR_4, VAR_9))
  FUNC_3("tx overflow\n");


 VAR_7->irq_proc_reg.error_int_status &= ~VAR_9;


 VAR_10[0] = VAR_9;
 VAR_10[1] = 0;
 VAR_10[2] = 0;
 VAR_10[3] = 0;

 VAR_8 = FUNC_4(VAR_7->ar, VAR_2,
         VAR_10, 4, VAR_6);

 FUNC_1(VAR_8);

 return VAR_8;
}
