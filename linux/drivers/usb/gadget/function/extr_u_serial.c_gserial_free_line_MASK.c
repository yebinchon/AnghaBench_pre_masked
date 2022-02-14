
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_port {int dummy; } ;
struct TYPE_2__ {int lock; struct gs_port* port; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct gs_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,unsigned char) ;

void FUNC_6(unsigned char VAR_2)
{
 struct gs_port *VAR_3;

 FUNC_3(&VAR_1[VAR_2].lock);
 if (FUNC_0(!VAR_1[VAR_2].port)) {
  FUNC_4(&VAR_1[VAR_2].lock);
  return;
 }
 VAR_3 = VAR_1[VAR_2].port;
 VAR_1[VAR_2].port = ((void*)0);
 FUNC_4(&VAR_1[VAR_2].lock);

 FUNC_2(VAR_3);
 FUNC_5(VAR_0, VAR_2);
 FUNC_1();
}
