
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int suspended; struct venus_core* core; int lock; } ;
struct venus_core {int core_caps; int * ops; struct venus_hfi_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct venus_hfi_device*) ;
 struct venus_hfi_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct venus_hfi_device*) ;

int FUNC_4(struct venus_core *VAR_7)
{
 struct venus_hfi_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return -VAR_4;

 FUNC_2(&VAR_8->lock);

 VAR_8->core = VAR_7;
 VAR_8->suspended = 1;
 VAR_7->priv = VAR_8;
 VAR_7->ops = &VAR_6;
 VAR_7->core_caps = VAR_2 | VAR_3 |
     VAR_1 |
     VAR_0;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto err_kfree;

 return 0;

err_kfree:
 FUNC_0(VAR_8);
 VAR_7->priv = ((void*)0);
 VAR_7->ops = ((void*)0);
 return VAR_9;
}
