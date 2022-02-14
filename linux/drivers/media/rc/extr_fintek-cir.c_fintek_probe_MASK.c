
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; int product; int vendor; int bustype; } ;
struct rc_dev {char* input_phys; void* rx_resolution; void* timeout; int map_name; int driver_name; TYPE_2__ dev; TYPE_1__ input_id; int device_name; int close; int open; int allowed_protocols; struct fintek_dev* priv; } ;
struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;
struct fintek_dev {int cir_port_len; int cir_addr; int cir_irq; struct rc_dev* rdev; int chip_minor; int chip_major; struct pnp_dev* pdev; int fintek_lock; int cr_dp; int cr_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int) ;
 int VAR_15 ;
 int FUNC_1 (struct fintek_dev*) ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int VAR_17 ;
 int FUNC_4 (struct fintek_dev*) ;
 int FUNC_5 (struct fintek_dev*) ;
 int VAR_18 ;
 int FUNC_6 (struct fintek_dev*) ;
 int FUNC_7 (struct fintek_dev*) ;
 int FUNC_8 (struct fintek_dev*) ;
 int VAR_19 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,struct fintek_dev*) ;
 int FUNC_11 (struct fintek_dev*) ;
 struct fintek_dev* FUNC_12 (int,int ) ;
 int FUNC_13 (struct pnp_dev*,int ) ;
 int FUNC_14 (struct pnp_dev*,int ) ;
 int FUNC_15 (struct pnp_dev*,int ) ;
 int FUNC_16 (struct pnp_dev*,int ) ;
 int FUNC_17 (struct pnp_dev*,int ) ;
 int FUNC_18 (struct pnp_dev*,struct fintek_dev*) ;
 struct rc_dev* FUNC_19 (int ) ;
 int FUNC_20 (struct rc_dev*) ;
 int FUNC_21 (struct rc_dev*) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (int ,int ,int ,int ,void*) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct pnp_dev *VAR_20, const struct pnp_device_id *VAR_21)
{
 struct fintek_dev *VAR_22;
 struct rc_dev *VAR_23;
 int VAR_24 = -VAR_6;

 VAR_22 = FUNC_12(sizeof(struct fintek_dev), VAR_9);
 if (!VAR_22)
  return VAR_24;


 VAR_23 = FUNC_19(VAR_12);
 if (!VAR_23)
  goto exit_free_dev_rdev;

 VAR_24 = -VAR_5;

 if (!FUNC_17(VAR_20, 0)) {
  FUNC_2(&VAR_20->dev, "IR PNP Port not valid!\n");
  goto exit_free_dev_rdev;
 }

 if (!FUNC_14(VAR_20, 0)) {
  FUNC_2(&VAR_20->dev, "IR PNP IRQ not valid!\n");
  goto exit_free_dev_rdev;
 }

 VAR_22->cir_addr = FUNC_16(VAR_20, 0);
 VAR_22->cir_irq = FUNC_13(VAR_20, 0);
 VAR_22->cir_port_len = FUNC_15(VAR_20, 0);

 VAR_22->cr_ip = VAR_3;
 VAR_22->cr_dp = VAR_2;

 FUNC_25(&VAR_22->fintek_lock);

 FUNC_18(VAR_20, VAR_22);
 VAR_22->pdev = VAR_20;

 VAR_24 = FUNC_8(VAR_22);
 if (VAR_24)
  goto exit_free_dev_rdev;


 FUNC_7(VAR_22);
 FUNC_4(VAR_22);
 FUNC_6(VAR_22);


 FUNC_5(VAR_22);


 VAR_23->priv = VAR_22;
 VAR_23->allowed_protocols = VAR_14;
 VAR_23->open = VAR_19;
 VAR_23->close = VAR_18;
 VAR_23->device_name = VAR_7;
 VAR_23->input_phys = "fintek/cir0";
 VAR_23->input_id.bustype = VAR_0;
 VAR_23->input_id.vendor = VAR_15;
 VAR_23->input_id.product = VAR_22->chip_major;
 VAR_23->input_id.version = VAR_22->chip_minor;
 VAR_23->dev.parent = &VAR_20->dev;
 VAR_23->driver_name = VAR_8;
 VAR_23->map_name = VAR_13;
 VAR_23->timeout = FUNC_0(1000);

 VAR_23->rx_resolution = FUNC_0(VAR_1);

 VAR_22->rdev = VAR_23;

 VAR_24 = -VAR_4;

 if (!FUNC_24(VAR_22->cir_addr,
       VAR_22->cir_port_len, VAR_8))
  goto exit_free_dev_rdev;

 if (FUNC_23(VAR_22->cir_irq, VAR_17, VAR_10,
   VAR_8, (void *)VAR_22))
  goto exit_free_cir_addr;

 VAR_24 = FUNC_21(VAR_23);
 if (VAR_24)
  goto exit_free_irq;

 FUNC_3(&VAR_20->dev, 1);

 FUNC_9(VAR_11, "driver has been successfully loaded\n");
 if (VAR_16)
  FUNC_1(VAR_22);

 return 0;

exit_free_irq:
 FUNC_10(VAR_22->cir_irq, VAR_22);
exit_free_cir_addr:
 FUNC_22(VAR_22->cir_addr, VAR_22->cir_port_len);
exit_free_dev_rdev:
 FUNC_20(VAR_23);
 FUNC_11(VAR_22);

 return VAR_24;
}
