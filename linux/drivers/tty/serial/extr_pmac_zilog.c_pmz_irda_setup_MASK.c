
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_pmac_port {int * curregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_pmac_port*,int ,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,unsigned long,...) ;
 int FUNC_4 (struct uart_pmac_port*,int *) ;
 int FUNC_5 (struct uart_pmac_port*) ;
 int FUNC_6 (struct uart_pmac_port*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct uart_pmac_port*,int) ;
 int FUNC_9 (struct uart_pmac_port*,size_t,int ) ;
 int FUNC_10 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_pmac_port *VAR_8, unsigned long *VAR_9)
{
 u8 VAR_10;
 int VAR_11, VAR_12;

 switch (*VAR_9) {

 case 2400:
  VAR_10 = 0x53;
  break;
 case 4800:
  VAR_10 = 0x52;
  break;
 case 9600:
  VAR_10 = 0x51;
  break;
 case 19200:
  VAR_10 = 0x50;
  break;
 case 38400:
  VAR_10 = 0x4f;
  break;
 case 57600:
  VAR_10 = 0x4e;
  break;
 case 115200:
  VAR_10 = 0x4d;
  break;



 case 1152000:
  VAR_10 = 0;
  break;
 case 4000000:
  VAR_10 = 0;
  break;
 default:
  VAR_10 = 0x51;
  *VAR_9 = 9600;
  break;
 }


 VAR_11 = 10000;
 while ((FUNC_6(VAR_8, VAR_3) & VAR_7) == 0
        || (FUNC_6(VAR_8, VAR_4) & VAR_0) == 0) {
  if (--VAR_11 <= 0) {
   FUNC_2("transmitter didn't drain\n");
   return;
  }
  FUNC_7(10);
 }


 VAR_11 = 100;
 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);
 FUNC_0(10);
 while (FUNC_6(VAR_8, VAR_3) & VAR_6) {
  FUNC_5(VAR_8);
  FUNC_0(10);
  if (--VAR_11 <= 0) {
   FUNC_2("receiver didn't drain\n");
   return;
  }
 }


 VAR_8->curregs[VAR_5] |= VAR_2;
 FUNC_9(VAR_8, VAR_5, VAR_8->curregs[VAR_5]);
 FUNC_10(VAR_8);
 FUNC_0(1);


 FUNC_1(VAR_8, VAR_1, 0, 19200);
 FUNC_4(VAR_8, VAR_8->curregs);
 FUNC_0(1);


 FUNC_8(VAR_8, 1);
 VAR_11 = 5000;
 while ((FUNC_6(VAR_8, VAR_3) & VAR_6) == 0) {
  if (--VAR_11 <= 0) {
   FUNC_2("irda_setup timed out on get_version byte\n");
   goto out;
  }
  FUNC_7(10);
 }
 VAR_12 = FUNC_5(VAR_8);

 if (VAR_12 < 4) {
  FUNC_3("IrDA: dongle version %d not supported\n", VAR_12);
  goto out;
 }


 FUNC_8(VAR_8, VAR_10);
 VAR_11 = 5000;
 while ((FUNC_6(VAR_8, VAR_3) & VAR_6) == 0) {
  if (--VAR_11 <= 0) {
   FUNC_2("irda_setup timed out on speed mode byte\n");
   goto out;
  }
  FUNC_7(10);
 }
 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11 != VAR_10)
  FUNC_2("irda_setup speed mode byte = %x (%x)\n", VAR_11, VAR_10);

 FUNC_3("IrDA setup for %ld bps, dongle version: %d\n",
   *VAR_9, VAR_12);

 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);

 out:

 VAR_8->curregs[VAR_5] &= ~VAR_2;
 FUNC_9(VAR_8, VAR_5, VAR_8->curregs[VAR_5]);
 FUNC_10(VAR_8);

 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);
 (void)FUNC_5(VAR_8);
}
