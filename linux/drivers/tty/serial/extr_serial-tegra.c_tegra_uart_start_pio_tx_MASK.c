
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_uart_port {unsigned int tx_bytes; int ier_shadow; int tx_in_progress; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_uart_port *VAR_4,
  unsigned int VAR_5)
{
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_4->tx_in_progress = VAR_1;
 VAR_4->tx_bytes = VAR_5;
 VAR_4->ier_shadow |= VAR_3;
 FUNC_0(VAR_4, VAR_4->ier_shadow, VAR_2);
}
