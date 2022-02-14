
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int line; } ;
struct tegra_uart_port {int use_rx_pio; int use_tx_pio; int n_adjustable_baud_rates; TYPE_2__* baud_tolerance; int enable_modem_interrupt; TYPE_1__ uport; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_7__ {scalar_t__ tolerance; void* upper_range_baud; void* lower_range_baud; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,char*) ;
 int FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*,char*,int,void**) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2,
 struct tegra_uart_port *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 u32 VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_5 = FUNC_3(VAR_4, "serial");
 if (VAR_5 < 0) {
  FUNC_0(&VAR_2->dev, "failed to get alias id, errno %d\n", VAR_5);
  return VAR_5;
 }
 VAR_3->uport.line = VAR_5;

 VAR_3->enable_modem_interrupt = FUNC_6(VAR_4,
     "nvidia,enable-modem-interrupt");

 VAR_7 = FUNC_5(VAR_4, "dma-names", "rx");
 if (VAR_7 < 0) {
  VAR_3->use_rx_pio = 1;
  FUNC_1(&VAR_2->dev, "RX in PIO mode\n");
 }
 VAR_7 = FUNC_5(VAR_4, "dma-names", "tx");
 if (VAR_7 < 0) {
  VAR_3->use_tx_pio = 1;
  FUNC_1(&VAR_2->dev, "TX in PIO mode\n");
 }

 VAR_10 = FUNC_4(VAR_4, "nvidia,adjust-baud-rates");
 if (VAR_10 > 0) {
  VAR_3->n_adjustable_baud_rates = VAR_10 / 3;
  VAR_3->baud_tolerance =
  FUNC_2(&VAR_2->dev, (VAR_3->n_adjustable_baud_rates) *
        sizeof(*VAR_3->baud_tolerance), VAR_1);
  if (!VAR_3->baud_tolerance)
   return -VAR_0;
  for (VAR_9 = 0, VAR_7 = 0; VAR_9 < VAR_10; VAR_9 += 3,
       VAR_7++) {
   VAR_6 =
   FUNC_7(VAR_4,
         "nvidia,adjust-baud-rates",
         VAR_9, &VAR_8);
   if (!VAR_6)
    VAR_3->baud_tolerance[VAR_7].lower_range_baud =
    VAR_8;
   VAR_6 =
   FUNC_7(VAR_4,
         "nvidia,adjust-baud-rates",
         VAR_9 + 1, &VAR_8);
   if (!VAR_6)
    VAR_3->baud_tolerance[VAR_7].upper_range_baud =
    VAR_8;
   VAR_6 =
   FUNC_7(VAR_4,
         "nvidia,adjust-baud-rates",
         VAR_9 + 2, &VAR_8);
   if (!VAR_6)
    VAR_3->baud_tolerance[VAR_7].tolerance =
    (s32)VAR_8;
  }
 } else {
  VAR_3->n_adjustable_baud_rates = 0;
 }

 return 0;
}
