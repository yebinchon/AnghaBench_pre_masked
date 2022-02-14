
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(u8 VAR_8, u8 VAR_9)
{
 FUNC_0("IRQ 0x%02x (IREN 0x%02x) :%s%s%s%s%s%s%s%s%s",
  VAR_8, VAR_9,
  VAR_8 & VAR_2 ? " RDR" : "",
  VAR_8 & VAR_4 ? " RTR" : "",
  VAR_8 & VAR_1 ? " PE" : "",
  VAR_8 & VAR_3 ? " RFO" : "",
  VAR_8 & VAR_5 ? " TE" : "",
  VAR_8 & VAR_7 ? " TTR" : "",
  VAR_8 & VAR_6 ? " TFU" : "",
  VAR_8 & VAR_0 ? " GH" : "",
  VAR_8 & ~(VAR_2 | VAR_4 | VAR_1 |
      VAR_3 | VAR_5 | VAR_7 |
      VAR_6 | VAR_0) ? " ?" : "");
}
