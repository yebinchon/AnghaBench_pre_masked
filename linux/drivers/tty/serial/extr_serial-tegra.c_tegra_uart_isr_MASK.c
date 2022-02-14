
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct tegra_uart_port {unsigned long ier_shadow; int use_rx_pio; scalar_t__ rx_in_progress; struct uart_port uport; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tegra_uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tegra_uart_port*,unsigned long) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tegra_uart_port*) ;
 int FUNC_6 (struct tegra_uart_port*) ;
 unsigned long FUNC_7 (struct tegra_uart_port*,int ) ;
 int FUNC_8 (struct tegra_uart_port*,unsigned long,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct tegra_uart_port *VAR_12 = VAR_11;
 struct uart_port *VAR_13 = &VAR_12->uport;
 unsigned long VAR_14;
 unsigned long VAR_15;
 bool VAR_16 = 0;
 unsigned long VAR_17;

 FUNC_1(&VAR_13->lock, VAR_17);
 while (1) {
  VAR_14 = FUNC_7(VAR_12, VAR_7);
  if (VAR_14 & VAR_8) {
   if (!VAR_12->use_rx_pio && VAR_16) {
    FUNC_5(VAR_12);
    if (VAR_12->rx_in_progress) {
     VAR_15 = VAR_12->ier_shadow;
     VAR_15 |= (VAR_4 | VAR_5 |
      VAR_1);
     VAR_12->ier_shadow = VAR_15;
     FUNC_8(VAR_12, VAR_15, VAR_2);
    }
   }
   FUNC_2(&VAR_13->lock, VAR_17);
   return VAR_0;
  }

  switch ((VAR_14 >> 1) & 0x7) {
  case 0:
   FUNC_4(VAR_13);
   break;

  case 1:
   VAR_12->ier_shadow &= ~VAR_6;
   FUNC_8(VAR_12, VAR_12->ier_shadow, VAR_2);
   FUNC_6(VAR_12);
   break;

  case 4:
  case 6:
  case 2:
   if (!VAR_12->use_rx_pio && !VAR_16) {
    VAR_16 = 1;

    VAR_15 = VAR_12->ier_shadow;
    VAR_15 |= VAR_3;
    FUNC_8(VAR_12, VAR_15, VAR_2);
    VAR_15 &= ~(VAR_3 | VAR_4 |
     VAR_5 | VAR_1);
    VAR_12->ier_shadow = VAR_15;
    FUNC_8(VAR_12, VAR_15, VAR_2);
   } else {
    FUNC_0(VAR_12);
   }
   break;

  case 3:
   FUNC_3(VAR_12,
     FUNC_7(VAR_12, VAR_9));
   break;

  case 5:
  case 7:
   break;
  }
 }
}
