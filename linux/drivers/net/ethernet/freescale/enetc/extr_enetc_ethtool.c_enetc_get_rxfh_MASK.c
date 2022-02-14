
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct enetc_hw {scalar_t__ port; } ;
struct TYPE_2__ {int num_rss; struct enetc_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (struct enetc_hw*,int ) ;
 struct enetc_ndev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
     u8 *VAR_5)
{
 struct enetc_ndev_priv *VAR_6 = FUNC_3(VAR_2);
 struct enetc_hw *VAR_7 = &VAR_6->si->hw;
 int VAR_8 = 0, VAR_9;


 if (VAR_5)
  *VAR_5 = VAR_1;


 if (VAR_4 && VAR_7->port)
  for (VAR_9 = 0; VAR_9 < VAR_0 / 4; VAR_9++)
   ((u32 *)VAR_4)[VAR_9] = FUNC_2(VAR_7, FUNC_0(VAR_9));


 if (VAR_3)
  VAR_8 = FUNC_1(VAR_6->si, VAR_3, VAR_6->si->num_rss);

 return VAR_8;
}
