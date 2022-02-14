
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int cpu_int_status; } ;
struct TYPE_3__ {int cpu_int_status_en; } ;
struct ath6kl_device {int ar; TYPE_2__ irq_proc_reg; TYPE_1__ irq_en_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct ath6kl_device *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7[4];

 FUNC_1(VAR_0, "cpu interrupt\n");

 VAR_6 = VAR_4->irq_proc_reg.cpu_int_status &
    VAR_4->irq_en_reg.cpu_int_status_en;
 if (!VAR_6) {
  FUNC_0(1);
  return -VAR_2;
 }

 FUNC_1(VAR_0,
     "valid interrupt source(s) in CPU_INT_STATUS: 0x%x\n",
  VAR_6);


 VAR_4->irq_proc_reg.cpu_int_status &= ~VAR_6;
 VAR_7[0] = VAR_6;

 VAR_7[1] = 0;
 VAR_7[2] = 0;
 VAR_7[3] = 0;

 VAR_5 = FUNC_2(VAR_4->ar, VAR_1,
         VAR_7, 4, VAR_3);

 FUNC_0(VAR_5);

 return VAR_5;
}
