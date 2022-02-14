
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_c_iflag; int ch_t_tlevel; int ch_r_tlevel; TYPE_2__* ch_neo_uart; scalar_t__ ch_r_watermark; TYPE_1__* ch_bd; } ;
struct TYPE_4__ {int ier; int rfifo; int tfifo; int fctr; int efr; } ;
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

 FUNC_0(VAR_1, &VAR_8->ch_bd->pci_dev, "Unsetting Output FLOW\n");


 VAR_9 &= ~(VAR_7);
 VAR_10 &= ~(VAR_2);


 if (VAR_8->ch_c_iflag & VAR_0)
  VAR_10 &= ~(VAR_4);
 else
  VAR_10 &= ~(VAR_3 | VAR_4);


 FUNC_2(0, &VAR_8->ch_neo_uart->efr);


 FUNC_2(VAR_10, &VAR_8->ch_neo_uart->efr);


 FUNC_2((VAR_6 | VAR_5), &VAR_8->ch_neo_uart->fctr);

 VAR_8->ch_r_watermark = 0;

 FUNC_2(16, &VAR_8->ch_neo_uart->tfifo);
 VAR_8->ch_t_tlevel = 16;

 FUNC_2(16, &VAR_8->ch_neo_uart->rfifo);
 VAR_8->ch_r_tlevel = 16;

 FUNC_2(VAR_9, &VAR_8->ch_neo_uart->ier);
}
