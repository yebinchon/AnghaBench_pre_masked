
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riowd {int regs; } ;
struct platform_device {int * resource; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct riowd* FUNC_2 (struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct riowd *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0);
 FUNC_1(&VAR_1->resource[0], VAR_2->regs, 2);

 return 0;
}
