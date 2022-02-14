
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_dev {TYPE_1__* i2c_adap; } ;
struct TYPE_2__ {int * algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct solo_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->i2c_adap[VAR_2].algo_data)
   continue;
  FUNC_0(&VAR_1->i2c_adap[VAR_2]);
  VAR_1->i2c_adap[VAR_2].algo_data = ((void*)0);
 }
}
