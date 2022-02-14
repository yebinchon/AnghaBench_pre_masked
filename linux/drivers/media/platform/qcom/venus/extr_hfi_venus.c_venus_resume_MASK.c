
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int suspended; int lock; } ;
struct venus_core {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct venus_hfi_device* FUNC_2 (struct venus_core*) ;
 int FUNC_3 (struct venus_hfi_device*) ;

__attribute__((used)) static int FUNC_4(struct venus_core *VAR_0)
{
 struct venus_hfi_device *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = 0;

 FUNC_0(&VAR_1->lock);

 if (!VAR_1->suspended)
  goto unlock;

 VAR_2 = FUNC_3(VAR_1);

unlock:
 if (!VAR_2)
  VAR_1->suspended = 0;

 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
