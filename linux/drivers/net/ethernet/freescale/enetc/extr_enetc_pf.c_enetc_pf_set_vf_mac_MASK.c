
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct enetc_vf_state {int flags; } ;
struct enetc_pf {int total_vfs; struct enetc_vf_state* vf_state; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *) ;
 struct enetc_pf* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct enetc_ndev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct enetc_ndev_priv *VAR_6 = FUNC_3(VAR_3);
 struct enetc_pf *VAR_7 = FUNC_1(VAR_6->si);
 struct enetc_vf_state *VAR_8;

 if (VAR_4 >= VAR_7->total_vfs)
  return -VAR_1;

 if (!FUNC_2(VAR_5))
  return -VAR_0;

 VAR_8 = &VAR_7->vf_state[VAR_4];
 VAR_8->flags |= VAR_2;
 FUNC_0(&VAR_6->si->hw, VAR_4 + 1, VAR_5);
 return 0;
}
