
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {int ch_flags; TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int msr; int lsr; int isr_fcr; int txrx; int lcr; int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_3(struct jsm_channel *VAR_8)
{
 unsigned char VAR_9 = FUNC_0(&VAR_8->ch_cls_uart->lcr);
 unsigned char VAR_10 = 0;

 FUNC_2(0, &VAR_8->ch_cls_uart->ier);





 FUNC_2(VAR_4, &VAR_8->ch_cls_uart->lcr);

 VAR_10 = FUNC_0(&VAR_8->ch_cls_uart->isr_fcr);


 VAR_10 |= (VAR_3);

 FUNC_2(VAR_10, &VAR_8->ch_cls_uart->isr_fcr);


 FUNC_2(VAR_9, &VAR_8->ch_cls_uart->lcr);


 FUNC_0(&VAR_8->ch_cls_uart->txrx);

 FUNC_2((VAR_7|VAR_5|VAR_6),
       &VAR_8->ch_cls_uart->isr_fcr);
 FUNC_1(10);

 VAR_8->ch_flags |= (VAR_0 | VAR_1 | VAR_2);

 FUNC_0(&VAR_8->ch_cls_uart->lsr);
 FUNC_0(&VAR_8->ch_cls_uart->msr);
}
