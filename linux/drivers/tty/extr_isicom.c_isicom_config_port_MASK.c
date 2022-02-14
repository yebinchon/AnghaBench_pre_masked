
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {unsigned long c_cflag; } ;
struct tty_struct {TYPE_1__ termios; struct isi_port* driver_data; } ;
struct TYPE_5__ {int flags; } ;
struct isi_port {int channel; TYPE_2__ port; struct isi_board* card; } ;
struct isi_board {unsigned long base; int shift_count; int port_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;




 unsigned long FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*) ;
 scalar_t__ FUNC_13 (unsigned long) ;
 int FUNC_14 (struct isi_port*) ;
 int* VAR_16 ;
 int FUNC_15 (int,unsigned long) ;
 int FUNC_16 (struct isi_port*) ;
 int FUNC_17 (TYPE_2__*,int) ;
 int FUNC_18 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct tty_struct *VAR_17)
{
 struct isi_port *VAR_18 = VAR_17->driver_data;
 struct isi_board *VAR_19 = VAR_18->card;
 unsigned long VAR_20;
 unsigned long VAR_21 = VAR_19->base;
 u16 VAR_22, VAR_23 = VAR_18->channel,
  VAR_24 = VAR_19->shift_count;
 unsigned char VAR_25;


 VAR_20 = FUNC_0(VAR_17);
 if (VAR_20 & VAR_5) {
  VAR_20 &= ~VAR_5;







  if (VAR_20 < 1 || VAR_20 > 4)
   VAR_17->termios.c_cflag &= ~VAR_5;
  else
   VAR_20 += 15;
 }
 if (VAR_20 == 15) {






  if ((VAR_18->port.flags & VAR_1) == VAR_0)
   VAR_20++;
  if ((VAR_18->port.flags & VAR_1) == VAR_3)
   VAR_20 += 2;
  if ((VAR_18->port.flags & VAR_1) == VAR_2)
   VAR_20 += 3;
  if ((VAR_18->port.flags & VAR_1) == VAR_4)
   VAR_20 += 4;
 }
 if (VAR_16[VAR_20] == -1) {

  FUNC_14(VAR_18);
  return;
 } else
  FUNC_16(VAR_18);

 if (FUNC_13(VAR_21) == 0) {
  FUNC_15(0x8000 | (VAR_23 << VAR_24) | 0x03, VAR_21);
  FUNC_15(VAR_16[VAR_20] << 8 | 0x03, VAR_21);
  VAR_22 = 0;
  switch (FUNC_4(VAR_17)) {
  case 131:
   VAR_22 |= VAR_7;
   break;
  case 130:
   VAR_22 |= VAR_8;
   break;
  case 129:
   VAR_22 |= VAR_9;
   break;
  case 128:
   VAR_22 |= VAR_10;
   break;
  }

  if (FUNC_5(VAR_17))
   VAR_22 |= VAR_6;
  if (FUNC_6(VAR_17)) {
   VAR_22 |= VAR_12;
   if (FUNC_7(VAR_17))
    VAR_22 |= VAR_14;
  }
  FUNC_15(VAR_22, VAR_21);
  FUNC_10(VAR_21);
 }
 FUNC_17(&VAR_18->port, !FUNC_1(VAR_17));


 VAR_25 = 0;
 FUNC_18(&VAR_18->port, FUNC_3(VAR_17));
 if (FUNC_3(VAR_17))
  VAR_25 |= VAR_11;
 if (FUNC_9(VAR_17))
  VAR_25 |= VAR_15;
 if (FUNC_8(VAR_17))
  VAR_25 |= VAR_13;

 if (FUNC_13(VAR_21) == 0) {
  FUNC_15(0x8000 | (VAR_23 << VAR_24) | 0x04, VAR_21);
  FUNC_15(VAR_25 << 8 | 0x05, VAR_21);
  FUNC_15((FUNC_12(VAR_17)) << 8 | (FUNC_11(VAR_17)), VAR_21);
  FUNC_10(VAR_21);
 }


 if (FUNC_2(VAR_17)) {
  VAR_19->port_status |= (1 << VAR_23);
  FUNC_15(VAR_19->port_status, VAR_21 + 0x02);
 }
}
