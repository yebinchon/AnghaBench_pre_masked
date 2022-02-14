
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_1(&VAR_1->kobj, &VAR_0);

 return VAR_2;
}
