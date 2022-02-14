
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sflash_data {int status_reg; int cur_direction; int tx_status; int rx_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_sflash_data*) ;
 int FUNC_1 (struct tegra_sflash_data*) ;
 int FUNC_2 (struct tegra_sflash_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct tegra_sflash_data *VAR_7 = VAR_6;

 VAR_7->status_reg = FUNC_2(VAR_7, VAR_3);
 if (VAR_7->cur_direction & VAR_1)
  VAR_7->tx_status = VAR_7->status_reg & VAR_4;

 if (VAR_7->cur_direction & VAR_0)
  VAR_7->rx_status = VAR_7->status_reg & VAR_2;
 FUNC_1(VAR_7);

 return FUNC_0(VAR_7);
}
