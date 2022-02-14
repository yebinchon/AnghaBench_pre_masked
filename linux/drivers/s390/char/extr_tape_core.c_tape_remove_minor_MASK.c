
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int first_minor; int node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tape_device *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->node);
 VAR_1->first_minor = -1;
 FUNC_2(&VAR_0);
}
