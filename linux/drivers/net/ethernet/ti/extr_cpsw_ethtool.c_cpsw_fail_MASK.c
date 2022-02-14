
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int slaves; } ;
struct cpsw_common {TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {struct net_device* ndev; } ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct cpsw_common *VAR_0)
{
 struct net_device *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->data.slaves; VAR_2++) {
  VAR_1 = VAR_0->slaves[VAR_2].ndev;
  if (VAR_1)
   FUNC_0(VAR_1);
 }
}
