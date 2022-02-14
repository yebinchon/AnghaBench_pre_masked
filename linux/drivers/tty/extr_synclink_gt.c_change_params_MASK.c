
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* tty; } ;
struct TYPE_12__ {int data_bits; int stop_bits; int data_rate; int parity; } ;
struct slgt_info {int signals; int timeout; int read_status_mask; int ignore_status_mask; TYPE_3__ port; TYPE_2__ params; int device_name; } ;
struct TYPE_11__ {unsigned int c_cflag; } ;
struct TYPE_14__ {TYPE_1__ termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;




 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*,unsigned int) ;
 int FUNC_9 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct slgt_info *VAR_18)
{
 unsigned VAR_19;
 int VAR_20;

 if (!VAR_18->port.tty)
  return;
 FUNC_0(("%s change_params\n", VAR_18->device_name));

 VAR_19 = VAR_18->port.tty->termios.c_cflag;



  if (VAR_19 & VAR_3)
  VAR_18->signals |= VAR_17 | VAR_16;
 else
  VAR_18->signals &= ~(VAR_17 | VAR_16);



 switch (VAR_19 & VAR_6) {
 case 131: VAR_18->params.data_bits = 5; break;
 case 130: VAR_18->params.data_bits = 6; break;
 case 129: VAR_18->params.data_bits = 7; break;
 case 128: VAR_18->params.data_bits = 8; break;
 default: VAR_18->params.data_bits = 7; break;
 }

 VAR_18->params.stop_bits = (VAR_19 & VAR_7) ? 2 : 1;

 if (VAR_19 & VAR_14)
  VAR_18->params.parity = (VAR_19 & VAR_15) ? VAR_2 : VAR_0;
 else
  VAR_18->params.parity = VAR_1;




 VAR_20 = VAR_18->params.data_bits +
   VAR_18->params.stop_bits + 1;

 VAR_18->params.data_rate = FUNC_7(VAR_18->port.tty);

 if (VAR_18->params.data_rate) {
  VAR_18->timeout = (32*VAR_8*VAR_20) /
    VAR_18->params.data_rate;
 }
 VAR_18->timeout += VAR_8/50;

 FUNC_9(&VAR_18->port, VAR_19 & VAR_5);
 FUNC_8(&VAR_18->port, ~VAR_19 & VAR_4);



 VAR_18->read_status_mask = VAR_9;
 if (FUNC_4(VAR_18->port.tty))
  VAR_18->read_status_mask |= VAR_13 | VAR_11;
  if (FUNC_1(VAR_18->port.tty) || FUNC_5(VAR_18->port.tty))
   VAR_18->read_status_mask |= VAR_10;
 if (FUNC_3(VAR_18->port.tty))
  VAR_18->ignore_status_mask |= VAR_13 | VAR_11;
 if (FUNC_2(VAR_18->port.tty)) {
  VAR_18->ignore_status_mask |= VAR_10;



  if (FUNC_3(VAR_18->port.tty))
   VAR_18->ignore_status_mask |= VAR_12;
 }

 FUNC_6(VAR_18);
}
