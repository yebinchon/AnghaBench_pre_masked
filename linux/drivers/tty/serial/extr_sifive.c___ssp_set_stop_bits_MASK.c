
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct sifive_serial_port {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char FUNC_1 (struct sifive_serial_port*,int ) ;
 int FUNC_2 (char,int ,struct sifive_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct sifive_serial_port *VAR_3, char VAR_4)
{
 u32 VAR_5;

 if (VAR_4 < 1 || VAR_4 > 2) {
  FUNC_0(1);
  return;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= (VAR_4 - 1) << VAR_1;
 FUNC_2(VAR_5, VAR_2, VAR_3);
}
