
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct device**) ;
 struct device** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct device**) ;
 int FUNC_3 (struct device*,int,struct mfd_cell const*,int,struct resource*,int,struct irq_domain*) ;

int FUNC_4(struct device *VAR_3, int VAR_4,
    const struct mfd_cell *VAR_5, int VAR_6,
    struct resource *VAR_7,
    int VAR_8, struct irq_domain *VAR_9)
{
 struct device **VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_2, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(VAR_10);
  return VAR_11;
 }

 *VAR_10 = VAR_3;
 FUNC_0(VAR_3, VAR_10);

 return VAR_11;
}
