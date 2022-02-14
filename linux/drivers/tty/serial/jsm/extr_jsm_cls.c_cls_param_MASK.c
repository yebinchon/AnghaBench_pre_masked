
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {TYPE_2__* state; } ;
struct jsm_channel {int ch_c_cflag; int ch_flags; int ch_mostat; int ch_c_iflag; scalar_t__ ch_startc; scalar_t__ ch_stopc; TYPE_4__* ch_cls_uart; struct jsm_board* ch_bd; TYPE_3__ uart_port; scalar_t__ ch_e_tail; scalar_t__ ch_e_head; scalar_t__ ch_r_tail; scalar_t__ ch_r_head; } ;
struct jsm_board {int bd_dividend; } ;
struct TYPE_11__ {unsigned int cflag; int rate; } ;
struct TYPE_10__ {int msr; int ier; int lcr; int txrx; } ;
struct TYPE_7__ {int tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 TYPE_5__* VAR_27 ;
 int FUNC_2 (struct jsm_channel*) ;
 int FUNC_3 (struct jsm_channel*) ;
 int FUNC_4 (struct jsm_channel*) ;
 int FUNC_5 (struct jsm_channel*,int) ;
 int FUNC_6 (struct jsm_channel*) ;
 int FUNC_7 (struct jsm_channel*) ;
 int FUNC_8 (struct jsm_channel*) ;
 int FUNC_9 (struct jsm_channel*) ;
 int FUNC_10 (struct jsm_channel*) ;
 int FUNC_11 (struct jsm_channel*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int *) ;

__attribute__((used)) static void FUNC_14(struct jsm_channel *VAR_28)
{
 u8 VAR_29 = 0;
 u8 VAR_30 = 0;
 u8 VAR_31 = 0;
 u32 VAR_32 = 9600;
 int VAR_33 = 0;
 struct jsm_board *VAR_34;
 int VAR_35;
 unsigned int VAR_36;

 VAR_34 = VAR_28->ch_bd;
 if (!VAR_34)
  return;




 if ((VAR_28->ch_c_cflag & (VAR_0)) == 0) {
  VAR_28->ch_r_head = 0;
  VAR_28->ch_r_tail = 0;
  VAR_28->ch_e_head = 0;
  VAR_28->ch_e_tail = 0;

  FUNC_4(VAR_28);
  FUNC_3(VAR_28);


  VAR_28->ch_flags |= (VAR_1);
  VAR_28->ch_mostat &= ~(VAR_25 | VAR_24);
  FUNC_2(VAR_28);
  return;
 }

 VAR_36 = FUNC_1(VAR_28->uart_port.state->port.tty);
 VAR_32 = 9600;
 for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_27); VAR_35++) {
  if (VAR_27[VAR_35].cflag == VAR_36) {
   VAR_32 = VAR_27[VAR_35].rate;
   break;
  }
 }

 if (VAR_28->ch_flags & VAR_1)
  VAR_28->ch_flags &= ~(VAR_1);

 if (VAR_28->ch_c_cflag & VAR_9)
  VAR_29 |= VAR_17;

 if (!(VAR_28->ch_c_cflag & VAR_10))
  VAR_29 |= VAR_16;
 if (VAR_28->ch_c_cflag & VAR_6)
  VAR_29 |= VAR_19;

 switch (VAR_28->ch_c_cflag & VAR_5) {
 case 131:
  VAR_29 |= VAR_20;
  break;
 case 130:
  VAR_29 |= VAR_21;
  break;
 case 129:
  VAR_29 |= VAR_22;
  break;
 case 128:
 default:
  VAR_29 |= VAR_23;
  break;
 }

 VAR_31 = FUNC_12(&VAR_28->ch_cls_uart->ier);
 VAR_30 = FUNC_12(&VAR_28->ch_cls_uart->lcr);

 VAR_33 = VAR_28->ch_bd->bd_dividend / VAR_32;

 if (VAR_33 != 0) {
  FUNC_13(VAR_15, &VAR_28->ch_cls_uart->lcr);
  FUNC_13((VAR_33 & 0xff), &VAR_28->ch_cls_uart->txrx);
  FUNC_13((VAR_33 >> 8), &VAR_28->ch_cls_uart->ier);
  FUNC_13(VAR_29, &VAR_28->ch_cls_uart->lcr);
 }

 if (VAR_30 != VAR_29)
  FUNC_13(VAR_29, &VAR_28->ch_cls_uart->lcr);

 if (VAR_28->ch_c_cflag & VAR_3)
  VAR_31 |= (VAR_12 | VAR_13);

 VAR_31 |= (VAR_14 | VAR_11);

 FUNC_13(VAR_31, &VAR_28->ch_cls_uart->ier);

 if (VAR_28->ch_c_cflag & VAR_4)
  FUNC_6(VAR_28);
 else if (VAR_28->ch_c_iflag & VAR_8) {




  if ((VAR_28->ch_startc == VAR_26) ||
   (VAR_28->ch_stopc == VAR_26))
   FUNC_10(VAR_28);
  else
   FUNC_8(VAR_28);
 } else
  FUNC_10(VAR_28);

 if (VAR_28->ch_c_cflag & VAR_4)
  FUNC_11(VAR_28);
 else if (VAR_28->ch_c_iflag & VAR_7) {




  if ((VAR_28->ch_startc == VAR_26) ||
   (VAR_28->ch_stopc == VAR_26))
   FUNC_9(VAR_28);
  else
   FUNC_7(VAR_28);
 } else
  FUNC_9(VAR_28);

 FUNC_2(VAR_28);


 FUNC_5(VAR_28, FUNC_12(&VAR_28->ch_cls_uart->msr));
}
