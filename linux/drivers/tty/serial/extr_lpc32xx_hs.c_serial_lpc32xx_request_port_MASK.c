
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ iotype; int flags; scalar_t__ mapbase; int membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_7)
{
 int VAR_8 = -VAR_1;

 if ((VAR_7->iotype == VAR_6) && (VAR_7->mapbase)) {
  VAR_8 = 0;

  if (!FUNC_2(VAR_7->mapbase, VAR_4, VAR_3))
   VAR_8 = -VAR_0;
  else if (VAR_7->flags & VAR_5) {
   VAR_7->membase = FUNC_0(VAR_7->mapbase, VAR_4);
   if (!VAR_7->membase) {
    FUNC_1(VAR_7->mapbase, VAR_4);
    VAR_8 = -VAR_2;
   }
  }
 }

 return VAR_8;
}
