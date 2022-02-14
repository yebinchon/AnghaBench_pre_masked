
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {int irq_base; scalar_t__ irq_name; int irq_lock; int imr; struct sih const* sih; } ;
struct sih {int module; int bits; int name; scalar_t__ set_cor; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int ,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int,struct sih_agent*) ;
 int FUNC_5 (int,struct sih_agent*) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int ,char*,int ) ;
 struct sih_agent* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (int,int *,int ,int,int ,int *) ;
 struct sih* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_11(struct device *VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;
 const struct sih *VAR_15 = ((void*)0);
 struct sih_agent *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = -VAR_0;


 for (VAR_14 = 0, VAR_15 = VAR_8; VAR_14 < VAR_7;
   VAR_14++, VAR_15++) {
  if (VAR_15->module == VAR_12 && VAR_15->set_cor) {
   VAR_19 = 0;
   break;
  }
 }

 if (VAR_19 < 0) {
  FUNC_1(VAR_11, "module to setup SIH for not found\n");
  return VAR_19;
 }

 VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->irq_base = VAR_13;
 VAR_16->sih = VAR_15;
 VAR_16->imr = ~0;
 FUNC_9(&VAR_16->irq_lock);

 for (VAR_17 = 0; VAR_17 < VAR_15->bits; VAR_17++) {
  VAR_18 = VAR_13 + VAR_17;

  FUNC_4(VAR_18, VAR_16);
  FUNC_3(VAR_18, &VAR_10,
      VAR_5);
  FUNC_6(VAR_18, 1);
  FUNC_0(VAR_18);
 }


 VAR_18 = VAR_14 + VAR_9;
 FUNC_5(VAR_18, VAR_16);
 VAR_16->irq_name = FUNC_7(VAR_2, "twl4030_%s", VAR_15->name);
 VAR_19 = FUNC_10(VAR_18, ((void*)0), VAR_6,
          VAR_3 | VAR_4,
          VAR_16->irq_name ?: VAR_15->name, ((void*)0));

 FUNC_2(VAR_11, "%s (irq %d) chaining IRQs %d..%d\n", VAR_15->name,
   VAR_18, VAR_13, VAR_13 + VAR_17 - 1);

 return VAR_19 < 0 ? VAR_19 : VAR_13;
}
