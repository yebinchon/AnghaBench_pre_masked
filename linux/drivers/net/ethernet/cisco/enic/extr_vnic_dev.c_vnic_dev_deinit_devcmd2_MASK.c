
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_dev {TYPE_1__* devcmd2; } ;
struct TYPE_2__ {int wq; int results_ring; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct vnic_dev*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vnic_dev *VAR_0)
{
 FUNC_1(VAR_0, &VAR_0->devcmd2->results_ring);
 FUNC_2(&VAR_0->devcmd2->wq);
 FUNC_3(&VAR_0->devcmd2->wq);
 FUNC_0(VAR_0->devcmd2);
}
