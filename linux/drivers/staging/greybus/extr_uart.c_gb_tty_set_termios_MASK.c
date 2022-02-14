
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; struct gb_tty* driver_data; } ;
struct gb_tty_line_coding {int parity; int data_bits; int flow_control; int rate; int format; } ;
struct TYPE_3__ {int rate; } ;
struct gb_tty {int ctrlout; int clocal; TYPE_1__ line_coding; } ;
typedef int newline ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct gb_tty_line_coding*,int) ;
 int FUNC_4 (TYPE_1__*,struct gb_tty_line_coding*,int) ;
 int FUNC_5 (struct gb_tty*,int) ;
 int FUNC_6 (struct gb_tty*) ;
 int FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_13,
          struct ktermios *VAR_14)
{
 struct gb_tty *VAR_15 = VAR_13->driver_data;
 struct ktermios *VAR_16 = &VAR_13->termios;
 struct gb_tty_line_coding VAR_17;
 u8 VAR_18 = VAR_15->ctrlout;

 VAR_17.rate = FUNC_2(FUNC_7(VAR_13));
 VAR_17.format = VAR_16->c_cflag & VAR_5 ?
    VAR_7 : VAR_6;
 VAR_17.parity = VAR_16->c_cflag & VAR_11 ?
    (VAR_16->c_cflag & VAR_12 ? 1 : 2) +
    (VAR_16->c_cflag & VAR_3 ? 2 : 0) : 0;

 switch (VAR_16->c_cflag & VAR_4) {
 case 131:
  VAR_17.data_bits = 5;
  break;
 case 130:
  VAR_17.data_bits = 6;
  break;
 case 129:
  VAR_17.data_bits = 7;
  break;
 case 128:
 default:
  VAR_17.data_bits = 8;
  break;
 }


 VAR_15->clocal = ((VAR_16->c_cflag & VAR_2) != 0);

 if (FUNC_0(VAR_13) == VAR_0) {
  VAR_17.rate = VAR_15->line_coding.rate;
  VAR_18 &= ~(VAR_9 | VAR_10);
 } else if (VAR_14 && (VAR_14->c_cflag & VAR_1) == VAR_0) {
  VAR_18 |= (VAR_9 | VAR_10);
 }

 if (VAR_18 != VAR_15->ctrlout) {
  VAR_15->ctrlout = VAR_18;
  FUNC_5(VAR_15, VAR_18);
 }

 if (FUNC_1(VAR_13) && FUNC_0(VAR_13) != VAR_0)
  VAR_17.flow_control |= VAR_8;
 else
  VAR_17.flow_control &= ~VAR_8;

 if (FUNC_3(&VAR_15->line_coding, &VAR_17, sizeof(VAR_17))) {
  FUNC_4(&VAR_15->line_coding, &VAR_17, sizeof(VAR_17));
  FUNC_6(VAR_15);
 }
}
