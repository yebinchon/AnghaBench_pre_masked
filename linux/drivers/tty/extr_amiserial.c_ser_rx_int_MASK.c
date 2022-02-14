
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tty; } ;
struct serial_state {TYPE_1__ tport; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct serial_state*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct serial_state *VAR_4 = VAR_3;





 if (!VAR_4->tport.tty)
  return VAR_1;

 FUNC_1(VAR_4);



 return VAR_0;
}
