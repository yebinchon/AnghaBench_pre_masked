
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmpe_variant_info {unsigned int id_mask; unsigned int id_val; int name; } ;
struct stmpe {scalar_t__ irq; int * regs; TYPE_1__* pdata; int dev; struct stmpe_variant_info* variant; } ;
struct TYPE_2__ {unsigned int irq_trigger; int autosleep_timeout; scalar_t__ autosleep; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 int FUNC_3 (struct stmpe*,int) ;
 int FUNC_4 (struct stmpe*,int ,int ,int*) ;
 int FUNC_5 (struct stmpe*,int ) ;
 int FUNC_6 (struct stmpe*,int ,int) ;
 int FUNC_7 (struct stmpe*) ;

__attribute__((used)) static int FUNC_8(struct stmpe *VAR_13)
{
 unsigned int VAR_14 = VAR_13->pdata->irq_trigger;
 int VAR_15 = VAR_13->pdata->autosleep_timeout;
 struct stmpe_variant_info *VAR_16 = VAR_13->variant;
 u8 VAR_17 = 0;
 unsigned int VAR_18;
 u8 VAR_19[2];
 int VAR_20;

 VAR_20 = FUNC_4(VAR_13, VAR_13->regs[VAR_9],
          FUNC_0(VAR_19), VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_18 = (VAR_19[0] << 8) | VAR_19[1];
 if ((VAR_18 & VAR_16->id_mask) != VAR_16->id_val) {
  FUNC_1(VAR_13->dev, "unknown chip id: %#x\n", VAR_18);
  return -VAR_0;
 }

 FUNC_2(VAR_13->dev, "%s detected, chip id: %#x\n", VAR_16->name, VAR_18);


 VAR_20 = FUNC_5(VAR_13, ~0);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_7(VAR_13);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_13->irq >= 0) {
  if (VAR_18 == VAR_5 || VAR_18 == VAR_4)
   VAR_17 = VAR_11;
  else
   VAR_17 = VAR_7;


  if (VAR_18 != VAR_5 && VAR_18 != VAR_4) {
   if (VAR_14 == VAR_1 ||
     VAR_14 == VAR_3)
    VAR_17 |= VAR_6;
  }

  if (VAR_14 == VAR_3 ||
    VAR_14 == VAR_2) {
   if (VAR_18 == VAR_5 || VAR_18 == VAR_4)
    VAR_17 |= VAR_12;
   else
    VAR_17 |= VAR_8;
  }
 }

 if (VAR_13->pdata->autosleep) {
  VAR_20 = FUNC_3(VAR_13, VAR_15);
  if (VAR_20)
   return VAR_20;
 }

 return FUNC_6(VAR_13, VAR_13->regs[VAR_10], VAR_17);
}
