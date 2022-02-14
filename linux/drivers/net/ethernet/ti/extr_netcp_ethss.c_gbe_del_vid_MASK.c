
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_priv {int ale; } ;
struct gbe_intf {int active_vlans; struct gbe_priv* gbe_dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1)
{
 struct gbe_intf *VAR_2 = VAR_0;
 struct gbe_priv *VAR_3 = VAR_2->gbe_dev;

 FUNC_1(VAR_3->ale, VAR_1, 0);
 FUNC_0(VAR_1, VAR_2->active_vlans);
 return 0;
}
