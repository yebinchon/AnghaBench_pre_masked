
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(u8 VAR_6)
{
 FUNC_0(VAR_5, "IRQ 0x%02x:%s%s%s%s%s", VAR_6,
  VAR_6 & VAR_0 ? " IRQEN" : "",
  VAR_6 & VAR_3 ? " TXF" : "",
  VAR_6 & VAR_4 ? " TXU" : "",
  VAR_6 & VAR_2 ? " RXTO" : "",
  VAR_6 & VAR_1 ? " RXOK" : "");
}
