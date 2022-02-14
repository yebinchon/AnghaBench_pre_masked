
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_adapter {unsigned int num_sockets; int dev; int id; TYPE_1__** sockets; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_6(struct tifm_adapter *VAR_3)
{
 unsigned int VAR_4;

 FUNC_2(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_sockets; ++VAR_4) {
  if (VAR_3->sockets[VAR_4])
   FUNC_1(&VAR_3->sockets[VAR_4]->dev);
 }

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_0, VAR_3->id);
 FUNC_5(&VAR_1);
 FUNC_0(&VAR_3->dev);
}
