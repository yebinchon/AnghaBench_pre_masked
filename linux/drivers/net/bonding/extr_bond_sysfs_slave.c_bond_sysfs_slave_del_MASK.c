
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave_attribute {int attr; } ;
struct slave {int kobj; } ;


 int FUNC_0 (int *) ;
 struct slave_attribute** VAR_0 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct slave *VAR_1)
{
 const struct slave_attribute **VAR_2;

 for (VAR_2 = VAR_0; *VAR_2; ++VAR_2)
  FUNC_1(&VAR_1->kobj, &((*VAR_2)->attr));

 FUNC_0(&VAR_1->kobj);
}
