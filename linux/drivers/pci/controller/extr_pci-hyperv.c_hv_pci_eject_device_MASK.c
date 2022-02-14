
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_pci_dev {int wrk; TYPE_1__* hbus; int state; } ;
struct TYPE_2__ {int wq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hv_pci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hv_pci_dev *VAR_2)
{
 VAR_2->state = VAR_1;
 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->wrk, VAR_0);
 FUNC_1(VAR_2->hbus);
 FUNC_3(VAR_2->hbus->wq, &VAR_2->wrk);
}
