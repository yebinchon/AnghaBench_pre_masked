
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_t_tlevel; int ch_startc; int ch_stopc; TYPE_2__* ch_neo_uart; TYPE_1__* ch_bd; } ;
struct TYPE_4__ {int ier; int xoffchar2; int xoffchar1; int xonchar2; int xonchar1; int tfifo; int fctr; int efr; } ;
struct TYPE_3__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct jsm_channel *VAR_8)
{
 u8 VAR_9, VAR_10;
 VAR_9 = FUNC_1(&VAR_8->ch_neo_uart->ier);
 VAR_10 = FUNC_1(&VAR_8->ch_neo_uart->efr);

 FUNC_0(VAR_0, &VAR_8->ch_bd->pci_dev, "Setting IXOFF FLOW\n");


 VAR_9 &= ~(VAR_6);
 VAR_10 &= ~(VAR_3);


 VAR_9 |= (VAR_7);
 VAR_10 |= (VAR_1 | VAR_2);


 FUNC_2(0, &VAR_8->ch_neo_uart->efr);


 FUNC_2(VAR_10, &VAR_8->ch_neo_uart->efr);


 FUNC_2((VAR_5 | VAR_4), &VAR_8->ch_neo_uart->fctr);

 FUNC_2(8, &VAR_8->ch_neo_uart->tfifo);
 VAR_8->ch_t_tlevel = 8;


 FUNC_2(VAR_8->ch_startc, &VAR_8->ch_neo_uart->xonchar1);
 FUNC_2(0, &VAR_8->ch_neo_uart->xonchar2);

 FUNC_2(VAR_8->ch_stopc, &VAR_8->ch_neo_uart->xoffchar1);
 FUNC_2(0, &VAR_8->ch_neo_uart->xoffchar2);

 FUNC_2(VAR_9, &VAR_8->ch_neo_uart->ier);
}
