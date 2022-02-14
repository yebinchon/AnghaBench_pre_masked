
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_ldg {int irq; } ;
struct niu {int num_ldg; struct niu_ldg* ldg; int * irq_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct niu_ldg*) ;
 int VAR_1 ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (int ,int ,int ,int ,struct niu_ldg*) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_1(VAR_2);

 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_ldg; VAR_3++) {
  struct niu_ldg *VAR_6 = &VAR_2->ldg[VAR_3];

  VAR_5 = FUNC_2(VAR_6->irq, VAR_1, VAR_0,
      VAR_2->irq_name[VAR_3], VAR_6);
  if (VAR_5)
   goto out_free_irqs;

 }

 return 0;

out_free_irqs:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct niu_ldg *VAR_7 = &VAR_2->ldg[VAR_4];

  FUNC_0(VAR_7->irq, VAR_7);
 }
 return VAR_5;
}
