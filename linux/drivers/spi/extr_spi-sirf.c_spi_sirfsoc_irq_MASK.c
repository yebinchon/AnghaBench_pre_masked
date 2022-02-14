
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sirfsoc_spi {int type; TYPE_1__* regs; scalar_t__ base; int rx_done; int tx_done; scalar_t__ tx_by_cmd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ int_st; scalar_t__ usp_int_en_clr; scalar_t__ int_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct sirfsoc_spi *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_8->base + VAR_8->regs->int_st);
 if (VAR_8->tx_by_cmd && VAR_8->type == 130
  && (VAR_9 & VAR_1)) {
  FUNC_0(&VAR_8->tx_done);
  FUNC_3(0x0, VAR_8->base + VAR_8->regs->int_en);
  FUNC_3(FUNC_2(VAR_8->base + VAR_8->regs->int_st),
    VAR_8->base + VAR_8->regs->int_st);
  return VAR_0;
 }

 if (VAR_9 & VAR_3 ||
   VAR_9 & VAR_5) {
  FUNC_0(&VAR_8->tx_done);
  FUNC_0(&VAR_8->rx_done);
  switch (VAR_8->type) {
  case 130:
  case 128:
   FUNC_3(0x0, VAR_8->base + VAR_8->regs->int_en);
   break;
  case 129:
   FUNC_3(~0UL, VAR_8->base + VAR_8->regs->usp_int_en_clr);
   break;
  }
  FUNC_3(FUNC_2(VAR_8->base + VAR_8->regs->int_st),
    VAR_8->base + VAR_8->regs->int_st);
  return VAR_0;
 }
 if (VAR_9 & VAR_4)
  FUNC_0(&VAR_8->tx_done);
 while (!(FUNC_2(VAR_8->base + VAR_8->regs->int_st) &
  VAR_2))
  FUNC_1();
 FUNC_0(&VAR_8->rx_done);
 switch (VAR_8->type) {
 case 130:
 case 128:
  FUNC_3(0x0, VAR_8->base + VAR_8->regs->int_en);
  break;
 case 129:
  FUNC_3(~0UL, VAR_8->base + VAR_8->regs->usp_int_en_clr);
  break;
 }
 FUNC_3(FUNC_2(VAR_8->base + VAR_8->regs->int_st),
   VAR_8->base + VAR_8->regs->int_st);

 return VAR_0;
}
