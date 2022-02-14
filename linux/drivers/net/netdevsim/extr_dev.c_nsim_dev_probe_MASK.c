
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int port_list_lock; } ;
struct nsim_bus_dev {int port_count; int dev; } ;


 scalar_t__ FUNC_0 (struct nsim_dev*) ;
 int FUNC_1 (struct nsim_dev*) ;
 int FUNC_2 (struct nsim_dev*,int) ;
 int FUNC_3 (int *,struct nsim_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct nsim_dev* FUNC_6 (struct nsim_bus_dev*,int) ;
 int FUNC_7 (struct nsim_dev*) ;
 int FUNC_8 (struct nsim_dev*) ;

int FUNC_9(struct nsim_bus_dev *VAR_0)
{
 struct nsim_dev *VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_1 = FUNC_6(VAR_0, VAR_0->port_count);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 FUNC_3(&VAR_0->dev, VAR_1);

 FUNC_4(&VAR_1->port_list_lock);
 for (VAR_2 = 0; VAR_2 < VAR_0->port_count; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   goto err_port_del_all;
 }
 FUNC_5(&VAR_1->port_list_lock);
 return 0;

err_port_del_all:
 FUNC_5(&VAR_1->port_list_lock);
 FUNC_8(VAR_1);
 FUNC_7(VAR_1);
 return VAR_3;
}
