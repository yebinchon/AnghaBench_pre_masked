
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jsm_channel {int ch_c_cflag; TYPE_1__* ch_neo_uart; int ch_stopc; int ch_startc; TYPE_2__* ch_bd; } ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {int xoffchar2; int xoffchar1; int xonchar2; int xonchar1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct jsm_channel *VAR_2)
{


 if (VAR_2->ch_c_cflag & VAR_0)
  return;

 FUNC_0(VAR_1, &VAR_2->ch_bd->pci_dev, "start\n");


 FUNC_1(VAR_2->ch_startc, &VAR_2->ch_neo_uart->xonchar1);
 FUNC_1(0, &VAR_2->ch_neo_uart->xonchar2);

 FUNC_1(VAR_2->ch_stopc, &VAR_2->ch_neo_uart->xoffchar1);
 FUNC_1(0, &VAR_2->ch_neo_uart->xoffchar2);
}
