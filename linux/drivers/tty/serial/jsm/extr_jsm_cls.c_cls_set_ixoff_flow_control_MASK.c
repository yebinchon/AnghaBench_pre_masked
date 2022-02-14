
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_startc; int ch_stopc; TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int isr_fcr; int ier; int lcr; int spr; int msr; int lsr; int mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_9)
{
 u8 VAR_10 = FUNC_0(&VAR_9->ch_cls_uart->lcr);
 u8 VAR_11 = FUNC_0(&VAR_9->ch_cls_uart->ier);
 u8 VAR_12 = 0;





 FUNC_1(VAR_5, &VAR_9->ch_cls_uart->lcr);

 VAR_12 = FUNC_0(&VAR_9->ch_cls_uart->isr_fcr);


 VAR_12 |= (VAR_2 | VAR_3);
 VAR_12 &= ~(VAR_4);

 FUNC_1(VAR_12, &VAR_9->ch_cls_uart->isr_fcr);


 FUNC_1(VAR_9->ch_startc, &VAR_9->ch_cls_uart->mcr);
 FUNC_1(0, &VAR_9->ch_cls_uart->lsr);
 FUNC_1(VAR_9->ch_stopc, &VAR_9->ch_cls_uart->msr);
 FUNC_1(0, &VAR_9->ch_cls_uart->spr);


 FUNC_1(VAR_10, &VAR_9->ch_cls_uart->lcr);


 VAR_11 &= ~(VAR_6);
 FUNC_1(VAR_11, &VAR_9->ch_cls_uart->ier);


 FUNC_1((VAR_8), &VAR_9->ch_cls_uart->isr_fcr);

 FUNC_1((VAR_8 | VAR_0 |
  VAR_1 | VAR_7),
  &VAR_9->ch_cls_uart->isr_fcr);
}
