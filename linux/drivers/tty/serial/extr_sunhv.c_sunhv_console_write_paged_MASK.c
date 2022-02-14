
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ sysrq; } ;
struct console {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (char const*,unsigned int,unsigned long*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long,unsigned long*) ;
 struct uart_port* VAR_3 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct console *VAR_4, const char *VAR_5, unsigned VAR_6)
{
 struct uart_port *VAR_7 = VAR_3;
 unsigned long VAR_8;
 int VAR_9 = 1;

 if (VAR_7->sysrq || VAR_2)
  VAR_9 = FUNC_3(&VAR_7->lock, VAR_8);
 else
  FUNC_2(&VAR_7->lock, VAR_8);

 while (VAR_6 > 0) {
  unsigned long VAR_10 = FUNC_0(VAR_1);
  unsigned long VAR_11;
  unsigned int VAR_12 = FUNC_1(VAR_5, VAR_6,
             &VAR_11);

  VAR_6 -= VAR_12;
  VAR_5 += VAR_12;
  while (VAR_11 > 0) {
   unsigned long VAR_13;
   int VAR_14 = 1000000;

   while (VAR_14--) {
    unsigned long VAR_15;

    VAR_15 = FUNC_5(VAR_10, VAR_11,
             &VAR_13);
    if (VAR_15 == VAR_0)
     break;
    FUNC_6(1);
   }
   if (VAR_14 < 0)
    break;
   VAR_11 -= VAR_13;
   VAR_10 += VAR_13;
  }
 }

 if (VAR_9)
  FUNC_4(&VAR_7->lock, VAR_8);
}
