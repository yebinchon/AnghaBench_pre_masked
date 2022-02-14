
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_3__ {int rx; } ;
struct TYPE_4__ {unsigned long ignore_status_mask; TYPE_1__ icount; } ;
struct tegra_uart_port {TYPE_2__ uport; } ;


 char VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 char FUNC_0 (struct tegra_uart_port*,unsigned long) ;
 unsigned long FUNC_1 (struct tegra_uart_port*,int ) ;
 int FUNC_2 (struct tty_port*,unsigned char,char) ;
 int FUNC_3 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct tegra_uart_port *VAR_4,
  struct tty_port *VAR_5)
{
 do {
  char VAR_6 = VAR_0;
  unsigned long VAR_7 = 0;
  unsigned char VAR_8;

  VAR_7 = FUNC_1(VAR_4, VAR_1);
  if (!(VAR_7 & VAR_2))
   break;

  VAR_6 = FUNC_0(VAR_4, VAR_7);
  if (VAR_6 != VAR_0)
   continue;

  VAR_8 = (unsigned char) FUNC_1(VAR_4, VAR_3);
  VAR_4->uport.icount.rx++;

  if (!FUNC_3(&VAR_4->uport, VAR_8) && VAR_5)
   FUNC_2(VAR_5, VAR_8, VAR_6);

  if (VAR_4->uport.ignore_status_mask & VAR_2)
   continue;
 } while (1);
}
