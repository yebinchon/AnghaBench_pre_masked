
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct w1_slave {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(struct w1_slave *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 && !VAR_3; ++VAR_4)
  VAR_3 = FUNC_0(
   &VAR_2->dev.kobj,
   &(VAR_1[VAR_4]));
 if (VAR_3)
  while (--VAR_4 >= 0)
   FUNC_1(&VAR_2->dev.kobj,
    &(VAR_1[VAR_4]));
 return VAR_3;
}
