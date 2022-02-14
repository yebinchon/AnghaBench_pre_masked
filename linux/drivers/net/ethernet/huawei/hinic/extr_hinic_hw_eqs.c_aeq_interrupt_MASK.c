
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_eq_work {int work; struct hinic_eq* data; } ;
struct TYPE_2__ {int entry; } ;
struct hinic_eq {struct hinic_eq_work aeq_work; TYPE_1__ msix_entry; int hwif; } ;
struct hinic_aeqs {int workq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct hinic_aeqs* FUNC_0 (struct hinic_eq*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct hinic_eq_work *VAR_3;
 struct hinic_eq *VAR_4 = VAR_2;
 struct hinic_aeqs *VAR_5;


 FUNC_1(VAR_4->hwif, VAR_4->msix_entry.entry);

 VAR_3 = &VAR_4->aeq_work;
 VAR_3->data = VAR_4;

 VAR_5 = FUNC_0(VAR_4);
 FUNC_2(VAR_5->workq, &VAR_3->work);

 return VAR_0;
}
