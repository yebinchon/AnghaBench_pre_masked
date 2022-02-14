
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int type; int ctl; int send; int ofld_dev_list; } ;
struct adapter {struct t3cdev tdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct t3cdev*) ;
 int VAR_0 ;
 int FUNC_3 (struct t3cdev*) ;
 int VAR_1 ;

void FUNC_4(struct adapter *VAR_2)
{
 struct t3cdev *VAR_3 = &VAR_2->tdev;

 FUNC_0(&VAR_3->ofld_dev_list);

 FUNC_2(VAR_3);
 VAR_3->send = VAR_1;
 VAR_3->ctl = VAR_0;
 VAR_3->type = FUNC_1(VAR_2);

 FUNC_3(VAR_3);
}
