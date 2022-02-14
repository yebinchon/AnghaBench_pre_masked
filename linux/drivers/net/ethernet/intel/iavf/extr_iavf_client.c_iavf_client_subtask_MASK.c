
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iavf_client_instance {int state; int lan_info; } ;
struct iavf_client {TYPE_2__* ops; int name; } ;
struct iavf_adapter {scalar_t__ state; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* open ) (int *,struct iavf_client*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct iavf_client_instance* FUNC_1 (struct iavf_adapter*) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,struct iavf_client*) ;
 int FUNC_5 (int ,int *) ;
 struct iavf_client* VAR_2 ;

void FUNC_6(struct iavf_adapter *VAR_3)
{
 struct iavf_client *VAR_4 = VAR_2;
 struct iavf_client_instance *VAR_5;
 int VAR_6 = 0;

 if (VAR_3->state < VAR_1)
  return;


 if (!VAR_4)
  return;


 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  return;

 FUNC_0(&VAR_3->pdev->dev, "Added instance of Client %s\n",
   VAR_4->name);

 if (!FUNC_5(VAR_0, &VAR_5->state)) {


  if (VAR_4->ops && VAR_4->ops->open)
   VAR_6 = VAR_4->ops->open(&VAR_5->lan_info, VAR_4);
  if (!VAR_6)
   FUNC_3(VAR_0,
    &VAR_5->state);
  else

   FUNC_2(VAR_3);
 }
}
