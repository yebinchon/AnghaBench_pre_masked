
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct jz4780_nemc {scalar_t__ base; int dev; TYPE_1__* soc_info; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int tas_tah_cycles_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct jz4780_nemc*,int) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct jz4780_nemc *VAR_13,
           unsigned int VAR_14,
           struct device_node *VAR_15)
{
 uint32_t VAR_16, VAR_17, VAR_18;





 static const u8 VAR_19[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,


  11, 11,


  12, 12, 12,


  13, 13, 13, 13, 13,


  14, 14, 14, 14, 14,


  15, 15, 15, 15, 15, 15
 };

 VAR_16 = FUNC_4(VAR_13->base + FUNC_0(VAR_14));
 VAR_16 &= ~VAR_2;

 if (!FUNC_3(VAR_15, "ingenic,nemc-bus-width", &VAR_17)) {
  VAR_16 &= ~VAR_1;
  switch (VAR_17) {
  case 8:
   VAR_16 |= VAR_0;
   break;
  default:




   FUNC_1(VAR_13->dev, "unsupported bus width: %u\n", VAR_17);
   return 0;
  }
 }

 if (FUNC_3(VAR_15, "ingenic,nemc-tAS", &VAR_17) == 0) {
  VAR_16 &= ~VAR_5;
  VAR_18 = FUNC_2(VAR_13, VAR_17);
  if (VAR_18 > VAR_13->soc_info->tas_tah_cycles_max) {
   FUNC_1(VAR_13->dev, "tAS %u is too high (%u cycles)\n",
    VAR_17, VAR_18);
   return 0;
  }

  VAR_16 |= VAR_18 << VAR_6;
 }

 if (FUNC_3(VAR_15, "ingenic,nemc-tAH", &VAR_17) == 0) {
  VAR_16 &= ~VAR_3;
  VAR_18 = FUNC_2(VAR_13, VAR_17);
  if (VAR_18 > VAR_13->soc_info->tas_tah_cycles_max) {
   FUNC_1(VAR_13->dev, "tAH %u is too high (%u cycles)\n",
    VAR_17, VAR_18);
   return 0;
  }

  VAR_16 |= VAR_18 << VAR_4;
 }

 if (FUNC_3(VAR_15, "ingenic,nemc-tBP", &VAR_17) == 0) {
  VAR_16 &= ~VAR_9;
  VAR_18 = FUNC_2(VAR_13, VAR_17);
  if (VAR_18 > 31) {
   FUNC_1(VAR_13->dev, "tBP %u is too high (%u cycles)\n",
    VAR_17, VAR_18);
   return 0;
  }

  VAR_16 |= VAR_19[VAR_18] << VAR_10;
 }

 if (FUNC_3(VAR_15, "ingenic,nemc-tAW", &VAR_17) == 0) {
  VAR_16 &= ~VAR_7;
  VAR_18 = FUNC_2(VAR_13, VAR_17);
  if (VAR_18 > 31) {
   FUNC_1(VAR_13->dev, "tAW %u is too high (%u cycles)\n",
    VAR_17, VAR_18);
   return 0;
  }

  VAR_16 |= VAR_19[VAR_18] << VAR_8;
 }

 if (FUNC_3(VAR_15, "ingenic,nemc-tSTRV", &VAR_17) == 0) {
  VAR_16 &= ~VAR_11;
  VAR_18 = FUNC_2(VAR_13, VAR_17);
  if (VAR_18 > 63) {
   FUNC_1(VAR_13->dev, "tSTRV %u is too high (%u cycles)\n",
    VAR_17, VAR_18);
   return 0;
  }

  VAR_16 |= VAR_18 << VAR_12;
 }

 FUNC_5(VAR_16, VAR_13->base + FUNC_0(VAR_14));
 return 1;
}
