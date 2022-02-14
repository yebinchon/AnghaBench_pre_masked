
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {TYPE_1__* ch_bd; TYPE_2__* ch_neo_uart; } ;
struct TYPE_4__ {int isr_fcr; } ;
struct TYPE_3__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct jsm_channel *VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5 = 0;

 if (!VAR_3)
  return;

 FUNC_3((VAR_2 | VAR_1), &VAR_3->ch_neo_uart->isr_fcr);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {


  VAR_4 = FUNC_1(&VAR_3->ch_neo_uart->isr_fcr);
  if (VAR_4 & 2) {
   FUNC_0(VAR_0, &VAR_3->ch_bd->pci_dev,
    "Still flushing RX UART... i: %d\n", VAR_5);
   FUNC_2(10);
  }
  else
   break;
 }
}
