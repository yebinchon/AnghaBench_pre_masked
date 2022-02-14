
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_enet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bcm_enet_priv*,int) ;
 int FUNC_1 (struct bcm_enet_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct bcm_enet_priv *VAR_5, int VAR_6,
         int VAR_7)
{
 u32 VAR_8, VAR_9;

 VAR_8 = VAR_7 << VAR_3;
 VAR_8 |= 0x2 << VAR_4;
 VAR_8 |= VAR_6 << VAR_1;
 VAR_8 |= VAR_0;

 if (FUNC_0(VAR_5, VAR_8))
  return -1;

 VAR_9 = FUNC_1(VAR_5, VAR_2);
 VAR_9 &= 0xffff;
 return VAR_9;
}
