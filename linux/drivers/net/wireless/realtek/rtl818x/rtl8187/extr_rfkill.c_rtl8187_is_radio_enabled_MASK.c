
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {int rfkill_mask; TYPE_1__* map; } ;
struct TYPE_2__ {int GPIO1; int GPIO0; } ;


 int FUNC_0 (struct rtl8187_priv*,int *) ;
 int FUNC_1 (struct rtl8187_priv*,int *,int) ;

__attribute__((used)) static bool FUNC_2(struct rtl8187_priv *VAR_0)
{
 u8 VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->map->GPIO0);
 FUNC_1(VAR_0, &VAR_0->map->GPIO0, VAR_1 & ~VAR_0->rfkill_mask);
 VAR_1 = FUNC_0(VAR_0, &VAR_0->map->GPIO1);

 return VAR_1 & VAR_0->rfkill_mask;
}
