
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct TYPE_2__ {int master; } ;
struct butterfly {TYPE_1__ bitbang; int pd; struct parport* port; } ;


 struct butterfly* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct parport*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct parport *VAR_1)
{
 struct butterfly *VAR_2;





 if (!VAR_0 || VAR_0->port != VAR_1)
  return;
 VAR_2 = VAR_0;
 VAR_0 = ((void*)0);


 FUNC_4(&VAR_2->bitbang);


 FUNC_3(VAR_2->port, 0);
 FUNC_0(10);

 FUNC_1(VAR_2->pd);
 FUNC_2(VAR_2->pd);

 FUNC_5(VAR_2->bitbang.master);
}
