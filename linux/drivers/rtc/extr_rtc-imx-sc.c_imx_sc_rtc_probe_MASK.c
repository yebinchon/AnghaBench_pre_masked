
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_6__ {int range_max; scalar_t__ range_min; int * ops; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(&VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_5->dev, 1);

 VAR_1 = FUNC_3(&VAR_5->dev);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_1->ops = &VAR_3;
 VAR_1->range_min = 0;
 VAR_1->range_max = VAR_0;

 VAR_6 = FUNC_6(VAR_1);
 if (VAR_6)
  return VAR_6;

 FUNC_5(&VAR_2);

 return 0;
}
