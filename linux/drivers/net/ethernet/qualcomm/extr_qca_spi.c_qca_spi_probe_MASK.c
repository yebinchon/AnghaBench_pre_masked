
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int of_node; } ;
struct spi_device {scalar_t__ max_speed_hz; TYPE_1__ dev; int mode; } ;
struct qcaspi {struct net_device* net_dev; int legacy_mode; struct spi_device* spi_dev; } ;
struct net_device {scalar_t__ name; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct net_device*,TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int ,...) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 struct qcaspi* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (struct qcaspi*) ;
 int FUNC_14 (struct net_device*) ;
 scalar_t__ VAR_18 ;
 int FUNC_15 (struct qcaspi*,int ,scalar_t__*) ;
 scalar_t__ FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct spi_device*,struct net_device*) ;
 scalar_t__ FUNC_18 (struct spi_device*) ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static int
FUNC_19(struct spi_device *VAR_20)
{
 struct qcaspi *VAR_21 = ((void*)0);
 struct net_device *VAR_22 = ((void*)0);
 u8 VAR_23 = 0;
 u16 VAR_24;
 const char *VAR_25;

 if (!VAR_20->dev.of_node) {
  FUNC_3(&VAR_20->dev, "Missing device tree\n");
  return -VAR_1;
 }

 VAR_23 = FUNC_12(VAR_20->dev.of_node,
         "qca,legacy-mode");

 if (VAR_17 == 0) {
  if (VAR_20->max_speed_hz)
   VAR_17 = VAR_20->max_speed_hz;
  else
   VAR_17 = VAR_5;
 }

 if ((VAR_17 < VAR_7) ||
     (VAR_17 > VAR_6)) {
  FUNC_3(&VAR_20->dev, "Invalid clkspeed: %d\n",
   VAR_17);
  return -VAR_1;
 }

 if ((VAR_16 < VAR_4) ||
     (VAR_16 > VAR_3)) {
  FUNC_3(&VAR_20->dev, "Invalid burst len: %d\n",
   VAR_16);
  return -VAR_1;
 }

 if ((VAR_18 < VAR_11) ||
     (VAR_18 > VAR_10)) {
  FUNC_3(&VAR_20->dev, "Invalid pluggable: %d\n",
   VAR_18);
  return -VAR_1;
 }

 if (VAR_19 < VAR_13 ||
     VAR_19 > VAR_12) {
  FUNC_3(&VAR_20->dev, "Invalid write verify: %d\n",
   VAR_19);
  return -VAR_1;
 }

 FUNC_4(&VAR_20->dev, "ver=%s, clkspeed=%d, burst_len=%d, pluggable=%d\n",
   VAR_8,
   VAR_17,
   VAR_16,
   VAR_18);

 VAR_20->mode = VAR_14;
 VAR_20->max_speed_hz = VAR_17;
 if (FUNC_18(VAR_20) < 0) {
  FUNC_3(&VAR_20->dev, "Unable to setup SPI device\n");
  return -VAR_0;
 }

 VAR_22 = FUNC_2(sizeof(struct qcaspi));
 if (!VAR_22)
  return -VAR_2;

 FUNC_14(VAR_22);
 FUNC_1(VAR_22, &VAR_20->dev);

 VAR_21 = FUNC_9(VAR_22);
 if (!VAR_21) {
  FUNC_7(VAR_22);
  FUNC_3(&VAR_20->dev, "Fail to retrieve private structure\n");
  return -VAR_2;
 }
 VAR_21->net_dev = VAR_22;
 VAR_21->spi_dev = VAR_20;
 VAR_21->legacy_mode = VAR_23;

 FUNC_17(VAR_20, VAR_22);

 VAR_25 = FUNC_11(VAR_20->dev.of_node);

 if (!FUNC_0(VAR_25))
  FUNC_6(VAR_21->net_dev->dev_addr, VAR_25);

 if (!FUNC_8(VAR_21->net_dev->dev_addr)) {
  FUNC_5(VAR_21->net_dev);
  FUNC_4(&VAR_20->dev, "Using random MAC address: %pM\n",
    VAR_21->net_dev->dev_addr);
 }

 FUNC_10(VAR_21->net_dev);

 if (!VAR_18) {
  FUNC_15(VAR_21, VAR_15, &VAR_24);
  FUNC_15(VAR_21, VAR_15, &VAR_24);

  if (VAR_24 != VAR_9) {
   FUNC_3(&VAR_20->dev, "Invalid signature (0x%04X)\n",
    VAR_24);
   FUNC_7(VAR_22);
   return -VAR_0;
  }
 }

 if (FUNC_16(VAR_22)) {
  FUNC_3(&VAR_20->dev, "Unable to register net device %s\n",
   VAR_22->name);
  FUNC_7(VAR_22);
  return -VAR_0;
 }

 FUNC_13(VAR_21);

 return 0;
}
