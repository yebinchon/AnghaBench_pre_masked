
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int lock; int pdev; int ccdc; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 struct vpfe_device* FUNC_4 (struct file*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct vpfe_device *VAR_1 = FUNC_4(VAR_0);
 bool VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->lock);


 VAR_2 = FUNC_3(VAR_0);


 VAR_3 = FUNC_0(VAR_0, ((void*)0));





 if (VAR_2)
  FUNC_5(&VAR_1->ccdc, VAR_1->pdev);

 FUNC_2(&VAR_1->lock);

 return VAR_3;
}
