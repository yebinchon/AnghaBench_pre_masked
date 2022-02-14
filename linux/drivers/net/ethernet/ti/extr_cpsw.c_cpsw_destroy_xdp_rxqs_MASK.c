
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int slaves; } ;
struct cpsw_common {int rx_ch_num; int ** page_pool; TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {struct net_device* ndev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cpsw_common *VAR_0)
{
 struct net_device *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->rx_ch_num; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->data.slaves; VAR_2++) {
   VAR_1 = VAR_0->slaves[VAR_2].ndev;
   if (!VAR_1)
    continue;

   FUNC_0(FUNC_1(VAR_1), VAR_3);
  }

  FUNC_2(VAR_0->page_pool[VAR_3]);
  VAR_0->page_pool[VAR_3] = ((void*)0);
 }
}
