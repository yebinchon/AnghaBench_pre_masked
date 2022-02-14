
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_nor_hwcaps {int mask; } ;
struct TYPE_4__ {int mtd; int write_reg; int read_reg; int erase; int write; int read; struct nxp_spifi* priv; int dev; } ;
struct nxp_spifi {int dev; TYPE_1__ nor; scalar_t__ io_base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;


 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct nxp_spifi*) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (TYPE_1__*,int *,struct spi_nor_hwcaps*) ;
 int FUNC_9 (TYPE_1__*,struct device_node*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct nxp_spifi *VAR_19,
     struct device_node *VAR_20)
{
 struct spi_nor_hwcaps VAR_21 = {
  .mask = VAR_2 |
   VAR_5 |
   VAR_1,
 };
 u32 VAR_22, VAR_23;
 u16 VAR_24 = 0;
 int VAR_25;

 if (!FUNC_7(VAR_20, "spi-rx-bus-width", &VAR_23)) {
  switch (VAR_23) {
  case 1:
   break;
  case 2:
   VAR_24 |= VAR_12;
   break;
  case 4:
   VAR_24 |= VAR_13;
   break;
  default:
   FUNC_2(VAR_19->dev, "unsupported rx-bus-width\n");
   return -VAR_0;
  }
 }

 if (FUNC_6(VAR_20, "spi-cpha", ((void*)0)))
  VAR_24 |= VAR_10;

 if (FUNC_6(VAR_20, "spi-cpol", ((void*)0)))
  VAR_24 |= VAR_11;


 VAR_22 = FUNC_1(1000) |
        FUNC_0(15) |
        VAR_8;

 if (VAR_24 & VAR_12) {
  VAR_22 |= VAR_7;
  VAR_21.mask |= VAR_3;
 } else if (VAR_24 & VAR_13) {
  VAR_22 &= ~VAR_7;
  VAR_21.mask |= VAR_4;
 } else {
  VAR_22 |= VAR_7;
 }

 switch (VAR_24 & (VAR_10 | VAR_11)) {
 case 129:
  VAR_22 &= ~VAR_9;
  break;
 case 128:
  VAR_22 |= VAR_9;
  break;
 default:
  FUNC_2(VAR_19->dev, "only mode 0 and 3 supported\n");
  return -VAR_0;
 }

 FUNC_10(VAR_22, VAR_19->io_base + VAR_6);

 VAR_19->nor.dev = VAR_19->dev;
 FUNC_9(&VAR_19->nor, VAR_20);
 VAR_19->nor.priv = VAR_19;
 VAR_19->nor.read = VAR_15;
 VAR_19->nor.write = VAR_17;
 VAR_19->nor.erase = VAR_14;
 VAR_19->nor.read_reg = VAR_16;
 VAR_19->nor.write_reg = VAR_18;
 FUNC_4(&VAR_19->nor);

 VAR_25 = FUNC_8(&VAR_19->nor, ((void*)0), &VAR_21);
 if (VAR_25) {
  FUNC_2(VAR_19->dev, "device scan failed\n");
  return VAR_25;
 }

 VAR_25 = FUNC_5(VAR_19);
 if (VAR_25) {
  FUNC_2(VAR_19->dev, "memory command setup failed\n");
  return VAR_25;
 }

 VAR_25 = FUNC_3(&VAR_19->nor.mtd, ((void*)0), 0);
 if (VAR_25) {
  FUNC_2(VAR_19->dev, "mtd device parse failed\n");
  return VAR_25;
 }

 return 0;
}
