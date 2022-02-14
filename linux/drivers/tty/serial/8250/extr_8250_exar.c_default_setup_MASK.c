
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int pm; int type; int set_divisor; int get_divisor; scalar_t__ membase; int regshift; scalar_t__ mapbase; int iotype; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pci_dev {int dummy; } ;
struct exar8250_board {int reg_shift; } ;
struct exar8250 {scalar_t__ virt; struct exar8250_board* board; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*,unsigned int) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct exar8250 *VAR_8, struct pci_dev *VAR_9,
    int VAR_10, unsigned int VAR_11,
    struct uart_8250_port *VAR_12)
{
 const struct exar8250_board *VAR_13 = VAR_8->board;
 unsigned int VAR_14 = 0;
 unsigned char VAR_15;

 VAR_12->port.iotype = VAR_3;
 VAR_12->port.mapbase = FUNC_0(VAR_9, VAR_14) + VAR_11;
 VAR_12->port.membase = VAR_8->virt + VAR_11;
 VAR_12->port.regshift = VAR_13->reg_shift;
 VAR_15 = FUNC_1(VAR_12->port.membase + VAR_2);
 if (VAR_15 == 0x82 || VAR_15 == 0x84 || VAR_15 == 0x88) {
  VAR_12->port.type = VAR_1;

  VAR_12->port.get_divisor = VAR_6;
  VAR_12->port.set_divisor = VAR_7;
 } else {
  VAR_12->port.type = VAR_0;
 }

 VAR_12->port.pm = VAR_4;
 VAR_12->port.shutdown = VAR_5;

 return 0;
}
