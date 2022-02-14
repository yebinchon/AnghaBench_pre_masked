
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dev; } ;
struct atmel_uart_port {int has_frac_baudrate; int has_hw_timer; int fidi_min; int fidi_max; void* rtor; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 struct atmel_uart_port *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_0(VAR_4, VAR_1);
 u32 VAR_7;
 u32 VAR_8, VAR_9, VAR_10;

 VAR_8 = 0x55534152;
 VAR_9 = 0x44424755;
 VAR_10 = 0x55415254;







 VAR_5->has_frac_baudrate = 0;
 VAR_5->has_hw_timer = 0;

 if (VAR_6 == VAR_10) {
  FUNC_1(VAR_4->dev, "Uart with hw timer");
  VAR_5->has_hw_timer = 1;
  VAR_5->rtor = VAR_0;
 } else if (VAR_6 == VAR_8) {
  FUNC_1(VAR_4->dev, "Usart\n");
  VAR_5->has_frac_baudrate = 1;
  VAR_5->has_hw_timer = 1;
  VAR_5->rtor = VAR_2;
  VAR_7 = FUNC_0(VAR_4, VAR_3);
  switch (VAR_7) {
  case 0x814:

  case 0x701:
   VAR_5->fidi_min = 3;
   VAR_5->fidi_max = 65535;
   break;
  case 0x502:
   VAR_5->fidi_min = 3;
   VAR_5->fidi_max = 2047;
   break;
  default:
   VAR_5->fidi_min = 1;
   VAR_5->fidi_max = 2047;
  }
 } else if (VAR_6 == VAR_9) {
  FUNC_1(VAR_4->dev, "Dbgu or uart without hw timer\n");
 } else {

  VAR_7 = FUNC_0(VAR_4, VAR_3);
  switch (VAR_7) {
  case 0x302:
  case 0x10213:
  case 0x10302:
   FUNC_1(VAR_4->dev, "This version is usart\n");
   VAR_5->has_frac_baudrate = 1;
   VAR_5->has_hw_timer = 1;
   VAR_5->rtor = VAR_2;
   break;
  case 0x203:
  case 0x10202:
   FUNC_1(VAR_4->dev, "This version is uart\n");
   break;
  default:
   FUNC_2(VAR_4->dev, "Not supported ip name nor version, set to uart\n");
  }
 }
}
