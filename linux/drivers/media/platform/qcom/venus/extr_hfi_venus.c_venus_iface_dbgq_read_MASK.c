
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct venus_hfi_device*,void*) ;

__attribute__((used)) static int FUNC_3(struct venus_hfi_device *VAR_1, void *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_1->lock);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
