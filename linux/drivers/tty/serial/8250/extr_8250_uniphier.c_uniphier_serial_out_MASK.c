
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier8250_priv {int atomic_write_lock; } ;
struct uart_port {scalar_t__ membase; struct uniphier8250_priv* private_data; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4, int VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0;
 bool VAR_8 = 0;

 switch (VAR_5) {
 case 128:

  VAR_7 = 8;

 case 131:
  VAR_5 = VAR_1;
  break;
 case 130:
  VAR_7 = 8;

  VAR_6 &= ~VAR_0;

 case 129:
  VAR_5 = VAR_2;
  break;
 default:
  VAR_5 <<= VAR_3;
  VAR_8 = 1;
  break;
 }

 if (VAR_8) {
  FUNC_3(VAR_6, VAR_4->membase + VAR_5);
 } else {





  struct uniphier8250_priv *VAR_9 = VAR_4->private_data;
  unsigned long VAR_10;
  u32 VAR_11;

  FUNC_1(&VAR_9->atomic_write_lock, VAR_10);
  VAR_11 = FUNC_0(VAR_4->membase + VAR_5);
  VAR_11 &= ~(0xff << VAR_7);
  VAR_11 |= VAR_6 << VAR_7;
  FUNC_3(VAR_11, VAR_4->membase + VAR_5);
  FUNC_2(&VAR_9->atomic_write_lock, VAR_10);
 }
}
