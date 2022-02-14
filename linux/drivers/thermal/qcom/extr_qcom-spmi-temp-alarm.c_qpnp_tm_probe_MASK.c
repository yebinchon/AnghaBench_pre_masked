
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qpnp_tm_chip {int * tz_dev; scalar_t__ subtype; int base; int * adc; int map; int lock; TYPE_1__* dev; } ;
struct TYPE_7__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,struct qpnp_tm_chip*) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 struct qpnp_tm_chip* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int *,int ,int ,int ,struct qpnp_tm_chip*) ;
 int * FUNC_8 (TYPE_1__*,int ,struct qpnp_tm_chip*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct qpnp_tm_chip*) ;
 int VAR_12 ;
 int FUNC_13 (struct qpnp_tm_chip*,int ,scalar_t__*) ;
 int VAR_13 ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_14)
{
 struct qpnp_tm_chip *VAR_15;
 struct device_node *VAR_16;
 u8 VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20, VAR_21;

 VAR_16 = VAR_14->dev.of_node;

 VAR_15 = FUNC_6(&VAR_14->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_1;

 FUNC_4(&VAR_14->dev, VAR_15);
 VAR_15->dev = &VAR_14->dev;

 FUNC_9(&VAR_15->lock);

 VAR_15->map = FUNC_3(VAR_14->dev.parent, ((void*)0));
 if (!VAR_15->map)
  return -VAR_2;

 VAR_20 = FUNC_10(VAR_16, "reg", &VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_21 = FUNC_11(VAR_14, 0);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_15->adc = FUNC_5(&VAR_14->dev, "thermal");
 if (FUNC_0(VAR_15->adc)) {
  VAR_20 = FUNC_1(VAR_15->adc);
  VAR_15->adc = ((void*)0);
  if (VAR_20 == -VAR_3)
   return VAR_20;
 }

 VAR_15->base = VAR_19;

 VAR_20 = FUNC_13(VAR_15, VAR_7, &VAR_17);
 if (VAR_20 < 0) {
  FUNC_2(&VAR_14->dev, "could not read type\n");
  return VAR_20;
 }

 VAR_20 = FUNC_13(VAR_15, VAR_6, &VAR_18);
 if (VAR_20 < 0) {
  FUNC_2(&VAR_14->dev, "could not read subtype\n");
  return VAR_20;
 }

 if (VAR_17 != VAR_10 || (VAR_18 != VAR_8
         && VAR_18 != VAR_9)) {
  FUNC_2(&VAR_14->dev, "invalid type 0x%02x or subtype 0x%02x\n",
   VAR_17, VAR_18);
  return -VAR_0;
 }

 VAR_15->subtype = VAR_18;






 VAR_15->tz_dev = FUNC_8(
  &VAR_14->dev, 0, VAR_15, &VAR_13);
 if (FUNC_0(VAR_15->tz_dev)) {
  FUNC_2(&VAR_14->dev, "failed to register sensor\n");
  return FUNC_1(VAR_15->tz_dev);
 }

 VAR_20 = FUNC_12(VAR_15);
 if (VAR_20 < 0) {
  FUNC_2(&VAR_14->dev, "init failed\n");
  return VAR_20;
 }

 VAR_20 = FUNC_7(&VAR_14->dev, VAR_21, ((void*)0), VAR_12,
     VAR_5, VAR_16->name, VAR_15);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_14(VAR_15->tz_dev, VAR_11);

 return 0;
}
