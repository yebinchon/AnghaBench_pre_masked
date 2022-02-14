
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;
struct bcm_sysport_priv {scalar_t__ is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcm_sysport_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 struct bcm_sysport_priv *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;

 if (VAR_5->is_lite)
  return;

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_4->flags & VAR_2)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_2(VAR_5, VAR_6, VAR_3);


 if (VAR_4->flags & VAR_1)
  return;
}
