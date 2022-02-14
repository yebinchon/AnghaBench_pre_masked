
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int host_ioa_interrupt_reg; } ;
struct pmcraid_instance {int ioa_state; TYPE_1__ int_regs; int pdev; } ;
struct TYPE_4__ {int function; scalar_t__ expires; } ;
struct pmcraid_cmd {TYPE_2__ timer; int time_left; struct pmcraid_instance* drv_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (char*,...) ;
 int VAR_8 ;
 int FUNC_5 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_9)
{
 struct pmcraid_instance *VAR_10 = VAR_9->drv_inst;
 u32 VAR_11;
 int VAR_12;
 u16 VAR_13;






 VAR_12 = FUNC_3(VAR_10->pdev, VAR_3, &VAR_13);
 if ((VAR_12 == VAR_2) && (VAR_13 & VAR_4)) {






  VAR_9->time_left = VAR_6;
  VAR_9->timer.expires = VAR_7 + VAR_5;
  VAR_9->timer.function = VAR_8;
  FUNC_0(&VAR_9->timer);

  FUNC_2(VAR_0,
   VAR_10->int_regs.host_ioa_interrupt_reg);
  VAR_11 =
   FUNC_1(VAR_10->int_regs.host_ioa_interrupt_reg);
  FUNC_4("doorbells after reset alert: %x\n", VAR_11);
 } else {
  FUNC_4("PCI config is not accessible starting BIST\n");
  VAR_10->ioa_state = VAR_1;
  FUNC_5(VAR_9);
 }
}
