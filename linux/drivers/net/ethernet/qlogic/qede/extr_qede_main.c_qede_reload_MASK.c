
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_reload_args {int (* func ) (struct qede_dev*,struct qede_reload_args*) ;} ;
struct qede_dev {scalar_t__ state; int ndev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qede_dev*,int ,int) ;
 int FUNC_4 (struct qede_dev*,int ,int) ;
 int FUNC_5 (struct qede_dev*,struct qede_reload_args*) ;
 int FUNC_6 (struct qede_dev*,struct qede_reload_args*) ;

void FUNC_7(struct qede_dev *VAR_3,
   struct qede_reload_args *VAR_4, bool VAR_5)
{
 if (!VAR_5)
  FUNC_0(VAR_3);





 if (VAR_3->state == VAR_1) {
  FUNC_4(VAR_3, VAR_2, 1);
  if (VAR_4)
   VAR_4->func(VAR_3, VAR_4);
  FUNC_3(VAR_3, VAR_0, 1);


  FUNC_2(VAR_3->ndev);
 } else if (VAR_4) {
  VAR_4->func(VAR_3, VAR_4);
 }

 if (!VAR_5)
  FUNC_1(VAR_3);
}
