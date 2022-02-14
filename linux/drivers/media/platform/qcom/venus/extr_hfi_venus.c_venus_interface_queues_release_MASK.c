
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int lock; int sfr; int ifaceq_table; int * queues; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct venus_hfi_device*,int *) ;

__attribute__((used)) static void FUNC_4(struct venus_hfi_device *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 FUNC_3(VAR_0, &VAR_0->ifaceq_table);
 FUNC_3(VAR_0, &VAR_0->sfr);

 FUNC_0(VAR_0->queues, 0, sizeof(VAR_0->queues));
 FUNC_0(&VAR_0->ifaceq_table, 0, sizeof(VAR_0->ifaceq_table));
 FUNC_0(&VAR_0->sfr, 0, sizeof(VAR_0->sfr));

 FUNC_2(&VAR_0->lock);
}
