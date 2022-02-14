
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; struct lbs_private* ml_priv; } ;
struct lbs_private {TYPE_1__* mesh_dev; int current_addr; struct net_device* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct net_device *VAR_2, void *VAR_3)
{
 int VAR_4 = 0;
 struct lbs_private *VAR_5 = VAR_2->ml_priv;
 struct sockaddr *VAR_6 = VAR_3;





 if (FUNC_0(VAR_5))
  return -VAR_0;


 VAR_2 = VAR_5->dev;

 FUNC_1(VAR_5->current_addr, VAR_6->sa_data, VAR_1);
 FUNC_1(VAR_2->dev_addr, VAR_6->sa_data, VAR_1);
 if (VAR_5->mesh_dev)
  FUNC_1(VAR_5->mesh_dev->dev_addr, VAR_6->sa_data, VAR_1);

 return VAR_4;
}
