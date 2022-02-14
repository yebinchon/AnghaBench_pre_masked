
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_f19_data* family_data; int dev; } ;
struct w1_f19_data {int adapter; } ;


 int FUNC_0 (int *,struct w1_f19_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct w1_slave *VAR_0)
{
 struct w1_f19_data *VAR_1 = VAR_0->family_data;


 FUNC_1(&VAR_1->adapter);


 FUNC_0(&VAR_0->dev, VAR_1);
 VAR_0->family_data = ((void*)0);
}
