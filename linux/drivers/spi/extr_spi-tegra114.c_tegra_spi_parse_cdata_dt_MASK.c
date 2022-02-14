
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_spi_client_data {int rx_clk_tap_delay; int tx_clk_tap_delay; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct tegra_spi_client_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct tegra_spi_client_data
 *FUNC_3(struct spi_device *VAR_1)
{
 struct tegra_spi_client_data *VAR_2;
 struct device_node *VAR_3;

 VAR_3 = VAR_1->dev.of_node;
 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "device node not found\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(VAR_3, "nvidia,tx-clk-tap-delay",
        &VAR_2->tx_clk_tap_delay);
 FUNC_2(VAR_3, "nvidia,rx-clk-tap-delay",
        &VAR_2->rx_clk_tap_delay);
 return VAR_2;
}
