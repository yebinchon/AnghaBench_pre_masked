
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_dev {scalar_t__ port_info_pa; int * port_info; int port_info_sz; } ;
struct ionic {int dev; int dev_cmd_lock; struct ionic_dev idev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *,scalar_t__) ;
 int FUNC_2 (struct ionic_dev*) ;
 int FUNC_3 (struct ionic*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ionic *VAR_1)
{
 struct ionic_dev *VAR_2 = &VAR_1->idev;
 int VAR_3;

 if (!VAR_2->port_info)
  return 0;

 FUNC_4(&VAR_1->dev_cmd_lock);
 FUNC_2(VAR_2);
 VAR_3 = FUNC_3(VAR_1, VAR_0);
 FUNC_5(&VAR_1->dev_cmd_lock);

 FUNC_1(VAR_1->dev, VAR_2->port_info_sz,
     VAR_2->port_info, VAR_2->port_info_pa);

 VAR_2->port_info = ((void*)0);
 VAR_2->port_info_pa = 0;

 if (VAR_3)
  FUNC_0(VAR_1->dev, "Failed to reset port\n");

 return VAR_3;
}
