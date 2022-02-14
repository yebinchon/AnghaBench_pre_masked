
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct uart_8250_port {int port; } ;
struct serial_private {int * line; } ;
struct pci_dev {int device; int irq; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct serial_private* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct uart_8250_port* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5, VAR_6;
 resource_size_t VAR_7[3];
 u8 VAR_8;
 struct serial_private *VAR_9 = FUNC_1(VAR_3);
 struct uart_8250_port *VAR_10;

 if (!(FUNC_2(VAR_3, 5) & VAR_2) ||
   !(FUNC_2(VAR_3, 4) & VAR_2) ||
   !(FUNC_2(VAR_3, 3) & VAR_2))
  return -VAR_1;

 switch (VAR_3->device) {
 case 0x1104:
 case 0x1108:
  VAR_5 = VAR_3->device & 0xff;
  break;
 case 0x1112:
  VAR_5 = 12;
  break;
 default:
  return -VAR_0;
 }


 VAR_7[0] = FUNC_3(VAR_3, 5);
 VAR_7[1] = FUNC_3(VAR_3, 4);
 VAR_7[2] = FUNC_3(VAR_3, 3);

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {

  VAR_8 = 0x40 + 0x08 * VAR_6;


  VAR_4 = (VAR_7[VAR_6 / 4] & 0xffffffe0) + (VAR_6 % 4) * 8;


  FUNC_4(VAR_3, VAR_8 + 0x00, 0x01);


  FUNC_4(VAR_3, VAR_8 + 0x01, 0x33);


  FUNC_4(VAR_3, VAR_8 + 0x04,
    (u8)(VAR_4 & 0xff));


  FUNC_4(VAR_3, VAR_8 + 0x05,
    (u8)((VAR_4 & 0xff00) >> 8));

  FUNC_4(VAR_3, VAR_8 + 0x06, VAR_3->irq);

  if (VAR_9) {



   VAR_10 = FUNC_5(VAR_9->line[VAR_6]);
   FUNC_0(&VAR_10->port, ((void*)0));
  } else {



   FUNC_4(VAR_3, VAR_8 + 0x07, 0x01);
  }
 }

 return VAR_5;
}
