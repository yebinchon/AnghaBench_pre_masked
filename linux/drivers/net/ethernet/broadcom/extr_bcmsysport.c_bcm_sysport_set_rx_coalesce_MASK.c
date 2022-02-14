
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct bcm_sysport_priv *VAR_4,
     u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_1);
 VAR_7 &= ~(VAR_0 |
   VAR_2 << VAR_3);
 VAR_7 |= VAR_6;
 VAR_7 |= FUNC_0(VAR_5 * 1000, 8192) << VAR_3;
 FUNC_2(VAR_4, VAR_7, VAR_1);
}
