
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mtu; } ;
struct qede_reload_args {int * func; TYPE_3__ u; } ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int features; } ;
struct TYPE_5__ {TYPE_1__* common; } ;
struct TYPE_4__ {int (* update_mtu ) (int ,int) ;} ;


 int FUNC_0 (struct qede_dev*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qede_dev*,struct qede_reload_args*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct net_device *VAR_5, int VAR_6)
{
 struct qede_dev *VAR_7 = FUNC_1(VAR_5);
 struct qede_reload_args VAR_8;

 FUNC_0(VAR_7, (VAR_2 | VAR_1),
     "Configuring MTU size of %d\n", VAR_6);

 if (VAR_6 > VAR_3)
  VAR_5->features &= ~VAR_0;


 VAR_8.u.mtu = VAR_6;
 VAR_8.func = &VAR_4;
 FUNC_2(VAR_7, &VAR_8, 0);

 VAR_7->ops->common->update_mtu(VAR_7->cdev, VAR_6);

 return 0;
}
