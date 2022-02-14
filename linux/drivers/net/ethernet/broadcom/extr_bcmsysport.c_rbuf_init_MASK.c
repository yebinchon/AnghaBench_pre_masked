
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {scalar_t__ is_lite; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct bcm_sysport_priv *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 VAR_7 |= VAR_1 | VAR_3;

 if (VAR_6->is_lite)
  VAR_7 &= ~VAR_5;


 if (!FUNC_0(VAR_0))
  VAR_7 |= VAR_4;
 else
  VAR_7 &= ~VAR_4;
 FUNC_2(VAR_6, VAR_7, VAR_2);
}
