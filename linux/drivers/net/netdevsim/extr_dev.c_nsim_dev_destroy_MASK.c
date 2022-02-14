
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {int port_list_lock; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int FUNC_3 (struct devlink*,int *) ;
 int FUNC_4 (struct devlink*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nsim_dev*) ;
 int FUNC_7 (struct nsim_dev*) ;
 int FUNC_8 (struct nsim_dev*) ;
 int FUNC_9 (struct devlink*) ;
 int VAR_0 ;
 struct devlink* FUNC_10 (struct nsim_dev*) ;

__attribute__((used)) static void FUNC_11(struct nsim_dev *VAR_1)
{
 struct devlink *VAR_2 = FUNC_10(VAR_1);

 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 FUNC_9(VAR_2);
 FUNC_8(VAR_1);
 FUNC_2(VAR_2, VAR_0,
      FUNC_0(VAR_0));
 FUNC_4(VAR_2);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_5(&VAR_1->port_list_lock);
 FUNC_1(VAR_2);
}
