
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_flags; int ch_lock; TYPE_1__* ch_bd; TYPE_2__* ch_cls_uart; } ;
struct TYPE_4__ {int lcr; } ;
struct TYPE_3__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct jsm_channel *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_4->ch_lock, VAR_5);


 if (VAR_4->ch_flags & VAR_0) {
  u8 VAR_6 = FUNC_1(&VAR_4->ch_cls_uart->lcr);

  FUNC_4((VAR_6 & ~VAR_2), &VAR_4->ch_cls_uart->lcr);

  VAR_4->ch_flags &= ~(VAR_0);
  FUNC_0(VAR_1, &VAR_4->ch_bd->pci_dev,
   "clear break Finishing UART_LCR_SBC! finished: %lx\n",
   VAR_3);
 }
 FUNC_3(&VAR_4->ch_lock, VAR_5);
}
