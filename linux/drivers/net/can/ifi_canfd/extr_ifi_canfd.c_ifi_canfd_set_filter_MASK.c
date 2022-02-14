
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ifi_canfd_priv {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 struct ifi_canfd_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, const u32 VAR_1,
     const u32 VAR_2, const u32 VAR_3)
{
 struct ifi_canfd_priv *VAR_4 = FUNC_2(VAR_0);

 FUNC_3(VAR_2, VAR_4->base + FUNC_1(VAR_1));
 FUNC_3(VAR_3, VAR_4->base + FUNC_0(VAR_1));
}
