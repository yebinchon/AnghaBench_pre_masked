
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcn36xx {int is_pronto; void* ccu_base; int rf_id; void* dxe_base; void* tx_rings_empty_state; int tx_rings_empty_state_bit; void* tx_enable_state; int tx_enable_state_bit; int rx_irq; int tx_irq; } ;
struct resource {int start; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 struct device_node* FUNC_4 (struct device_node*,char*) ;
 void* FUNC_5 (struct device_node*,int) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct device_node*,char*,char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,char*) ;
 void* FUNC_10 (TYPE_2__*,char*,int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct wcn36xx *VAR_5,
       struct platform_device *VAR_6)
{
 struct device_node *VAR_7;
 struct device_node *VAR_8;
 struct resource *VAR_9;
 int VAR_10;
 int VAR_11;


 VAR_9 = FUNC_9(VAR_6, VAR_3, "tx");
 if (!VAR_9) {
  FUNC_11("failed to get tx_irq\n");
  return -VAR_1;
 }
 VAR_5->tx_irq = VAR_9->start;


 VAR_9 = FUNC_9(VAR_6, VAR_3, "rx");
 if (!VAR_9) {
  FUNC_11("failed to get rx_irq\n");
  return -VAR_1;
 }
 VAR_5->rx_irq = VAR_9->start;


 VAR_5->tx_enable_state = FUNC_10(&VAR_6->dev,
   "tx-enable", &VAR_5->tx_enable_state_bit);
 if (FUNC_0(VAR_5->tx_enable_state)) {
  FUNC_11("failed to get tx-enable state\n");
  return FUNC_1(VAR_5->tx_enable_state);
 }


 VAR_5->tx_rings_empty_state = FUNC_10(&VAR_6->dev,
   "tx-rings-empty", &VAR_5->tx_rings_empty_state_bit);
 if (FUNC_0(VAR_5->tx_rings_empty_state)) {
  FUNC_11("failed to get tx-rings-empty state\n");
  return FUNC_1(VAR_5->tx_rings_empty_state);
 }

 VAR_7 = FUNC_7(VAR_6->dev.parent->of_node, "qcom,mmio", 0);
 if (!VAR_7) {
  FUNC_11("failed to acquire qcom,mmio reference\n");
  return -VAR_0;
 }

 VAR_5->is_pronto = !!FUNC_3(VAR_7, "qcom,pronto");


 VAR_10 = FUNC_8(VAR_7, "reg-names", "ccu");
 VAR_5->ccu_base = FUNC_5(VAR_7, VAR_10);
 if (!VAR_5->ccu_base) {
  FUNC_11("failed to map ccu memory\n");
  VAR_11 = -VAR_2;
  goto put_mmio_node;
 }


 VAR_10 = FUNC_8(VAR_7, "reg-names", "dxe");
 VAR_5->dxe_base = FUNC_5(VAR_7, VAR_10);
 if (!VAR_5->dxe_base) {
  FUNC_11("failed to map dxe memory\n");
  VAR_11 = -VAR_2;
  goto unmap_ccu;
 }


 VAR_8 = FUNC_4(VAR_7, "iris");
 if (VAR_8) {
  if (FUNC_3(VAR_8, "qcom,wcn3620"))
   VAR_5->rf_id = VAR_4;
  FUNC_6(VAR_8);
 }

 FUNC_6(VAR_7);
 return 0;

unmap_ccu:
 FUNC_2(VAR_5->ccu_base);
put_mmio_node:
 FUNC_6(VAR_7);
 return VAR_11;
}
