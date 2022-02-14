
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int slaves; } ;
struct cpsw_common {int dma; TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {struct net_device* ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpsw_common*) ;
 struct cpsw_common* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct cpsw_common *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 FUNC_1(VAR_1);



 for (VAR_2 = 0; VAR_2 < VAR_1->data.slaves; VAR_2++) {
  VAR_0 = VAR_1->slaves[VAR_2].ndev;
  if (!(VAR_0 && FUNC_3(VAR_0)))
   continue;

  FUNC_4(VAR_0);


  FUNC_5();
 }


 FUNC_0(VAR_1->dma);
}
