
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_ldg {int irq; } ;
struct niu {int num_ldg; struct niu_ldg* ldg; } ;


 int FUNC_0 (int ,struct niu_ldg*) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ldg; VAR_1++) {
  struct niu_ldg *VAR_2 = &VAR_0->ldg[VAR_1];

  FUNC_0(VAR_2->irq, VAR_2);
 }
}
