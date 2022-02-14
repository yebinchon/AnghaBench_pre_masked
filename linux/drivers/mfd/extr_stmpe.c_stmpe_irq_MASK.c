
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_variant_info {scalar_t__ id_val; int num_irqs; } ;
struct stmpe {int* regs; int* ier; int domain; struct stmpe_variant_info* variant; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct stmpe*,int,int,int*) ;
 int FUNC_5 (struct stmpe*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct stmpe *VAR_9 = VAR_8;
 struct stmpe_variant_info *VAR_10 = VAR_9->variant;
 int VAR_11 = FUNC_0(VAR_10->num_irqs, 8);
 u8 VAR_12;
 u8 VAR_13[3];
 int VAR_14;
 int VAR_15;

 if (VAR_10->id_val == VAR_4 ||
     VAR_10->id_val == VAR_2) {
  int VAR_16 = FUNC_3(VAR_9->domain, 0);

  FUNC_2(VAR_16);
  return VAR_0;
 }

 if (VAR_10->id_val == VAR_3)
  VAR_12 = VAR_9->regs[VAR_5];
 else
  VAR_12 = VAR_9->regs[VAR_6];

 VAR_14 = FUNC_4(VAR_9, VAR_12, VAR_11, VAR_13);
 if (VAR_14 < 0)
  return VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  int VAR_17 = VAR_11 - VAR_15 - 1;
  u8 VAR_18 = VAR_13[VAR_15];
  u8 VAR_19;

  VAR_18 &= VAR_9->ier[VAR_17];
  if (!VAR_18)
   continue;

  VAR_19 = VAR_18;
  while (VAR_18) {
   int VAR_20 = FUNC_1(VAR_18);
   int VAR_21 = VAR_17 * 8 + VAR_20;
   int VAR_22 = FUNC_3(VAR_9->domain, VAR_21);

   FUNC_2(VAR_22);
   VAR_18 &= ~(1 << VAR_20);
  }

  FUNC_5(VAR_9, VAR_12 + VAR_15, VAR_19);
 }

 return VAR_0;
}
