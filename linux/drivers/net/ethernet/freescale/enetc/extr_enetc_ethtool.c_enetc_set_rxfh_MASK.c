
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


 int FUNC_0 (struct enetc_hw*,int const*) ;
 int FUNC_1 (TYPE_1__*,int const*,int ) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, const u32 *VAR_1,
     const u8 *VAR_2, const u8 VAR_3)
{
 struct enetc_ndev_priv *VAR_4 = FUNC_2(VAR_0);
 struct enetc_hw *VAR_5 = &VAR_4->si->hw;
 int VAR_6 = 0;


 if (VAR_2 && VAR_5->port)
  FUNC_0(VAR_5, VAR_2);


 if (VAR_1)
  VAR_6 = FUNC_1(VAR_4->si, VAR_1, VAR_4->si->num_rss);

 return VAR_6;
}
