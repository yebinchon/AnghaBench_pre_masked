
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct anybuss_host {int qcache; int qthread; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct anybuss_host*) ;

void FUNC_4(struct anybuss_host *VAR_0)
{
 struct anybuss_host *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->client->dev);
 FUNC_2(VAR_1->qthread);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1->qcache);
}
