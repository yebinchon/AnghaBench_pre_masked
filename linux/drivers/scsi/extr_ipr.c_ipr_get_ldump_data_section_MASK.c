
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sense_uproc_interrupt_reg32; int clr_interrupt_reg; int clr_uproc_interrupt_reg32; int set_uproc_interrupt_reg32; } ;
struct ipr_ioa_cfg {TYPE_2__ regs; int ioa_mailbox; TYPE_1__* pdev; scalar_t__ sis64; } ;
typedef int __be32 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int volatile VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int,int *,int) ;
 scalar_t__ FUNC_3 (struct ipr_ioa_cfg*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int volatile,int ) ;

__attribute__((used)) static int FUNC_7(struct ipr_ioa_cfg *VAR_6,
          u32 VAR_7,
          __be32 *VAR_8, u32 VAR_9)
{
 volatile u32 VAR_10;
 int VAR_11, VAR_12 = 0;

 if (VAR_6->sis64)
  return FUNC_2(VAR_6, VAR_7,
             VAR_8, VAR_9);


 FUNC_6((VAR_5 | VAR_4),
        VAR_6->regs.set_uproc_interrupt_reg32);


 if (FUNC_3(VAR_6,
          VAR_1)) {
  FUNC_1(&VAR_6->pdev->dev,
   "IOA dump long data transfer timeout\n");
  return -VAR_0;
 }


 FUNC_6(VAR_3,
        VAR_6->regs.clr_interrupt_reg);


 FUNC_6(VAR_7, VAR_6->ioa_mailbox);


 FUNC_6(VAR_5,
        VAR_6->regs.clr_uproc_interrupt_reg32);

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {

  if (FUNC_3(VAR_6,
           VAR_2)) {
   FUNC_1(&VAR_6->pdev->dev,
    "IOA dump short data transfer timeout\n");
   return -VAR_0;
  }


  *VAR_8 = FUNC_0(FUNC_4(VAR_6->ioa_mailbox));
  VAR_8++;


  if (VAR_11 < (VAR_9 - 1)) {

   FUNC_6(VAR_3,
          VAR_6->regs.clr_interrupt_reg);
  }
 }


 FUNC_6(VAR_5,
        VAR_6->regs.set_uproc_interrupt_reg32);

 FUNC_6(VAR_4,
        VAR_6->regs.clr_uproc_interrupt_reg32);


 FUNC_6(VAR_3,
        VAR_6->regs.clr_interrupt_reg);


 while (VAR_12 < VAR_2) {
  VAR_10 =
      FUNC_4(VAR_6->regs.sense_uproc_interrupt_reg32);

  if (!(VAR_10 & VAR_5))
   return 0;

  FUNC_5(10);
  VAR_12 += 10;
 }

 return 0;
}
