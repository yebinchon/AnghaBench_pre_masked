
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sifive_serial_port {unsigned int baud_rate; } ;


 int FUNC_0 (struct sifive_serial_port*) ;

__attribute__((used)) static void FUNC_1(struct sifive_serial_port *VAR_0,
       unsigned int VAR_1)
{
 if (VAR_0->baud_rate == VAR_1)
  return;

 VAR_0->baud_rate = VAR_1;
 FUNC_0(VAR_0);
}
