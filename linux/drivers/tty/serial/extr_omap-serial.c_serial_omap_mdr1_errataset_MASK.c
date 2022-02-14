
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_omap_port {int fcr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct uart_omap_port*,int ) ;
 int FUNC_2 (struct uart_omap_port*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct uart_omap_port *VAR_7, u8 VAR_8)
{
 u8 VAR_9 = 255;

 FUNC_2(VAR_7, VAR_6, VAR_8);
 FUNC_3(2);
 FUNC_2(VAR_7, VAR_0, VAR_7->fcr | VAR_2 |
   VAR_1);




 while (VAR_5 != (FUNC_1(VAR_7, VAR_3) &
    (VAR_5 | VAR_4))) {
  VAR_9--;
  if (!VAR_9) {

   FUNC_0(VAR_7->dev, "Errata i202: timedout %x\n",
      FUNC_1(VAR_7, VAR_3));
   break;
  }
  FUNC_3(1);
 }
}
