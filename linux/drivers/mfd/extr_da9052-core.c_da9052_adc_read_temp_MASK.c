
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9052*,int ) ;
 int* VAR_1 ;

int FUNC_1(struct da9052 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 <= 0)
  return VAR_3;


 return VAR_1[VAR_3 - 1];
}
