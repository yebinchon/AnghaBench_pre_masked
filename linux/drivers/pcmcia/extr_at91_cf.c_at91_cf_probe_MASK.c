
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_13__ {struct at91_cf_data* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_10__ {TYPE_4__* parent; } ;
struct TYPE_12__ {int io_offset; int features; TYPE_2__* io; int map_size; int * resource_ops; int * ops; TYPE_1__ dev; int owner; scalar_t__ pci_irq; } ;
struct at91_cf_socket {TYPE_3__ socket; scalar_t__ phys_baseaddr; struct platform_device* pdev; struct at91_cf_data* board; } ;
struct at91_cf_data {int irq_pin; int det_pin; int vcc_pin; int rst_pin; } ;
struct TYPE_11__ {struct resource* res; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct platform_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_4__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 struct at91_cf_socket* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ,int ,char*,struct at91_cf_socket*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct at91_cf_socket*) ;
 int FUNC_13 (struct resource*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct at91_cf_socket *VAR_17;
 struct at91_cf_data *VAR_18 = VAR_16->dev.platform_data;
 struct resource *VAR_19;
 int VAR_20;

 if (!VAR_18) {
  VAR_20 = FUNC_0(VAR_16);
  if (VAR_20)
   return VAR_20;

  VAR_18 = VAR_16->dev.platform_data;
 }

 if (!FUNC_7(VAR_18->det_pin) || !FUNC_7(VAR_18->rst_pin))
  return -VAR_1;

 VAR_19 = FUNC_11(VAR_16, VAR_5, 0);
 if (!VAR_19)
  return -VAR_1;

 VAR_17 = FUNC_4(&VAR_16->dev, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->board = VAR_18;
 VAR_17->pdev = VAR_16;
 VAR_17->phys_baseaddr = VAR_19->start;
 FUNC_12(VAR_16, VAR_17);


 VAR_20 = FUNC_3(&VAR_16->dev, VAR_18->det_pin, "cf_det");
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_5(&VAR_16->dev, FUNC_8(VAR_18->det_pin),
     VAR_12, 0, "at91_cf detect", VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_2(&VAR_16->dev, 1);

 VAR_20 = FUNC_3(&VAR_16->dev, VAR_18->rst_pin, "cf_rst");
 if (VAR_20 < 0)
  goto fail0a;

 if (FUNC_7(VAR_18->vcc_pin)) {
  VAR_20 = FUNC_3(&VAR_16->dev, VAR_18->vcc_pin, "cf_vcc");
  if (VAR_20 < 0)
   goto fail0a;
 }







 if (FUNC_7(VAR_18->irq_pin)) {
  VAR_20 = FUNC_3(&VAR_16->dev, VAR_18->irq_pin, "cf_irq");
  if (VAR_20 < 0)
   goto fail0a;

  VAR_20 = FUNC_5(&VAR_16->dev, FUNC_8(VAR_18->irq_pin),
     VAR_12, VAR_6, "at91_cf", VAR_17);
  if (VAR_20 < 0)
   goto fail0a;
  VAR_17->socket.pci_irq = FUNC_8(VAR_18->irq_pin);
 } else
  VAR_17->socket.pci_irq = VAR_14 + 1;





 VAR_17->socket.io_offset = 0x10000;
 VAR_20 = FUNC_9(0x10000, VAR_17->phys_baseaddr + VAR_0);
 if (VAR_20)
  goto fail0a;


 if (!FUNC_6(&VAR_16->dev, VAR_19->start, FUNC_13(VAR_19), "at91_cf")) {
  VAR_20 = -VAR_3;
  goto fail0a;
 }

 FUNC_1(&VAR_16->dev, "irqs det #%d, io #%d\n",
  FUNC_8(VAR_18->det_pin), FUNC_8(VAR_18->irq_pin));

 VAR_17->socket.owner = VAR_11;
 VAR_17->socket.dev.parent = &VAR_16->dev;
 VAR_17->socket.ops = &VAR_13;
 VAR_17->socket.resource_ops = &VAR_15;
 VAR_17->socket.features = VAR_8 | VAR_9
    | VAR_7;
 VAR_17->socket.map_size = VAR_10;
 VAR_17->socket.io[0].res = VAR_19;

 VAR_20 = FUNC_10(&VAR_17->socket);
 if (VAR_20 < 0)
  goto fail0a;

 return 0;

fail0a:
 FUNC_2(&VAR_16->dev, 0);
 return VAR_20;
}
