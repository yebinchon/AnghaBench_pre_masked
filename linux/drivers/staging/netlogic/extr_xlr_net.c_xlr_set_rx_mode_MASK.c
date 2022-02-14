
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_net_priv {int base_addr; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 struct xlr_net_priv *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->base_addr, VAR_5);

 if (VAR_6->flags & VAR_0) {
  VAR_8 |= (1 << VAR_3) |
  (1 << VAR_4) |
  (1 << VAR_1) |
  (1 << VAR_2);
 } else {
  VAR_8 &= ~((1 << VAR_4) |
  (1 << VAR_2));
 }

 FUNC_2(VAR_7->base_addr, VAR_5, VAR_8);
}
