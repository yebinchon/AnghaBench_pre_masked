
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sifive_serial_port {int baud_rate; int clkin_rate; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,struct sifive_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct sifive_serial_port *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_1->clkin_rate, VAR_1->baud_rate) - 1;

 FUNC_1(VAR_2, VAR_0, VAR_1);
}
