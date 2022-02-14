
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tty; } ;
struct serial_state {TYPE_1__ tport; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int serdatr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct serial_state*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct serial_state *VAR_6 = VAR_5;

 if (VAR_3.serdatr & VAR_2) {




   if (!VAR_6->tport.tty)
  return VAR_1;

   FUNC_1(VAR_6);



 }
 return VAR_0;
}
