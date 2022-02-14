
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nozomi {TYPE_1__* port; scalar_t__ index_start; scalar_t__ open_ttys; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nozomi *VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(" ");

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_3(&VAR_2->port[VAR_3].port, 0);



 while (VAR_2->open_ttys)
  FUNC_1(1);
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_4(VAR_1, VAR_2->index_start + VAR_3);
  FUNC_2(&VAR_2->port[VAR_3].port);
 }
}
