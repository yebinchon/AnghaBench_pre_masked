
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct uart_port {int dummy; } ;
struct serial_iso7816 {int sc_di; scalar_t__ sc_fi; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_0,
        struct serial_iso7816 *VAR_1)
{
 u64 VAR_2 = 0;

 if (VAR_1->sc_fi && VAR_1->sc_di) {
  VAR_2 = (u64)VAR_1->sc_fi;
  FUNC_0(VAR_2, VAR_1->sc_di);
 }
 return (u32)VAR_2;
}
