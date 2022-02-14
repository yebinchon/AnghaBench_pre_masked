
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {scalar_t__ rdsin; scalar_t__ rdsout; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct cadet *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = VAR_0->rdsin != VAR_0->rdsout;
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
