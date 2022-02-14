
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pic32_spi {TYPE_1__* master; TYPE_2__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int status_clr; int status; } ;
struct TYPE_3__ {int cur_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pic32_spi*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct pic32_spi *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_1(&VAR_7->regs->status);


 if (VAR_8 & (VAR_3 | VAR_4)) {
  FUNC_2(VAR_3, &VAR_7->regs->status_clr);
  FUNC_2(VAR_4, &VAR_7->regs->status_clr);
  FUNC_0(VAR_7, "err_irq: fifo ov/ur-run\n");
  return VAR_0;
 }

 if (VAR_8 & VAR_2) {
  FUNC_0(VAR_7, "err_irq: frame error");
  return VAR_0;
 }

 if (!VAR_7->master->cur_msg) {
  FUNC_0(VAR_7, "err_irq: no mesg");
  return VAR_1;
 }

 return VAR_1;
}
