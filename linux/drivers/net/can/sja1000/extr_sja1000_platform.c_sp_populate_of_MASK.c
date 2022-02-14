
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int freq; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;
struct sja1000_priv {int ocr; int cdr; TYPE_2__ can; int write_reg; int read_reg; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_2(struct sja1000_priv *VAR_15, struct device_node *VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 VAR_17 = FUNC_1(VAR_16, "reg-io-width", &VAR_18);
 if (VAR_17)
  VAR_18 = 1;

 switch (VAR_18) {
 case 4:
  VAR_15->read_reg = VAR_10;
  VAR_15->write_reg = VAR_13;
  break;
 case 2:
  VAR_15->read_reg = VAR_9;
  VAR_15->write_reg = VAR_12;
  break;
 case 1:
 default:
  VAR_15->read_reg = VAR_11;
  VAR_15->write_reg = VAR_14;
 }

 VAR_17 = FUNC_1(VAR_16, "nxp,external-clock-frequency", &VAR_18);
 if (!VAR_17)
  VAR_15->can.clock.freq = VAR_18 / 2;
 else
  VAR_15->can.clock.freq = VAR_8;

 VAR_17 = FUNC_1(VAR_16, "nxp,tx-output-mode", &VAR_18);
 if (!VAR_17)
  VAR_15->ocr |= VAR_18 & VAR_3;
 else
  VAR_15->ocr |= VAR_4;

 VAR_17 = FUNC_1(VAR_16, "nxp,tx-output-config", &VAR_18);
 if (!VAR_17)
  VAR_15->ocr |= (VAR_18 << VAR_7) & VAR_6;
 else
  VAR_15->ocr |= VAR_5;

 VAR_17 = FUNC_1(VAR_16, "nxp,clock-out-frequency", &VAR_18);
 if (!VAR_17 && VAR_18) {
  u32 VAR_19 = VAR_15->can.clock.freq * 2 / VAR_18;

  if (VAR_19 > 1)
   VAR_15->cdr |= VAR_19 / 2 - 1;
  else
   VAR_15->cdr |= VAR_1;
 } else {
  VAR_15->cdr |= VAR_2;
 }

 if (!FUNC_0(VAR_16, "nxp,no-comparator-bypass"))
  VAR_15->cdr |= VAR_0;
}
