
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct hinic_eq {int ceq_tasklet; TYPE_1__ msix_entry; int hwif; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct hinic_eq *VAR_3 = VAR_2;


 FUNC_0(VAR_3->hwif, VAR_3->msix_entry.entry);

 FUNC_1(&VAR_3->ceq_tasklet);

 return VAR_0;
}
