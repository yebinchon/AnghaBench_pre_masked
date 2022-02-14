
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int port_list_lock; } ;
struct nsim_bus_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nsim_dev*,unsigned int) ;
 scalar_t__ FUNC_1 (struct nsim_dev*,unsigned int) ;
 struct nsim_dev* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct nsim_bus_dev *VAR_1,
        unsigned int VAR_2)
{
 struct nsim_dev *VAR_3 = FUNC_2(&VAR_1->dev);
 int VAR_4;

 FUNC_3(&VAR_3->port_list_lock);
 if (FUNC_1(VAR_3, VAR_2))
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_4(&VAR_3->port_list_lock);
 return VAR_4;
}
