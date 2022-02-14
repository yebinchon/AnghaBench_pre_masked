
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cobalt {TYPE_1__* i2c_adap; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct cobalt *VAR_1)
{
 int VAR_2;

 FUNC_0(1, "i2c exit\n");

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1("unregistered bus %s\n", VAR_1->i2c_adap[VAR_2].name);
  FUNC_2(&VAR_1->i2c_adap[VAR_2]);
 }
}
