
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dram; } ;
struct TYPE_4__ {int osr; } ;


 unsigned char VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_5, unsigned int VAR_6)
{
 unsigned char VAR_7;

 FUNC_1(VAR_1, "SET_MODEM", 0);
 VAR_7 = FUNC_0(&VAR_1->dram->osr);

 if (VAR_6 & VAR_4) {
  FUNC_1(VAR_1, "RAISE_RTS", 0);
  VAR_7 |= VAR_2;
 } else {
  FUNC_1(VAR_1, "LOWER_RTS", 0);
  VAR_7 &= ~VAR_2;
 }

 if (VAR_6 & VAR_3) {
  FUNC_1(VAR_1, "RAISE_DTR", 0);
  VAR_7 |= VAR_0;
 } else {
  FUNC_1(VAR_1, "LOWER_DTR", 0);
  VAR_7 &= ~VAR_0;
 }

 FUNC_2(VAR_7, &VAR_1->dram->osr);
}
