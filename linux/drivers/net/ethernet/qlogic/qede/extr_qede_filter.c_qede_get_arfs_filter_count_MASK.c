
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct TYPE_2__ {int filter_count; } ;


 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;

int FUNC_2(struct qede_dev *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(VAR_0);

 if (!VAR_0->arfs)
  goto unlock;

 VAR_1 = VAR_0->arfs->filter_count;

unlock:
 FUNC_1(VAR_0);
 return VAR_1;
}
