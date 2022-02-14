
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_pf {int total_vfs; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct enetc_pf* FUNC_3 (TYPE_1__*) ;
 struct enetc_ndev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, int VAR_3, bool VAR_4)
{
 struct enetc_ndev_priv *VAR_5 = FUNC_4(VAR_2);
 struct enetc_pf *VAR_6 = FUNC_3(VAR_5->si);
 u32 VAR_7;

 if (VAR_3 >= VAR_6->total_vfs)
  return -VAR_0;

 VAR_7 = FUNC_1(&VAR_5->si->hw, FUNC_0(VAR_3 + 1));
 VAR_7 = (VAR_7 & ~VAR_1) | (VAR_4 ? VAR_1 : 0);
 FUNC_2(&VAR_5->si->hw, FUNC_0(VAR_3 + 1), VAR_7);

 return 0;
}
