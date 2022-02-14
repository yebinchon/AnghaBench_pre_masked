
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct TYPE_4__ {int slaves; } ;
struct cpsw_common {TYPE_1__* slaves; TYPE_2__ data; int dma; scalar_t__ usage_count; } ;
struct TYPE_3__ {struct net_device* ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpsw_priv*) ;
 int FUNC_2 (struct cpsw_common*) ;
 struct cpsw_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct cpsw_priv *VAR_1 = FUNC_3(VAR_0);
 struct cpsw_common *VAR_2 = VAR_1->cpsw;
 int VAR_3, VAR_4;


 if (VAR_2->usage_count) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4)
   return VAR_4;

  FUNC_0(VAR_2->dma);
  FUNC_2(VAR_2);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->data.slaves; VAR_3++) {
  VAR_0 = VAR_2->slaves[VAR_3].ndev;
  if (VAR_0 && FUNC_4(VAR_0))
   FUNC_5(VAR_0);
 }

 return 0;
}
