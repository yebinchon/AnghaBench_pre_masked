
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {int status_reg; int cur_direction; int tx_status; int rx_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tegra_spi_data*) ;
 int FUNC_1 (struct tegra_spi_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_8, void *VAR_9)
{
 struct tegra_spi_data *VAR_10 = VAR_9;

 VAR_10->status_reg = FUNC_1(VAR_10, VAR_3);
 if (VAR_10->cur_direction & VAR_1)
  VAR_10->tx_status = VAR_10->status_reg &
     (VAR_7 | VAR_6);

 if (VAR_10->cur_direction & VAR_0)
  VAR_10->rx_status = VAR_10->status_reg &
     (VAR_4 | VAR_5);
 FUNC_0(VAR_10);

 return VAR_2;
}
