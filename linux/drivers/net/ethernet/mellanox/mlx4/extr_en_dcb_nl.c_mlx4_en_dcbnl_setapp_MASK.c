
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int dcbx_cap; } ;
struct dcb_app {void* priority; int protocol; void* selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (struct dcb_app*,int ,int) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u8 VAR_3,
    u16 VAR_4, u8 VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_2(VAR_2);
 struct dcb_app VAR_7;

 if (!(VAR_6->dcbx_cap & VAR_0))
  return -VAR_1;

 FUNC_1(&VAR_7, 0, sizeof(struct dcb_app));
 VAR_7.selector = VAR_3;
 VAR_7.protocol = VAR_4;
 VAR_7.priority = VAR_5;

 return FUNC_0(VAR_2, &VAR_7);
}
