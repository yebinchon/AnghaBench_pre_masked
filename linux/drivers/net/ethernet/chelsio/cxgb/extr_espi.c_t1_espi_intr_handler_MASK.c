
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int DIP2_parity_err; int parity_err; int rx_ovflw; int tx_drops; int rx_drops; int DIP4_err; } ;
struct peespi {TYPE_2__* adapter; TYPE_1__ intr_cnt; } ;
struct TYPE_4__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct peespi *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8->adapter->regs + VAR_1);

 if (VAR_9 & VAR_3)
  VAR_8->intr_cnt.DIP4_err++;
 if (VAR_9 & VAR_5)
  VAR_8->intr_cnt.rx_drops++;
 if (VAR_9 & VAR_7)
  VAR_8->intr_cnt.tx_drops++;
 if (VAR_9 & VAR_6)
  VAR_8->intr_cnt.rx_ovflw++;
 if (VAR_9 & VAR_4)
  VAR_8->intr_cnt.parity_err++;
 if (VAR_9 & VAR_2) {
  VAR_8->intr_cnt.DIP2_parity_err++;





  FUNC_0(VAR_8->adapter->regs + VAR_0);
 }





 if (VAR_9 && FUNC_1(VAR_8->adapter))
  VAR_9 = 1;
 FUNC_2(VAR_9, VAR_8->adapter->regs + VAR_1);
 return 0;
}
