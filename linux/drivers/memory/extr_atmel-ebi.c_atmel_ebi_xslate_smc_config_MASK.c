
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct atmel_smc_cs_conf {int mode; } ;
struct atmel_ebi_dev_config {struct atmel_smc_cs_conf smcconf; } ;
struct atmel_ebi_dev {TYPE_1__* ebi; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (struct atmel_ebi_dev*,struct device_node*,struct atmel_smc_cs_conf*) ;
 int FUNC_1 (int ,char*,struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,char const**) ;
 int FUNC_4 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct atmel_ebi_dev *VAR_15,
           struct device_node *VAR_16,
           struct atmel_ebi_dev_config *VAR_17)
{
 struct atmel_smc_cs_conf *VAR_18 = &VAR_17->smcconf;
 bool VAR_19 = 0;
 const char *VAR_20;
 u32 VAR_21;
 int VAR_22;

 VAR_22 = FUNC_4(VAR_16, "atmel,smc-bus-width", &VAR_21);
 if (!VAR_22) {
  switch (VAR_21) {
  case 8:
   VAR_18->mode |= VAR_3;
   break;

  case 16:
   VAR_18->mode |= VAR_1;
   break;

  case 32:
   VAR_18->mode |= VAR_2;
   break;

  default:
   return -VAR_14;
  }

  VAR_19 = 1;
 }

 if (FUNC_2(VAR_16, "atmel,smc-tdf-optimized")) {
  VAR_18->mode |= VAR_12;
  VAR_19 = 1;
 }

 VAR_20 = ((void*)0);
 FUNC_3(VAR_16, "atmel,smc-byte-access-type", &VAR_20);
 if (VAR_20 && !FUNC_5(VAR_20, "write")) {
  VAR_18->mode |= VAR_0;
  VAR_19 = 1;
 }

 VAR_20 = ((void*)0);
 FUNC_3(VAR_16, "atmel,smc-read-mode", &VAR_20);
 if (VAR_20 && !FUNC_5(VAR_20, "nrd")) {
  VAR_18->mode |= VAR_11;
  VAR_19 = 1;
 }

 VAR_20 = ((void*)0);
 FUNC_3(VAR_16, "atmel,smc-write-mode", &VAR_20);
 if (VAR_20 && !FUNC_5(VAR_20, "nwe")) {
  VAR_18->mode |= VAR_13;
  VAR_19 = 1;
 }

 VAR_20 = ((void*)0);
 FUNC_3(VAR_16, "atmel,smc-exnw-mode", &VAR_20);
 if (VAR_20) {
  if (!FUNC_5(VAR_20, "frozen"))
   VAR_18->mode |= VAR_4;
  else if (!FUNC_5(VAR_20, "ready"))
   VAR_18->mode |= VAR_5;
  else if (FUNC_5(VAR_20, "disabled"))
   return -VAR_14;

  VAR_19 = 1;
 }

 VAR_22 = FUNC_4(VAR_16, "atmel,smc-page-mode", &VAR_21);
 if (!VAR_22) {
  switch (VAR_21) {
  case 4:
   VAR_18->mode |= VAR_9;
   break;

  case 8:
   VAR_18->mode |= VAR_10;
   break;

  case 16:
   VAR_18->mode |= VAR_7;
   break;

  case 32:
   VAR_18->mode |= VAR_8;
   break;

  default:
   return -VAR_14;
  }

  VAR_18->mode |= VAR_6;
  VAR_19 = 1;
 }

 VAR_22 = FUNC_0(VAR_15, VAR_16, &VAR_17->smcconf);
 if (VAR_22 < 0)
  return -VAR_14;

 if ((VAR_22 > 0 && !VAR_19) || (!VAR_22 && VAR_19)) {
  FUNC_1(VAR_15->ebi->dev, "missing atmel,smc- properties in %pOF",
   VAR_16);
  return -VAR_14;
 }

 return VAR_19;
}
