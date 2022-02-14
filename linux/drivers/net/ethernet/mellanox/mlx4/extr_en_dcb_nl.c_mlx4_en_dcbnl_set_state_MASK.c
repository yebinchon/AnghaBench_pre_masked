
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int dcbx_cap; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_3, u8 VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 if (!(VAR_5->dcbx_cap & VAR_0))
  return 1;

 if (!!(VAR_4) == !!(VAR_5->flags & VAR_2))
  return 0;

 if (VAR_4) {
  VAR_5->flags |= VAR_2;
  VAR_6 = VAR_1;
 } else {
  VAR_5->flags &= ~VAR_2;
 }

 if (FUNC_0(VAR_3, VAR_6))
  return 1;

 return 0;
}
