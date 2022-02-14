
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_t_tlevel; TYPE_1__* ch_cls_uart; } ;
struct TYPE_2__ {int isr_fcr; int ier; int lcr; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_10)
{
 u8 VAR_11 = FUNC_0(&VAR_10->ch_cls_uart->lcr);
 u8 VAR_12 = FUNC_0(&VAR_10->ch_cls_uart->ier);
 u8 VAR_13 = 0;





 FUNC_1(VAR_5, &VAR_10->ch_cls_uart->lcr);

 VAR_13 = FUNC_0(&VAR_10->ch_cls_uart->isr_fcr);


 VAR_13 |= (VAR_3 | VAR_2);
 VAR_13 &= ~(VAR_4);

 FUNC_1(VAR_13, &VAR_10->ch_cls_uart->isr_fcr);


 FUNC_1(VAR_11, &VAR_10->ch_cls_uart->lcr);





 VAR_12 |= (VAR_6);
 VAR_12 &= ~(VAR_7);
 FUNC_1(VAR_12, &VAR_10->ch_cls_uart->ier);


 FUNC_1((VAR_9), &VAR_10->ch_cls_uart->isr_fcr);

 FUNC_1((VAR_9 | VAR_0 |
  VAR_1 | VAR_8),
  &VAR_10->ch_cls_uart->isr_fcr);

 VAR_10->ch_t_tlevel = 16;
}
