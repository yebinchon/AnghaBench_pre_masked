
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scm_driver {int (* notify ) (struct scm_device*,int ) ;} ;
struct TYPE_5__ {int kobj; int driver; } ;
struct TYPE_4__ {scalar_t__ rank; scalar_t__ oper_state; } ;
struct scm_device {TYPE_2__ dev; TYPE_1__ attrs; } ;
struct sale {scalar_t__ rank; scalar_t__ op_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct scm_device*,int ) ;
 struct scm_driver* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct scm_device *VAR_2, struct sale *VAR_3)
{
 struct scm_driver *VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_2->dev);
 VAR_5 = VAR_2->attrs.rank != VAR_3->rank ||
    VAR_2->attrs.oper_state != VAR_3->op_state;
 VAR_2->attrs.rank = VAR_3->rank;
 VAR_2->attrs.oper_state = VAR_3->op_state;
 if (!VAR_2->dev.driver)
  goto out;
 VAR_4 = FUNC_4(VAR_2->dev.driver);
 if (VAR_5 && VAR_4->notify)
  VAR_4->notify(VAR_2, VAR_1);
out:
 FUNC_1(&VAR_2->dev);
 if (VAR_5)
  FUNC_2(&VAR_2->dev.kobj, VAR_0);
}
