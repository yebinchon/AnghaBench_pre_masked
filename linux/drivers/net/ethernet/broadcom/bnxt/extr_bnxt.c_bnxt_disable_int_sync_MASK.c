
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt {int cp_nr_rings; TYPE_1__* irq_tbl; int intr_sem; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnxt*,int) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->intr_sem);

 FUNC_2(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  int VAR_2 = FUNC_1(VAR_0, VAR_1);

  FUNC_3(VAR_0->irq_tbl[VAR_2].vector);
 }
}
