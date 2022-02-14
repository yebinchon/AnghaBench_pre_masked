
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_spi {int fifo_n_byte; TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl2_set; int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pic32_spi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct pic32_spi *VAR_12)
{
 u32 VAR_13;


 FUNC_0(VAR_12);

 VAR_13 = FUNC_1(&VAR_12->regs->ctrl);

 VAR_13 |= VAR_3;
 VAR_12->fifo_n_byte = 16;


 VAR_13 &= ~VAR_4;


 VAR_13 |= VAR_7;


 VAR_13 &= ~(0x3 << VAR_9);
 VAR_13 |= (VAR_11 << VAR_9);


 VAR_13 &= ~(0x3 << VAR_8);
 VAR_13 |= (VAR_10 << VAR_8);


 VAR_13 &= ~VAR_5;


 VAR_13 &= ~VAR_6;

 FUNC_2(VAR_13, &VAR_12->regs->ctrl);


 VAR_13 = VAR_2 | VAR_1 | VAR_0;
 FUNC_2(VAR_13, &VAR_12->regs->ctrl2_set);
}
