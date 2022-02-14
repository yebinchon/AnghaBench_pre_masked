
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_9__ {char* name; int irq_set_wake; int * irq_set_type; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_7__ {int twl_irq; int irq_domain; TYPE_3__ pm_nb; scalar_t__ irq_mapping_tbl; int wakeirqs; TYPE_5__ irq_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device*,int,int ) ;
 TYPE_5__ VAR_9 ;
 int FUNC_4 (struct device_node*,int,int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 struct of_device_id* FUNC_6 (int ,struct device*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int,int *,int ,int ,char*,TYPE_1__*) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ,int*,int ,int) ;

int FUNC_10(struct device *VAR_16, int VAR_17)
{
 struct device_node *VAR_18 = VAR_16->of_node;
 int VAR_19;
 int VAR_20;
 u8 VAR_21[3];
 const struct of_device_id *VAR_22;

 VAR_22 = FUNC_6(VAR_15, VAR_16);
 if (!VAR_22 || !VAR_22->data) {
  FUNC_1(VAR_16, "Unknown TWL device model\n");
  return -VAR_0;
 }

 VAR_19 = VAR_7;

 VAR_10 = FUNC_3(VAR_16, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_21[0] = 0xFF;
 VAR_21[1] = 0xFF;
 VAR_21[2] = 0xFF;


 VAR_20 = FUNC_9(VAR_8, &VAR_21[0], VAR_4, 3);

 VAR_20 |= FUNC_9(VAR_8, &VAR_21[0], VAR_5, 3);

 VAR_20 |= FUNC_9(VAR_8, &VAR_21[0], VAR_6, 3);

 if (VAR_20 < 0) {
  FUNC_1(VAR_16, "I2C err writing TWL_MODULE_PIH: %d\n", VAR_20);
  return VAR_20;
 }





 VAR_10->irq_chip = VAR_9;
 VAR_10->irq_chip.name = "twl6030";
 VAR_10->irq_chip.irq_set_type = ((void*)0);
 VAR_10->irq_chip.irq_set_wake = VAR_13;

 VAR_10->pm_nb.notifier_call = VAR_12;
 FUNC_0(&VAR_10->wakeirqs, 0);
 VAR_10->irq_mapping_tbl = VAR_22->data;

 VAR_10->irq_domain =
  FUNC_4(VAR_18, VAR_19,
          &VAR_11, VAR_10);
 if (!VAR_10->irq_domain) {
  FUNC_1(VAR_16, "Can't add irq_domain\n");
  return -VAR_1;
 }

 FUNC_2(VAR_16, "PIH (irq %d) nested IRQs\n", VAR_17);


 VAR_20 = FUNC_8(VAR_17, ((void*)0), VAR_14,
          VAR_3, "TWL6030-PIH", VAR_10);
 if (VAR_20 < 0) {
  FUNC_1(VAR_16, "could not claim irq %d: %d\n", VAR_17, VAR_20);
  goto fail_irq;
 }

 VAR_10->twl_irq = VAR_17;
 FUNC_7(&VAR_10->pm_nb);
 return 0;

fail_irq:
 FUNC_5(VAR_10->irq_domain);
 return VAR_20;
}
