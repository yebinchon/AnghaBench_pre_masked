
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_lflag; int c_oflag; } ;
struct tty_struct {TYPE_1__ termios; } ;
struct fwtty_port {unsigned int cps; int write_only; scalar_t__ loopback; int ignore_mask; int status_mask; } ;


 int VAR_0 ;




 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct tty_struct*,int) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_9(struct fwtty_port *VAR_12, struct tty_struct *VAR_13)
{
 unsigned int VAR_14, VAR_15;

 VAR_14 = FUNC_7(&VAR_13->termios);
 FUNC_8(&VAR_13->termios, VAR_14, VAR_14);


 VAR_15 = 12 + ((FUNC_2(VAR_13)) ? 4 : 2) + ((FUNC_3(VAR_13)) ? 2 : 0);

 switch (FUNC_1(VAR_13)) {
 case 131:
  VAR_15 -= (FUNC_2(VAR_13)) ? 1 : 0;
  break;
 case 130:
  VAR_15 += 2;
  break;
 case 129:
  VAR_15 += 4;
  break;
 case 128:
  VAR_15 += 6;
  break;
 }

 VAR_12->cps = (VAR_14 << 1) / VAR_15;

 VAR_12->status_mask = VAR_11;
 if (FUNC_6(VAR_13, VAR_0 | VAR_9))
  VAR_12->status_mask |= VAR_10;

 VAR_12->ignore_mask = 0;
 if (FUNC_4(VAR_13)) {
  VAR_12->ignore_mask |= VAR_10;
  if (FUNC_5(VAR_13))
   VAR_12->ignore_mask |= VAR_11;
 }

 VAR_12->write_only = !FUNC_0(VAR_13);


 if (VAR_12->loopback) {
  VAR_13->termios.c_lflag &= ~(VAR_1 | VAR_3 | VAR_4 | VAR_5 |
       VAR_6 | VAR_7 | VAR_2);
  VAR_13->termios.c_oflag &= ~VAR_8;
 }

 return VAR_14;
}
