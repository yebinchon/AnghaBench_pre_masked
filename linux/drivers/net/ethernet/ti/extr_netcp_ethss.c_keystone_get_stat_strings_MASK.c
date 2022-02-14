
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct netcp_intf {int dummy; } ;
struct net_device {int dummy; } ;
struct gbe_priv {int num_et_stats; TYPE_1__* et_stats; } ;
struct gbe_intf {struct gbe_priv* gbe_dev; } ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;


 struct gbe_intf* FUNC_0 (struct netcp_intf*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct netcp_intf* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          uint32_t VAR_2, uint8_t *VAR_3)
{
 struct netcp_intf *VAR_4 = FUNC_2(VAR_1);
 struct gbe_intf *VAR_5;
 struct gbe_priv *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return;
 VAR_6 = VAR_5->gbe_dev;

 switch (VAR_2) {
 case 129:
  for (VAR_7 = 0; VAR_7 < VAR_6->num_et_stats; VAR_7++) {
   FUNC_1(VAR_3, VAR_6->et_stats[VAR_7].desc,
          VAR_0);
   VAR_3 += VAR_0;
  }
  break;
 case 128:
  break;
 }
}
