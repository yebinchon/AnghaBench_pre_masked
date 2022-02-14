
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int,struct mfd_cell const*,int *,struct resource*,int,struct irq_domain*) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct device *VAR_2, int VAR_3,
      const struct mfd_cell *VAR_4, int VAR_5,
      struct resource *VAR_6,
      int VAR_7, struct irq_domain *VAR_8)
{
 int VAR_9;
 int VAR_10;
 atomic_t *VAR_11;


 VAR_11 = FUNC_1(VAR_5, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_0(&VAR_11[VAR_9], 0);
  VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4 + VAR_9, VAR_11 + VAR_9, VAR_6,
         VAR_7, VAR_8);
  if (VAR_10)
   goto fail;
 }

 return 0;

fail:
 if (VAR_9)
  FUNC_4(VAR_2);
 else
  FUNC_2(VAR_11);
 return VAR_10;
}
