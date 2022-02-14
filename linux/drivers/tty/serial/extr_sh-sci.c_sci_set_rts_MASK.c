
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct uart_port {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_8, bool VAR_9)
{
 if (VAR_8->type == VAR_0 || VAR_8->type == VAR_1) {
  u16 VAR_10 = FUNC_1(VAR_8, VAR_4);


  if (VAR_9)
   VAR_10 &= ~VAR_5;
  else
   VAR_10 |= VAR_5;
  FUNC_2(VAR_8, VAR_4, VAR_10);


  FUNC_2(VAR_8, VAR_2,
    FUNC_1(VAR_8, VAR_2) | VAR_3);
 } else if (FUNC_0(VAR_8, VAR_6)->size) {
  u16 VAR_11 = FUNC_1(VAR_8, VAR_6);


  if (VAR_9)
   VAR_11 &= ~VAR_7;
  else
   VAR_11 |= VAR_7;
  FUNC_2(VAR_8, VAR_6, VAR_11);
 }
}
