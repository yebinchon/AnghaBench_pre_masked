
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {scalar_t__ phy_interface; TYPE_1__* hw_params; scalar_t__ ext_phy; scalar_t__ internal_phy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bcmgenet_priv*) ;
 scalar_t__ FUNC_1 (struct bcmgenet_priv*) ;
 scalar_t__ FUNC_2 (struct bcmgenet_priv*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bcmgenet_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bcmgenet_priv *VAR_5)
{
 u32 VAR_6 = 0;




 if (VAR_5->internal_phy) {
  VAR_6 |= VAR_3;
  if (FUNC_0(VAR_5) || FUNC_1(VAR_5) || FUNC_2(VAR_5))
   VAR_6 |= VAR_4;
 } else if (VAR_5->ext_phy) {
  VAR_6 |= VAR_3;
 } else if (VAR_5->phy_interface == VAR_2) {
  if (VAR_5->hw_params->flags & VAR_0)
   VAR_6 |= VAR_3;
 }
 FUNC_3(VAR_5, VAR_6, VAR_1);
}
