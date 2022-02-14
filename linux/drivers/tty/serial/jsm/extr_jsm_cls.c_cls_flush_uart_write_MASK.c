
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_flags; TYPE_1__* ch_bd; TYPE_2__* ch_cls_uart; } ;
struct TYPE_4__ {int isr_fcr; } ;
struct TYPE_3__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct jsm_channel *VAR_5)
{
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;

 if (!VAR_5)
  return;

 FUNC_3((VAR_4 | VAR_3),
      &VAR_5->ch_cls_uart->isr_fcr);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {

  VAR_6 = FUNC_1(&VAR_5->ch_cls_uart->isr_fcr);
  if (VAR_6 & VAR_3) {
   FUNC_0(VAR_2, &VAR_5->ch_bd->pci_dev,
    "Still flushing TX UART... i: %d\n", VAR_7);
   FUNC_2(10);
  } else
   break;
 }

 VAR_5->ch_flags |= (VAR_0 | VAR_1);
}
