
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int irq_name; scalar_t__ virq; } ;
struct ocxl_link {struct spa* spa; } ;


 int FUNC_0 (scalar_t__,struct ocxl_link*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spa*) ;

__attribute__((used)) static void FUNC_4(struct ocxl_link *VAR_0)
{
 struct spa *VAR_1 = VAR_0->spa;

 if (VAR_1->virq) {
  FUNC_0(VAR_1->virq, VAR_0);
  FUNC_1(VAR_1->virq);
 }
 FUNC_2(VAR_1->irq_name);
 FUNC_3(VAR_1);
}
