
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int regshift; scalar_t__ mapbase; scalar_t__ membase; int * dev; int iotype; int uartclk; int irq; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_card_type {unsigned int num_ports; scalar_t__* offset; int uartclk; int type; } ;
struct serial_card_info {unsigned int num_ports; int * ports; scalar_t__ vaddr; } ;
struct expansion_card {int dev; int irq; } ;
struct ecard_id {struct serial_card_type* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (struct expansion_card*,int ) ;
 int FUNC_1 (struct expansion_card*,struct serial_card_info*) ;
 scalar_t__ FUNC_2 (struct expansion_card*,int ,int ,int ) ;
 int FUNC_3 (struct serial_card_info*) ;
 struct serial_card_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct uart_8250_port*,int ,int) ;
 int FUNC_6 (struct uart_8250_port*) ;

__attribute__((used)) static int
FUNC_7(struct expansion_card *VAR_5, const struct ecard_id *VAR_6)
{
 struct serial_card_info *VAR_7;
 struct serial_card_type *VAR_8 = VAR_6->data;
 struct uart_8250_port VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;

 VAR_7 = FUNC_4(sizeof(struct serial_card_info), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->num_ports = VAR_8->num_ports;

 VAR_10 = FUNC_0(VAR_5, VAR_8->type);
 VAR_7->vaddr = FUNC_2(VAR_5, VAR_8->type, 0, 0);
 if (!VAR_7->vaddr) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_7);

 FUNC_5(&VAR_9, 0, sizeof(struct uart_8250_port));
 VAR_9.port.irq = VAR_5->irq;
 VAR_9.port.flags = VAR_2 | VAR_3;
 VAR_9.port.uartclk = VAR_8->uartclk;
 VAR_9.port.iotype = VAR_4;
 VAR_9.port.regshift = 2;
 VAR_9.port.dev = &VAR_5->dev;

 for (VAR_11 = 0; VAR_11 < VAR_7->num_ports; VAR_11++) {
  VAR_9.port.membase = VAR_7->vaddr + VAR_8->offset[VAR_11];
  VAR_9.port.mapbase = VAR_10 + VAR_8->offset[VAR_11];

  VAR_7->ports[VAR_11] = FUNC_6(&VAR_9);
 }

 return 0;
}
