
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_cmd_work {struct be_adapter* adapter; int work; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (int *,char*) ;
 struct be_cmd_work* FUNC_2 (int,int ) ;

__attribute__((used)) static struct be_cmd_work *FUNC_3(struct be_adapter *VAR_1,
      void (*VAR_2)(struct work_struct *))
{
 struct be_cmd_work *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_1(&VAR_1->pdev->dev,
   "be_work memory allocation failed\n");
  return ((void*)0);
 }

 FUNC_0(&VAR_3->work, VAR_2);
 VAR_3->adapter = VAR_1;
 return VAR_3;
}
