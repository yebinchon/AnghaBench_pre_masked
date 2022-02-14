
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct enetc_pf {int total_vfs; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int errata; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,int ) ;
 struct enetc_pf* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct enetc_ndev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, int VAR_6, u16 VAR_7,
    u8 VAR_8, __be16 VAR_9)
{
 struct enetc_ndev_priv *VAR_10 = FUNC_3(VAR_5);
 struct enetc_pf *VAR_11 = FUNC_1(VAR_10->si);

 if (VAR_10->si->errata & VAR_1)
  return -VAR_2;

 if (VAR_6 >= VAR_11->total_vfs)
  return -VAR_0;

 if (VAR_9 != FUNC_2(VAR_4))

  return -VAR_3;

 FUNC_0(&VAR_10->si->hw, VAR_6 + 1, VAR_7, VAR_8);
 return 0;
}
