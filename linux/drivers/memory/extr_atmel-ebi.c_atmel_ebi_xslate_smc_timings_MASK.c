
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct atmel_smc_timing_xlate {char* name; int (* converter ) (struct atmel_smc_cs_conf*,int ,unsigned int) ;int shift; } ;
struct atmel_smc_cs_conf {int mode; } ;
struct atmel_ebi_dev {TYPE_1__* ebi; } ;
struct TYPE_2__ {int dev; int clk; } ;


 int FUNC_0 (struct atmel_smc_timing_xlate*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct atmel_smc_cs_conf*,int ,unsigned int) ;
 struct atmel_smc_timing_xlate* VAR_4 ;

__attribute__((used)) static int FUNC_7(struct atmel_ebi_dev *VAR_5,
     struct device_node *VAR_6,
     struct atmel_smc_cs_conf *VAR_7)
{
 unsigned int VAR_8 = FUNC_3(VAR_5->ebi->clk);
 unsigned int VAR_9 = VAR_3 / VAR_8;
 bool VAR_10 = 0;
 unsigned int VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_12 = FUNC_5(VAR_6, "atmel,smc-tdf-ns", &VAR_14);
 if (!VAR_12) {
  VAR_10 = 1;
  VAR_11 = FUNC_2(VAR_14, VAR_9);
  if (VAR_11 > VAR_0) {
   VAR_12 = -VAR_2;
   goto out;
  }

  if (VAR_11 < VAR_1)
   VAR_11 = VAR_1;

  VAR_7->mode |= FUNC_1(VAR_11);
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
  const struct atmel_smc_timing_xlate *VAR_15;

  VAR_15 = &VAR_4[VAR_13];

  VAR_12 = FUNC_5(VAR_6, VAR_15->name, &VAR_14);
  if (VAR_12) {
   if (!VAR_10)
    continue;
   else
    break;
  }

  if (!VAR_10) {
   VAR_12 = -VAR_2;
   break;
  }

  VAR_11 = FUNC_2(VAR_14, VAR_9);
  VAR_12 = VAR_15->converter(VAR_7, VAR_15->shift, VAR_11);
  if (VAR_12)
   goto out;
 }

out:
 if (VAR_12) {
  FUNC_4(VAR_5->ebi->dev,
   "missing or invalid timings definition in %pOF",
   VAR_6);
  return VAR_12;
 }

 return VAR_10;
}
