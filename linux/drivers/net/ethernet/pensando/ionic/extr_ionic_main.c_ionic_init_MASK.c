
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_dev {int dummy; } ;
struct ionic {int dev_cmd_lock; struct ionic_dev idev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_dev*) ;
 int FUNC_1 (struct ionic*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ionic *VAR_1)
{
 struct ionic_dev *VAR_2 = &VAR_1->idev;
 int VAR_3;

 FUNC_2(&VAR_1->dev_cmd_lock);
 FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_3(&VAR_1->dev_cmd_lock);

 return VAR_3;
}
