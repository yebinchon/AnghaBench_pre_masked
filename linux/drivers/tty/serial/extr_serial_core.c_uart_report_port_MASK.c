
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; unsigned long long iobase; int uartclk; int irq; int name; scalar_t__ dev; scalar_t__ mapbase; int hub6; } ;
struct uart_driver {int dummy; } ;
typedef int address ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char*,int ,char*,int ,int,int ) ;
 int FUNC_2 (char*,int,char*,unsigned long long,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static inline void
FUNC_5(struct uart_driver *VAR_0, struct uart_port *VAR_1)
{
 char VAR_2[64];

 switch (VAR_1->iotype) {
 case 129:
  FUNC_2(VAR_2, sizeof(VAR_2), "I/O 0x%lx", VAR_1->iobase);
  break;
 case 134:
  FUNC_2(VAR_2, sizeof(VAR_2),
    "I/O 0x%lx offset 0x%x", VAR_1->iobase, VAR_1->hub6);
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 135:
 case 128:
  FUNC_2(VAR_2, sizeof(VAR_2),
    "MMIO 0x%llx", (unsigned long long)VAR_1->mapbase);
  break;
 default:
  FUNC_3(VAR_2, "*unknown*", sizeof(VAR_2));
  break;
 }

 FUNC_1("%s%s%s at %s (irq = %d, base_baud = %d) is a %s\n",
        VAR_1->dev ? FUNC_0(VAR_1->dev) : "",
        VAR_1->dev ? ": " : "",
        VAR_1->name,
        VAR_2, VAR_1->irq, VAR_1->uartclk / 16, FUNC_4(VAR_1));
}
