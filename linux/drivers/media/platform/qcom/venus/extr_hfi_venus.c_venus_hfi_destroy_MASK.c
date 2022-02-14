
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int lock; } ;
struct venus_core {int * ops; int * priv; } ;


 int FUNC_0 (struct venus_hfi_device*) ;
 int FUNC_1 (int *) ;
 struct venus_hfi_device* FUNC_2 (struct venus_core*) ;
 int FUNC_3 (struct venus_hfi_device*) ;

void FUNC_4(struct venus_core *VAR_0)
{
 struct venus_hfi_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
 VAR_0->priv = ((void*)0);
 VAR_0->ops = ((void*)0);
}
