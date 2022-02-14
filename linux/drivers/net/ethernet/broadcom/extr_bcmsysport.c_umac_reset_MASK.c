
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {scalar_t__ is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct bcm_sysport_priv *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->is_lite)
  return;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_2, VAR_3, VAR_1);
 FUNC_0(10);
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_2, VAR_3, VAR_1);
}
